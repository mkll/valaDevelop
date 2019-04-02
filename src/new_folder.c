/* new_folder.c generated by valac UNKNOWN, the Vala compiler
 * generated from new_folder.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>
#include <glib/gi18n-lib.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <gdk-pixbuf/gdk-pixbuf.h>

#define VALA_DEVELOP_TYPE_NEW_FOLDER (vala_develop_new_folder_get_type ())
#define VALA_DEVELOP_NEW_FOLDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_DEVELOP_TYPE_NEW_FOLDER, valaDevelopNewFolder))
#define VALA_DEVELOP_NEW_FOLDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_DEVELOP_TYPE_NEW_FOLDER, valaDevelopNewFolderClass))
#define VALA_DEVELOP_IS_NEW_FOLDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_DEVELOP_TYPE_NEW_FOLDER))
#define VALA_DEVELOP_IS_NEW_FOLDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_DEVELOP_TYPE_NEW_FOLDER))
#define VALA_DEVELOP_NEW_FOLDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_DEVELOP_TYPE_NEW_FOLDER, valaDevelopNewFolderClass))

typedef struct _valaDevelopNewFolder valaDevelopNewFolder;
typedef struct _valaDevelopNewFolderClass valaDevelopNewFolderClass;
typedef struct _valaDevelopNewFolderPrivate valaDevelopNewFolderPrivate;
enum  {
	VALA_DEVELOP_NEW_FOLDER_0_PROPERTY,
	VALA_DEVELOP_NEW_FOLDER_NUM_PROPERTIES
};
static GParamSpec* vala_develop_new_folder_properties[VALA_DEVELOP_NEW_FOLDER_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define VALA_DEVELOP_TYPE_OVERVIEW_TREE_STORE (vala_develop_overview_tree_store_get_type ())
#define VALA_DEVELOP_OVERVIEW_TREE_STORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_DEVELOP_TYPE_OVERVIEW_TREE_STORE, valaDevelopOverviewTreeStore))
#define VALA_DEVELOP_OVERVIEW_TREE_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_DEVELOP_TYPE_OVERVIEW_TREE_STORE, valaDevelopOverviewTreeStoreClass))
#define VALA_DEVELOP_IS_OVERVIEW_TREE_STORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_DEVELOP_TYPE_OVERVIEW_TREE_STORE))
#define VALA_DEVELOP_IS_OVERVIEW_TREE_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_DEVELOP_TYPE_OVERVIEW_TREE_STORE))
#define VALA_DEVELOP_OVERVIEW_TREE_STORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_DEVELOP_TYPE_OVERVIEW_TREE_STORE, valaDevelopOverviewTreeStoreClass))

typedef struct _valaDevelopOverviewTreeStore valaDevelopOverviewTreeStore;
typedef struct _valaDevelopOverviewTreeStoreClass valaDevelopOverviewTreeStoreClass;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef enum  {
	VALA_DEVELOP_ITEM_TYPE_None = 0,
	VALA_DEVELOP_ITEM_TYPE_Solution = 1,
	VALA_DEVELOP_ITEM_TYPE_Project = 2,
	VALA_DEVELOP_ITEM_TYPE_Resource = 4,
	VALA_DEVELOP_ITEM_TYPE_Source = 8,
	VALA_DEVELOP_ITEM_TYPE_Package = 16,
	VALA_DEVELOP_ITEM_TYPE_Directory = 32,
	VALA_DEVELOP_ITEM_TYPE_Vapi = 64
} valaDevelopItemType;

#define VALA_DEVELOP_TYPE_ITEM_TYPE (vala_develop_item_type_get_type ())
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _valaDevelopNewFolder {
	GtkDialog parent_instance;
	valaDevelopNewFolderPrivate * priv;
};

struct _valaDevelopNewFolderClass {
	GtkDialogClass parent_class;
};

struct _valaDevelopNewFolderPrivate {
	GtkEntry* folderName;
	GtkButton* create;
	GtkTreeIter _overviewTreeIter;
};

static gint valaDevelopNewFolder_private_offset;
static gpointer vala_develop_new_folder_parent_class = NULL;
extern valaDevelopOverviewTreeStore* vala_develop_main_paned_overviewTreeModel;

GType vala_develop_new_folder_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (valaDevelopNewFolder, g_object_unref)
valaDevelopNewFolder* vala_develop_new_folder_new (GtkWidget* parent,
                                                   GtkTreeIter* iter);
valaDevelopNewFolder* vala_develop_new_folder_construct (GType object_type,
                                                         GtkWidget* parent,
                                                         GtkTreeIter* iter);
static void __lambda80_ (valaDevelopNewFolder* self);
static void ___lambda80__gtk_editable_changed (GtkEditable* _sender,
                                        gpointer self);
static void vala_develop_new_folder_OnAccept (valaDevelopNewFolder* self);
GType vala_develop_overview_tree_store_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (valaDevelopOverviewTreeStore, g_object_unref)
gchar* vala_develop_overview_tree_store_get_item_path (valaDevelopOverviewTreeStore* self,
                                                       GtkTreeIter* iter);
void vala_develop_overview_tree_store_set_item_name (valaDevelopOverviewTreeStore* self,
                                                     GtkTreeIter* iter,
                                                     const gchar* name);
void vala_develop_overview_tree_store_set_item_type (valaDevelopOverviewTreeStore* self,
                                                     GtkTreeIter* iter,
                                                     gint itemType);
GType vala_develop_item_type_get_type (void) G_GNUC_CONST;
void vala_develop_overview_tree_store_set_item_path (valaDevelopOverviewTreeStore* self,
                                                     GtkTreeIter* iter,
                                                     const gchar* path);
void vala_develop_overview_tree_store_set_item_pixbuf (valaDevelopOverviewTreeStore* self,
                                                       GtkTreeIter* iter,
                                                       GdkPixbuf* itemPixbuf);
static void _vala_develop_new_folder_OnAccept_gtk_button_clicked (GtkButton* _sender,
                                                           gpointer self);
static void vala_develop_new_folder_OnCancel (valaDevelopNewFolder* self);
static void _vala_develop_new_folder_OnCancel_gtk_button_clicked (GtkButton* _sender,
                                                           gpointer self);
static void vala_develop_new_folder_finalize (GObject * obj);

static inline gpointer
vala_develop_new_folder_get_instance_private (valaDevelopNewFolder* self)
{
	return G_STRUCT_MEMBER_P (self, valaDevelopNewFolder_private_offset);
}

static void
__lambda80_ (valaDevelopNewFolder* self)
{
	GtkButton* _tmp0_;
	GtkEntry* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
#line 22 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	_tmp0_ = self->priv->create;
#line 22 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	_tmp1_ = self->priv->folderName;
#line 22 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	_tmp2_ = gtk_entry_get_text (_tmp1_);
#line 22 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	_tmp3_ = _tmp2_;
#line 22 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _tmp0_, g_strcmp0 (_tmp3_, "") != 0);
#line 132 "new_folder.c"
}

static void
___lambda80__gtk_editable_changed (GtkEditable* _sender,
                                   gpointer self)
{
#line 21 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	__lambda80_ ((valaDevelopNewFolder*) self);
#line 141 "new_folder.c"
}

valaDevelopNewFolder*
vala_develop_new_folder_construct (GType object_type,
                                   GtkWidget* parent,
                                   GtkTreeIter* iter)
{
	valaDevelopNewFolder * self = NULL;
	GtkWidget* _tmp0_;
	GtkTreeIter _tmp1_;
	GtkEntry* _tmp2_;
	GtkButton* _tmp3_;
	GtkButton* _tmp4_;
#line 13 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	g_return_val_if_fail (parent != NULL, NULL);
#line 13 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	g_return_val_if_fail (iter != NULL, NULL);
#line 13 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	self = (valaDevelopNewFolder*) g_object_new (object_type, NULL);
#line 15 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	_tmp0_ = gtk_widget_get_toplevel (parent);
#line 15 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_window_set_transient_for ((GtkWindow*) self, G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, gtk_window_get_type (), GtkWindow));
#line 16 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_window_set_title ((GtkWindow*) self, _ ("New folder"));
#line 17 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_dialog_set_default_response ((GtkDialog*) self, (gint) GTK_RESPONSE_ACCEPT);
#line 19 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	_tmp1_ = *iter;
#line 19 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	self->priv->_overviewTreeIter = _tmp1_;
#line 21 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	_tmp2_ = self->priv->folderName;
#line 21 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	g_signal_connect_object ((GtkEditable*) _tmp2_, "changed", (GCallback) ___lambda80__gtk_editable_changed, self, 0);
#line 25 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 27 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	_tmp3_ = self->priv->create;
#line 27 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_widget_set_can_default ((GtkWidget*) _tmp3_, TRUE);
#line 28 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	_tmp4_ = self->priv->create;
#line 28 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	g_object_set ((GtkWidget*) _tmp4_, "has-default", TRUE, NULL);
#line 13 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	return self;
#line 189 "new_folder.c"
}

valaDevelopNewFolder*
vala_develop_new_folder_new (GtkWidget* parent,
                             GtkTreeIter* iter)
{
#line 13 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	return vala_develop_new_folder_construct (VALA_DEVELOP_TYPE_NEW_FOLDER, parent, iter);
#line 198 "new_folder.c"
}

static void
vala_develop_new_folder_OnAccept (valaDevelopNewFolder* self)
{
	GError* _inner_error0_ = NULL;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	g_return_if_fail (self != NULL);
#line 207 "new_folder.c"
	{
		GtkTreeIter newIter = {0};
		valaDevelopOverviewTreeStore* _tmp0_;
		GtkTreeIter _tmp1_;
		GtkTreeIter _tmp2_ = {0};
		gchar* filePath = NULL;
		valaDevelopOverviewTreeStore* _tmp3_;
		GtkTreeIter _tmp4_;
		gchar* _tmp5_;
		GFile* newPath = NULL;
		const gchar* _tmp6_;
		GFile* _tmp7_;
		GFile* _tmp8_;
		GtkEntry* _tmp9_;
		const gchar* _tmp10_;
		const gchar* _tmp11_;
		GFile* _tmp12_;
		GFile* _tmp13_;
		GFile* _tmp14_;
		valaDevelopOverviewTreeStore* _tmp15_;
		GtkTreeIter _tmp16_;
		GtkEntry* _tmp17_;
		const gchar* _tmp18_;
		const gchar* _tmp19_;
		valaDevelopOverviewTreeStore* _tmp20_;
		GtkTreeIter _tmp21_;
		valaDevelopOverviewTreeStore* _tmp22_;
		GtkTreeIter _tmp23_;
		const gchar* _tmp24_;
		gchar* _tmp25_;
		gchar* _tmp26_;
		GtkEntry* _tmp27_;
		const gchar* _tmp28_;
		const gchar* _tmp29_;
		gchar* _tmp30_;
		gchar* _tmp31_;
		GdkPixbuf* _tmp32_ = NULL;
		GdkPixbuf* _tmp33_;
		valaDevelopOverviewTreeStore* _tmp34_;
		GtkTreeIter _tmp35_;
		GdkPixbuf* _tmp36_;
		GdkPixbuf* _tmp37_;
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp0_ = vala_develop_main_paned_overviewTreeModel;
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp1_ = self->priv->_overviewTreeIter;
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		gtk_tree_store_append ((GtkTreeStore*) _tmp0_, &_tmp2_, &_tmp1_);
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		newIter = _tmp2_;
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp3_ = vala_develop_main_paned_overviewTreeModel;
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp4_ = self->priv->_overviewTreeIter;
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp5_ = vala_develop_overview_tree_store_get_item_path (_tmp3_, &_tmp4_);
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		filePath = _tmp5_;
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp6_ = filePath;
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp7_ = g_file_new_for_path (_tmp6_);
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp8_ = _tmp7_;
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp9_ = self->priv->folderName;
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp10_ = gtk_entry_get_text (_tmp9_);
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp11_ = _tmp10_;
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp12_ = g_file_get_child (_tmp8_, _tmp11_);
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp13_ = _tmp12_;
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_g_object_unref0 (_tmp8_);
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		newPath = _tmp13_;
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp14_ = newPath;
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		g_file_make_directory (_tmp14_, NULL, &_inner_error0_);
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
			_g_object_unref0 (newPath);
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
			_g_free0 (filePath);
#line 296 "new_folder.c"
			goto __catch55_g_error;
		}
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp15_ = vala_develop_main_paned_overviewTreeModel;
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp16_ = newIter;
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp17_ = self->priv->folderName;
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp18_ = gtk_entry_get_text (_tmp17_);
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp19_ = _tmp18_;
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		vala_develop_overview_tree_store_set_item_name (_tmp15_, &_tmp16_, _tmp19_);
#line 46 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp20_ = vala_develop_main_paned_overviewTreeModel;
#line 46 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp21_ = newIter;
#line 46 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		vala_develop_overview_tree_store_set_item_type (_tmp20_, &_tmp21_, (gint) VALA_DEVELOP_ITEM_TYPE_Directory);
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp22_ = vala_develop_main_paned_overviewTreeModel;
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp23_ = newIter;
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp24_ = filePath;
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp25_ = g_strconcat (_tmp24_, "/", NULL);
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp26_ = _tmp25_;
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp27_ = self->priv->folderName;
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp28_ = gtk_entry_get_text (_tmp27_);
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp29_ = _tmp28_;
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp30_ = g_strconcat (_tmp26_, _tmp29_, NULL);
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp31_ = _tmp30_;
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		vala_develop_overview_tree_store_set_item_path (_tmp22_, &_tmp23_, _tmp31_);
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_g_free0 (_tmp31_);
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_g_free0 (_tmp26_);
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp33_ = gdk_pixbuf_new_from_resource ("/valaDevelop/folder.svg.png", &_inner_error0_);
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp32_ = _tmp33_;
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
			_g_object_unref0 (newPath);
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
			_g_free0 (filePath);
#line 353 "new_folder.c"
			goto __catch55_g_error;
		}
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp34_ = vala_develop_main_paned_overviewTreeModel;
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp35_ = newIter;
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp36_ = gdk_pixbuf_scale_simple (_tmp32_, 16, 16, GDK_INTERP_BILINEAR);
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp37_ = _tmp36_;
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		vala_develop_overview_tree_store_set_item_pixbuf (_tmp34_, &_tmp35_, _tmp37_);
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_g_object_unref0 (_tmp37_);
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_g_object_unref0 (_tmp32_);
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_g_object_unref0 (newPath);
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_g_free0 (filePath);
#line 374 "new_folder.c"
	}
	goto __finally55;
	__catch55_g_error:
	{
		GError* e = NULL;
		GtkMessageDialog* messagedialog = NULL;
		GError* _tmp38_;
		const gchar* _tmp39_;
		GtkMessageDialog* _tmp40_;
		GtkMessageDialog* _tmp41_;
		GtkMessageDialog* _tmp42_;
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		e = _inner_error0_;
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_inner_error0_ = NULL;
#line 52 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp38_ = e;
#line 52 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp39_ = _tmp38_->message;
#line 52 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp40_ = (GtkMessageDialog*) gtk_message_dialog_new ((GtkWindow*) self, GTK_DIALOG_MODAL, GTK_MESSAGE_ERROR, GTK_BUTTONS_OK, "%s", _tmp39_);
#line 52 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		g_object_ref_sink (_tmp40_);
#line 52 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		messagedialog = _tmp40_;
#line 53 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp41_ = messagedialog;
#line 53 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		gtk_dialog_run ((GtkDialog*) _tmp41_);
#line 54 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_tmp42_ = messagedialog;
#line 54 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		gtk_widget_destroy ((GtkWidget*) _tmp42_);
#line 55 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_g_object_unref0 (messagedialog);
#line 55 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		_g_error_free0 (e);
#line 55 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		return;
#line 414 "new_folder.c"
	}
	__finally55:
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		g_clear_error (&_inner_error0_);
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
		return;
#line 425 "new_folder.c"
	}
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_dialog_response ((GtkDialog*) self, (gint) GTK_RESPONSE_ACCEPT);
#line 429 "new_folder.c"
}

static void
_vala_develop_new_folder_OnAccept_gtk_button_clicked (GtkButton* _sender,
                                                      gpointer self)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	vala_develop_new_folder_OnAccept ((valaDevelopNewFolder*) self);
#line 438 "new_folder.c"
}

static void
vala_develop_new_folder_OnCancel (valaDevelopNewFolder* self)
{
#line 61 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	g_return_if_fail (self != NULL);
#line 63 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_dialog_response ((GtkDialog*) self, (gint) GTK_RESPONSE_CANCEL);
#line 448 "new_folder.c"
}

static void
_vala_develop_new_folder_OnCancel_gtk_button_clicked (GtkButton* _sender,
                                                      gpointer self)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	vala_develop_new_folder_OnCancel ((valaDevelopNewFolder*) self);
#line 457 "new_folder.c"
}

static void
vala_develop_new_folder_class_init (valaDevelopNewFolderClass * klass,
                                    gpointer klass_data)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	vala_develop_new_folder_parent_class = g_type_class_peek_parent (klass);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	g_type_class_adjust_private_offset (klass, &valaDevelopNewFolder_private_offset);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	G_OBJECT_CLASS (klass)->finalize = vala_develop_new_folder_finalize;
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/valaDevelop/newFolder.glade");
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "folderName", FALSE, valaDevelopNewFolder_private_offset + G_STRUCT_OFFSET (valaDevelopNewFolderPrivate, folderName));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "create", FALSE, valaDevelopNewFolder_private_offset + G_STRUCT_OFFSET (valaDevelopNewFolderPrivate, create));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_widget_class_bind_template_callback_full (GTK_WIDGET_CLASS (klass), "OnAccept", G_CALLBACK(_vala_develop_new_folder_OnAccept_gtk_button_clicked));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_widget_class_bind_template_callback_full (GTK_WIDGET_CLASS (klass), "OnCancel", G_CALLBACK(_vala_develop_new_folder_OnCancel_gtk_button_clicked));
#line 480 "new_folder.c"
}

static void
vala_develop_new_folder_instance_init (valaDevelopNewFolder * self,
                                       gpointer klass)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	self->priv = vala_develop_new_folder_get_instance_private (self);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	gtk_widget_init_template (GTK_WIDGET (self));
#line 491 "new_folder.c"
}

static void
vala_develop_new_folder_finalize (GObject * obj)
{
	valaDevelopNewFolder * self;
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_DEVELOP_TYPE_NEW_FOLDER, valaDevelopNewFolder);
#line 8 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	_g_object_unref0 (self->priv->folderName);
#line 9 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	_g_object_unref0 (self->priv->create);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/new_folder.vala"
	G_OBJECT_CLASS (vala_develop_new_folder_parent_class)->finalize (obj);
#line 506 "new_folder.c"
}

GType
vala_develop_new_folder_get_type (void)
{
	static volatile gsize vala_develop_new_folder_type_id__volatile = 0;
	if (g_once_init_enter (&vala_develop_new_folder_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (valaDevelopNewFolderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_develop_new_folder_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (valaDevelopNewFolder), 0, (GInstanceInitFunc) vala_develop_new_folder_instance_init, NULL };
		GType vala_develop_new_folder_type_id;
		vala_develop_new_folder_type_id = g_type_register_static (gtk_dialog_get_type (), "valaDevelopNewFolder", &g_define_type_info, 0);
		valaDevelopNewFolder_private_offset = g_type_add_instance_private (vala_develop_new_folder_type_id, sizeof (valaDevelopNewFolderPrivate));
		g_once_init_leave (&vala_develop_new_folder_type_id__volatile, vala_develop_new_folder_type_id);
	}
	return vala_develop_new_folder_type_id__volatile;
}

