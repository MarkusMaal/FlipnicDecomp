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

// Function: FUN_001513c0
// Address: 0x1513c0 - 0x151418
void FUN_001513c0_0x1513c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001513c0_0x1513c0");
#endif

    switch (ctx->pc) {
        case 0x1513d4u: goto label_1513d4;
        case 0x1513f8u: goto label_1513f8;
        default: break;
    }

    ctx->pc = 0x1513c0u;

    // 0x1513c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1513c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1513c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1513c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1513c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1513c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1513cc: 0xc04dd0c  jal         func_137430
    ctx->pc = 0x1513CCu;
    SET_GPR_U32(ctx, 31, 0x1513D4u);
    ctx->pc = 0x1513D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513CCu;
    // 0x1513d0: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137430u, 0x1513CCu, 0x1513D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513D4u;
label_1513d4:
    // 0x1513d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1513d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1513d8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1513d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1513dc: 0x246394a0  addiu       $v1, $v1, -0x6B60
    ctx->pc = 0x1513dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939808));
    // 0x1513e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1513e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1513e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1513e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1513e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1513e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1513ec: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1513ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1513f0: 0xc04e5d4  jal         func_139750
    ctx->pc = 0x1513F0u;
    SET_GPR_U32(ctx, 31, 0x1513F8u);
    ctx->pc = 0x1513F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513F0u;
    // 0x1513f4: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139750u, 0x1513F0u, 0x1513F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513F8u;
label_1513f8:
    // 0x1513f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1513f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1513fc: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1513fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x151400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x151400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x151404: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x151404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x151408: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x151408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15140c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15140cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151410: 0x3e00008  jr          $ra
    ctx->pc = 0x151410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151410u;
        // 0x151414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151418u;
}
