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

// Function: FUN_00225f70
// Address: 0x225f70 - 0x226038
void FUN_00225f70_0x225f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00225f70_0x225f70");
#endif

    switch (ctx->pc) {
        case 0x225fb0u: goto label_225fb0;
        case 0x225fbcu: goto label_225fbc;
        case 0x225fc8u: goto label_225fc8;
        case 0x225fd4u: goto label_225fd4;
        case 0x225fdcu: goto label_225fdc;
        case 0x225fe8u: goto label_225fe8;
        case 0x225ff8u: goto label_225ff8;
        case 0x226010u: goto label_226010;
        case 0x226028u: goto label_226028;
        default: break;
    }

    ctx->pc = 0x225f70u;

    // 0x225f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225f74: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x225f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x225f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225f7c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x225f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x225f80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225f84: 0x24420c90  addiu       $v0, $v0, 0xC90
    ctx->pc = 0x225f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3216));
    // 0x225f88: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x225f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x225f8c: 0x24638860  addiu       $v1, $v1, -0x77A0
    ctx->pc = 0x225f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936672));
    // 0x225f90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x225f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225f94: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x225f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x225f98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x225f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x225fa0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x225fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225fa4: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x225fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x225fa8: 0xc048ec8  jal         func_123B20
    ctx->pc = 0x225FA8u;
    SET_GPR_U32(ctx, 31, 0x225FB0u);
    ctx->pc = 0x225FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FA8u;
    // 0x225fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123B20u, 0x225FA8u, 0x225FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FB0u;
label_225fb0:
    // 0x225fb0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x225fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x225fb4: 0xc048ec4  jal         func_123B10
    ctx->pc = 0x225FB4u;
    SET_GPR_U32(ctx, 31, 0x225FBCu);
    ctx->pc = 0x225FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FB4u;
    // 0x225fb8: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123B10u, 0x225FB4u, 0x225FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FBCu;
label_225fbc:
    // 0x225fbc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x225fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x225fc0: 0xc048ec0  jal         func_123B00
    ctx->pc = 0x225FC0u;
    SET_GPR_U32(ctx, 31, 0x225FC8u);
    ctx->pc = 0x225FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FC0u;
    // 0x225fc4: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123B00u, 0x225FC0u, 0x225FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FC8u;
label_225fc8:
    // 0x225fc8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x225fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x225fcc: 0xc048ebc  jal         func_123AF0
    ctx->pc = 0x225FCCu;
    SET_GPR_U32(ctx, 31, 0x225FD4u);
    ctx->pc = 0x225FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FCCu;
    // 0x225fd0: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123AF0u, 0x225FCCu, 0x225FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FD4u;
label_225fd4:
    // 0x225fd4: 0xc048600  jal         func_121800
    ctx->pc = 0x225FD4u;
    SET_GPR_U32(ctx, 31, 0x225FDCu);
    ctx->pc = 0x225FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FD4u;
    // 0x225fd8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121800u, 0x225FD4u, 0x225FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FDCu;
label_225fdc:
    // 0x225fdc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x225fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x225fe0: 0xc048a58  jal         func_122960
    ctx->pc = 0x225FE0u;
    SET_GPR_U32(ctx, 31, 0x225FE8u);
    ctx->pc = 0x225FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FE0u;
    // 0x225fe4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122960u, 0x225FE0u, 0x225FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FE8u;
label_225fe8:
    // 0x225fe8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x225fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x225fec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x225fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225ff0: 0xc047ccc  jal         func_11F330
    ctx->pc = 0x225FF0u;
    SET_GPR_U32(ctx, 31, 0x225FF8u);
    ctx->pc = 0x225FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FF0u;
    // 0x225ff4: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F330u, 0x225FF0u, 0x225FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FF8u;
label_225ff8:
    // 0x225ff8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x225ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225ffc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x225ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x226000: 0x24062a00  addiu       $a2, $zero, 0x2A00
    ctx->pc = 0x226000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10752));
    // 0x226004: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x226004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x226008: 0xc047d20  jal         func_11F480
    ctx->pc = 0x226008u;
    SET_GPR_U32(ctx, 31, 0x226010u);
    ctx->pc = 0x22600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226008u;
    // 0x22600c: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F480u, 0x226008u, 0x226010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226010u;
label_226010:
    // 0x226010: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x226010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226014: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x226014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x226018: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x226018u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x22601c: 0x24a51750  addiu       $a1, $a1, 0x1750
    ctx->pc = 0x22601cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5968));
    // 0x226020: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226020u;
    SET_GPR_U32(ctx, 31, 0x226028u);
    ctx->pc = 0x226024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226020u;
    // 0x226024: 0x24c60c78  addiu       $a2, $a2, 0xC78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226020u, 0x226028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226028u;
label_226028:
    // 0x226028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22602c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22602cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226030: 0x3e00008  jr          $ra
    ctx->pc = 0x226030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226030u;
        // 0x226034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226038u;
}
