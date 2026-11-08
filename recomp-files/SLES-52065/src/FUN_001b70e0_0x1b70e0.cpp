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

// Function: FUN_001b70e0
// Address: 0x1b70e0 - 0x1b7150
void FUN_001b70e0_0x1b70e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b70e0_0x1b70e0");
#endif

    switch (ctx->pc) {
        case 0x1b70f8u: goto label_1b70f8;
        case 0x1b7108u: goto label_1b7108;
        case 0x1b7118u: goto label_1b7118;
        case 0x1b7120u: goto label_1b7120;
        case 0x1b7140u: goto label_1b7140;
        default: break;
    }

    ctx->pc = 0x1b70e0u;

    // 0x1b70e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b70e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b70e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b70e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b70e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b70e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b70ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b70ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70f0: 0xc0488c8  jal         func_122320
    ctx->pc = 0x1B70F0u;
    SET_GPR_U32(ctx, 31, 0x1B70F8u);
    ctx->pc = 0x1B70F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70F0u;
    // 0x1b70f4: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x1B70F0u, 0x1B70F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70F8u;
label_1b70f8:
    // 0x1b70f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b70f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b70fc: 0x8c24f278  lw          $a0, -0xD88($at)
    ctx->pc = 0x1b70fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F278u));
    // 0x1b7100: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1B7100u;
    SET_GPR_U32(ctx, 31, 0x1B7108u);
    ctx->pc = 0x1B7104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7100u;
    // 0x1b7104: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1B7100u, 0x1B7108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7108u;
label_1b7108:
    // 0x1b7108: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1b7108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1b710c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1b710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1b7110: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B7110u;
    SET_GPR_U32(ctx, 31, 0x1B7118u);
    ctx->pc = 0x1B7114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7110u;
    // 0x1b7114: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B7110u, 0x1B7118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7118u;
label_1b7118:
    // 0x1b7118: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7118u;
    SET_GPR_U32(ctx, 31, 0x1B7120u);
    ctx->pc = 0x1B711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7118u;
    // 0x1b711c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7118u, 0x1B7120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7120u;
label_1b7120:
    // 0x1b7120: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1b7120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b7124: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1b7124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1b7128: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b712c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b712cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7130: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x1b7130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1b7134: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b7134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7138: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x1B7138u;
    SET_GPR_U32(ctx, 31, 0x1B7140u);
    ctx->pc = 0x1B713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7138u;
    // 0x1b713c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x1B7138u, 0x1B7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7140u;
label_1b7140:
    // 0x1b7140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7148: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7148u;
        // 0x1b714c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7150u;
}
