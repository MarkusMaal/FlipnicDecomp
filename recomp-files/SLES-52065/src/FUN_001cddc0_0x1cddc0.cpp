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

// Function: FUN_001cddc0
// Address: 0x1cddc0 - 0x1cde50
void FUN_001cddc0_0x1cddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cddc0_0x1cddc0");
#endif

    switch (ctx->pc) {
        case 0x1cdde0u: goto label_1cdde0;
        case 0x1cddecu: goto label_1cddec;
        case 0x1cde00u: goto label_1cde00;
        case 0x1cde14u: goto label_1cde14;
        case 0x1cde28u: goto label_1cde28;
        case 0x1cde3cu: goto label_1cde3c;
        default: break;
    }

    ctx->pc = 0x1cddc0u;

    // 0x1cddc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cddc4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1cddc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cddc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cddcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cddccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cddd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cddd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cddd4: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1cddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x1cddd8: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CDDD8u;
    SET_GPR_U32(ctx, 31, 0x1CDDE0u);
    ctx->pc = 0x1CDDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDD8u;
    // 0x1cdddc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CDDD8u, 0x1CDDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDE0u;
label_1cdde0:
    // 0x1cdde0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdde4: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1CDDE4u;
    SET_GPR_U32(ctx, 31, 0x1CDDECu);
    ctx->pc = 0x1CDDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDE4u;
    // 0x1cdde8: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1CDDE4u, 0x1CDDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDECu;
label_1cddec:
    // 0x1cddec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cddecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cddf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cddf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cddf4: 0x24a58b00  addiu       $a1, $a1, -0x7500
    ctx->pc = 0x1cddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937344));
    // 0x1cddf8: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1CDDF8u;
    SET_GPR_U32(ctx, 31, 0x1CDE00u);
    ctx->pc = 0x1CDDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDF8u;
    // 0x1cddfc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1CDDF8u, 0x1CDE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE00u;
label_1cde00:
    // 0x1cde00: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cde00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cde04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cde04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde08: 0x24a58b70  addiu       $a1, $a1, -0x7490
    ctx->pc = 0x1cde08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937456));
    // 0x1cde0c: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CDE0Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE14u);
    ctx->pc = 0x1CDE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE0Cu;
    // 0x1cde10: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CDE0Cu, 0x1CDE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE14u;
label_1cde14:
    // 0x1cde14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cde14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cde18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cde18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde1c: 0x24a58cf0  addiu       $a1, $a1, -0x7310
    ctx->pc = 0x1cde1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937840));
    // 0x1cde20: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CDE20u;
    SET_GPR_U32(ctx, 31, 0x1CDE28u);
    ctx->pc = 0x1CDE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE20u;
    // 0x1cde24: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CDE20u, 0x1CDE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE28u;
label_1cde28:
    // 0x1cde28: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cde28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cde2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cde2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde30: 0x24a58d70  addiu       $a1, $a1, -0x7290
    ctx->pc = 0x1cde30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937968));
    // 0x1cde34: 0xc06dea4  jal         func_1B7A90
    ctx->pc = 0x1CDE34u;
    SET_GPR_U32(ctx, 31, 0x1CDE3Cu);
    ctx->pc = 0x1CDE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE34u;
    // 0x1cde38: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A90u, 0x1CDE34u, 0x1CDE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE3Cu;
label_1cde3c:
    // 0x1cde3c: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x1cde3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cde40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cde40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cde44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cde44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cde48: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE48u;
        // 0x1cde4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDE50u;
}
