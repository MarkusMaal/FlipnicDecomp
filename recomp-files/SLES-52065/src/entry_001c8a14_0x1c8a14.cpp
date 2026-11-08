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

// Function: entry_001c8a14
// Address: 0x1c8a14 - 0x1c8ae0
void entry_001c8a14_0x1c8a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8a14_0x1c8a14");
#endif

    switch (ctx->pc) {
        case 0x1c8a1cu: goto label_1c8a1c;
        case 0x1c8a30u: goto label_1c8a30;
        case 0x1c8a4cu: goto label_1c8a4c;
        case 0x1c8a5cu: goto label_1c8a5c;
        case 0x1c8a64u: goto label_1c8a64;
        case 0x1c8a80u: goto label_1c8a80;
        case 0x1c8a90u: goto label_1c8a90;
        case 0x1c8aa8u: goto label_1c8aa8;
        case 0x1c8adcu: goto label_1c8adc;
        default: break;
    }

    ctx->pc = 0x1c8a14u;

label_1c8a14:
    // 0x1c8a14: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C8A14u;
    SET_GPR_U32(ctx, 31, 0x1C8A1Cu);
    ctx->pc = 0x1C8A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A14u;
    // 0x1c8a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C8A14u, 0x1C8A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A1Cu;
label_1c8a1c:
    // 0x1c8a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c8a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c8a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c8a28: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8A28u;
    SET_GPR_U32(ctx, 31, 0x1C8A30u);
    ctx->pc = 0x1C8A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A28u;
    // 0x1c8a2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8A28u, 0x1C8A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A30u;
label_1c8a30:
    // 0x1c8a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a34: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1c8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c8a38: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c8a3c: 0x244223e0  addiu       $v0, $v0, 0x23E0
    ctx->pc = 0x1c8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9184));
    // 0x1c8a40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8a44: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C8A44u;
    SET_GPR_U32(ctx, 31, 0x1C8A4Cu);
    ctx->pc = 0x1C8A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A44u;
    // 0x1c8a48: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C8A44u, 0x1C8A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A4Cu;
label_1c8a4c:
    // 0x1c8a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a50: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c8a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c8a54: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8A54u;
    SET_GPR_U32(ctx, 31, 0x1C8A5Cu);
    ctx->pc = 0x1C8A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A54u;
    // 0x1c8a58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8A54u, 0x1C8A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A5Cu;
label_1c8a5c:
    // 0x1c8a5c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C8A5Cu;
    SET_GPR_U32(ctx, 31, 0x1C8A64u);
    ctx->pc = 0x1C8A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A5Cu;
    // 0x1c8a60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C8A5Cu, 0x1C8A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A64u;
label_1c8a64:
    // 0x1c8a64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c8a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c8a68: 0x2a22000c  slti        $v0, $s1, 0xC
    ctx->pc = 0x1c8a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1c8a6c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C8A6Cu;
    {
        const bool branch_taken_0x1c8a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A6Cu;
        // 0x1c8a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a6c) {
            ctx->pc = 0x1C8A14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8a14;
        }
    }
    ctx->pc = 0x1C8A74u;
    // 0x1c8a74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c8a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c8a78: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8A78u;
    SET_GPR_U32(ctx, 31, 0x1C8A80u);
    ctx->pc = 0x1C8A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A78u;
    // 0x1c8a7c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8A78u, 0x1C8A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A80u;
label_1c8a80:
    // 0x1c8a80: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8a84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a88: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C8A88u;
    SET_GPR_U32(ctx, 31, 0x1C8A90u);
    ctx->pc = 0x1C8A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A88u;
    // 0x1c8a8c: 0x24a56160  addiu       $a1, $a1, 0x6160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C8A88u, 0x1C8A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A90u;
label_1c8a90:
    // 0x1c8a90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8a94: 0x8c25f8b0  lw          $a1, -0x750($at)
    ctx->pc = 0x1c8a94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36F8B0u));
    // 0x1c8a98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8a9c: 0x8c26f8b8  lw          $a2, -0x748($at)
    ctx->pc = 0x1c8a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8aa0: 0xc072400  jal         func_1C9000
    ctx->pc = 0x1C8AA0u;
    SET_GPR_U32(ctx, 31, 0x1C8AA8u);
    ctx->pc = 0x1C8AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AA0u;
    // 0x1c8aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9000u, 0x1C8AA0u, 0x1C8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8AA8u;
label_1c8aa8:
    // 0x1c8aa8: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1c8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1c8aac: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1c8aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c8ab0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c8ab4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8AB4u;
    {
        const bool branch_taken_0x1c8ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8ab4) {
            ctx->pc = 0x1C8AE0u;
            return;
        }
    }
    ctx->pc = 0x1C8ABCu;
    // 0x1c8abc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ac4: 0xac20f8b0  sw          $zero, -0x750($at)
    ctx->pc = 0x1c8ac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F8B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8B0u, _value); } while (0);
    // 0x1c8ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8acc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8ad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ad4: 0xc072400  jal         func_1C9000
    ctx->pc = 0x1C8AD4u;
    SET_GPR_U32(ctx, 31, 0x1C8ADCu);
    ctx->pc = 0x1C8AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AD4u;
    // 0x1c8ad8: 0xac20f8b8  sw          $zero, -0x748($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965432), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9000u, 0x1C8AD4u, 0x1C8ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ADCu;
label_1c8adc:
    // 0x1c8adc: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1c8adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    ctx->pc = 0x1c8ae0u;
}
