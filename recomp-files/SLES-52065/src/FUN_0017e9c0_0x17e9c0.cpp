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

// Function: FUN_0017e9c0
// Address: 0x17e9c0 - 0x17ea48
void FUN_0017e9c0_0x17e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e9c0_0x17e9c0");
#endif

    switch (ctx->pc) {
        case 0x17ea04u: goto label_17ea04;
        case 0x17ea18u: goto label_17ea18;
        case 0x17ea38u: goto label_17ea38;
        default: break;
    }

    ctx->pc = 0x17e9c0u;

    // 0x17e9c0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x17e9c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9c4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x17e9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17e9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9cc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x17e9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9d0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17e9d4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x17e9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9d8: 0x24847730  addiu       $a0, $a0, 0x7730
    ctx->pc = 0x17e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    // 0x17e9dc: 0x805fa7c  j           func_17E9F0
    ctx->pc = 0x17E9DCu;
    ctx->pc = 0x17E9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E9DCu;
    // 0x17e9e0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E9F0u;
    goto label_17e9f0;
    ctx->pc = 0x17E9E4u;
    // 0x17e9e4: 0x0  nop
    ctx->pc = 0x17e9e4u;
    // NOP
    // 0x17e9e8: 0x0  nop
    ctx->pc = 0x17e9e8u;
    // NOP
    // 0x17e9ec: 0x0  nop
    ctx->pc = 0x17e9ecu;
    // NOP
label_17e9f0:
    // 0x17e9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e9f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e9fc: 0xc05fb00  jal         func_17EC00
    ctx->pc = 0x17E9FCu;
    SET_GPR_U32(ctx, 31, 0x17EA04u);
    ctx->pc = 0x17EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E9FCu;
    // 0x17ea00: 0xafa8002c  sw          $t0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC00u, 0x17E9FCu, 0x17EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA04u;
label_17ea04:
    // 0x17ea04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ea04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ea0c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x17ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x17ea10: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x17EA10u;
    SET_GPR_U32(ctx, 31, 0x17EA18u);
    ctx->pc = 0x17EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA10u;
    // 0x17ea14: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x17EA10u, 0x17EA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA18u;
label_17ea18:
    // 0x17ea18: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x17ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x17ea1c: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x17ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x17ea20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ea24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17ea24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ea28: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x17ea28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x17ea2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17ea30: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x17EA30u;
    SET_GPR_U32(ctx, 31, 0x17EA38u);
    ctx->pc = 0x17EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA30u;
    // 0x17ea34: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x17EA30u, 0x17EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA38u;
label_17ea38:
    // 0x17ea38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ea38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ea3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ea3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ea40: 0x3e00008  jr          $ra
    ctx->pc = 0x17EA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA40u;
        // 0x17ea44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EA48u;
}
