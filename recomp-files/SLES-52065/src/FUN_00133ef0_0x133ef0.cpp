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

// Function: FUN_00133ef0
// Address: 0x133ef0 - 0x133f84
void FUN_00133ef0_0x133ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133ef0_0x133ef0");
#endif

    switch (ctx->pc) {
        case 0x133f30u: goto label_133f30;
        case 0x133f54u: goto label_133f54;
        case 0x133f60u: goto label_133f60;
        case 0x133f74u: goto label_133f74;
        default: break;
    }

    ctx->pc = 0x133ef0u;

    // 0x133ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133ef4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x133ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x133ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133efc: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x133efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x133f00: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x133f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x133f04: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x133f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x133f08: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x133f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x133f0c: 0x24638de8  addiu       $v1, $v1, -0x7218
    ctx->pc = 0x133f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938088));
    // 0x133f10: 0x24a53f90  addiu       $a1, $a1, 0x3F90
    ctx->pc = 0x133f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16272));
    // 0x133f14: 0x24c65f10  addiu       $a2, $a2, 0x5F10
    ctx->pc = 0x133f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24336));
    // 0x133f18: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x133f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x133f1c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x133f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x133f20: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x133f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x133f24: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x133f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x133f28: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x133F28u;
    SET_GPR_U32(ctx, 31, 0x133F30u);
    ctx->pc = 0x133F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F28u;
    // 0x133f2c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x133F28u, 0x133F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F30u;
label_133f30:
    // 0x133f30: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x133f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x133f34: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x133f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x133f38: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x133f38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x133f3c: 0x24a53f90  addiu       $a1, $a1, 0x3F90
    ctx->pc = 0x133f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16272));
    // 0x133f40: 0x24c65f10  addiu       $a2, $a2, 0x5F10
    ctx->pc = 0x133f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24336));
    // 0x133f44: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x133f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x133f48: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x133f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x133f4c: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x133F4Cu;
    SET_GPR_U32(ctx, 31, 0x133F54u);
    ctx->pc = 0x133F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F4Cu;
    // 0x133f50: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x133F4Cu, 0x133F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F54u;
label_133f54:
    // 0x133f54: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x133f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x133f58: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x133F58u;
    SET_GPR_U32(ctx, 31, 0x133F60u);
    ctx->pc = 0x133F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F58u;
    // 0x133f5c: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x133F58u, 0x133F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F60u;
label_133f60:
    // 0x133f60: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x133f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x133f64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x133f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x133f68: 0x24a5ee70  addiu       $a1, $a1, -0x1190
    ctx->pc = 0x133f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962800));
    // 0x133f6c: 0xc080702  jal         func_201C08
    ctx->pc = 0x133F6Cu;
    SET_GPR_U32(ctx, 31, 0x133F74u);
    ctx->pc = 0x133F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F6Cu;
    // 0x133f70: 0x24440140  addiu       $a0, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133F6Cu, 0x133F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F74u;
label_133f74:
    // 0x133f74: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x133f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x133f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x133F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F7Cu;
        // 0x133f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133F84u;
}
