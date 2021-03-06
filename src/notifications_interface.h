/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -p notifications_interface.h: ../ukui-notifycation/org.freedesktop.Notifications.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef NOTIFICATIONS_INTERFACE_H
#define NOTIFICATIONS_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freedesktop.Notifications
 */
class OrgFreedesktopNotificationsInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.Notifications"; }

public:
    OrgFreedesktopNotificationsInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopNotificationsInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> ClearRecords()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("ClearRecords"), argumentList);
    }

    inline QDBusPendingReply<> CloseNotification(uint id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        return asyncCallWithArgumentList(QStringLiteral("CloseNotification"), argumentList);
    }

    inline QDBusPendingReply<QString> GetAllRecords()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetAllRecords"), argumentList);
    }

    inline QDBusPendingReply<QStringList> GetCapabilities()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetCapabilities"), argumentList);
    }

    inline QDBusPendingReply<QString> GetRecordById(const QString &id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        return asyncCallWithArgumentList(QStringLiteral("GetRecordById"), argumentList);
    }

    inline QDBusPendingReply<QString> GetRecordsFromId(int rowCount, const QString &offsetId)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(rowCount) << QVariant::fromValue(offsetId);
        return asyncCallWithArgumentList(QStringLiteral("GetRecordsFromId"), argumentList);
    }

    inline QDBusPendingReply<QString, QString, QString, QString> GetServerInformation()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetServerInformation"), argumentList);
    }
    inline QDBusReply<QString> GetServerInformation(QString &name, QString &vender, QString &version)
    {
        QList<QVariant> argumentList;
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("GetServerInformation"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 4) {
            name = qdbus_cast<QString>(reply.arguments().at(1));
            vender = qdbus_cast<QString>(reply.arguments().at(2));
            version = qdbus_cast<QString>(reply.arguments().at(3));
        }
        return reply;
    }

    inline QDBusPendingReply<uint> Notify(const QString &in0, uint replacesId, const QString &in2, const QString &in3, const QString &in4, const QStringList &in5, const QVariantMap &in6, int in7)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(replacesId) << QVariant::fromValue(in2) << QVariant::fromValue(in3) << QVariant::fromValue(in4) << QVariant::fromValue(in5) << QVariant::fromValue(in6) << QVariant::fromValue(in7);
        return asyncCallWithArgumentList(QStringLiteral("Notify"), argumentList);
    }

    inline QDBusPendingReply<> RemoveRecord(const QString &id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        return asyncCallWithArgumentList(QStringLiteral("RemoveRecord"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void ActionInvoked();
    void NotificationClosed();
    void RecordAdded();
};

namespace org {
  namespace freedesktop {
    typedef ::OrgFreedesktopNotificationsInterface Notifications;
  }
}
#endif
