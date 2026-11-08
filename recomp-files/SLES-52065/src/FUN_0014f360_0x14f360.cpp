#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0014f360
// Address: 0x14f360 - 0x14f3d0
void FUN_0014f360_0x14f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f360_0x14f360");
#endif

    switch (ctx->pc) {
        case 0x14f374u: goto label_14f374;
        case 0x14f398u: goto label_14f398;
        case 0x14f3a4u: goto label_14f3a4;
        case 0x14f3b8u: goto label_14f3b8;
        default: break;
    }

    ctx->pc = 0x14f360u;

    // 0x14f360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14f364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f368: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x14f368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x14f36c: 0xc04dd0c  jal         func_137430
    ctx->pc = 0x14F36Cu;
    SET_GPR_U32(ctx, 31, 0x14F374u);
    ctx->pc = 0x14F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F36Cu;
    // 0x14f370: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137430u, 0x14F36Cu, 0x14F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F374u;
label_14f374:
    // 0x14f374: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14f374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f378: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x14f378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x14f37c: 0x24639440  addiu       $v1, $v1, -0x6BC0
    ctx->pc = 0x14f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939712));
    // 0x14f380: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14f380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14f384: 0x24a5f320  addiu       $a1, $a1, -0xCE0
    ctx->pc = 0x14f384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964000));
    // 0x14f388: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14f388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14f38c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f390: 0xc080702  jal         func_201C08
    ctx->pc = 0x14F390u;
    SET_GPR_U32(ctx, 31, 0x14F398u);
    ctx->pc = 0x14F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F390u;
    // 0x14f394: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x14F390u, 0x14F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F398u;
label_14f398:
    // 0x14f398: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f39c: 0xc04d32c  jal         func_134CB0
    ctx->pc = 0x14F39Cu;
    SET_GPR_U32(ctx, 31, 0x14F3A4u);
    ctx->pc = 0x14F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F39Cu;
    // 0x14f3a0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CB0u, 0x14F39Cu, 0x14F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3A4u;
label_14f3a4:
    // 0x14f3a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f3a8: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x14f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x14f3ac: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x14f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x14f3b0: 0xc04e5d4  jal         func_139750
    ctx->pc = 0x14F3B0u;
    SET_GPR_U32(ctx, 31, 0x14F3B8u);
    ctx->pc = 0x14F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3B0u;
    // 0x14f3b4: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139750u, 0x14F3B0u, 0x14F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3B8u;
label_14f3b8:
    // 0x14f3b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f3bc: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x14f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x14f3c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x14F3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3C8u;
        // 0x14f3cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F3D0u;
}
