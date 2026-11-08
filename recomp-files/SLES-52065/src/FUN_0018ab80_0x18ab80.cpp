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

// Function: FUN_0018ab80
// Address: 0x18ab80 - 0x18ac7c
void FUN_0018ab80_0x18ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ab80_0x18ab80");
#endif

    switch (ctx->pc) {
        case 0x18abb0u: goto label_18abb0;
        case 0x18abc0u: goto label_18abc0;
        case 0x18abdcu: goto label_18abdc;
        case 0x18abe4u: goto label_18abe4;
        case 0x18ac30u: goto label_18ac30;
        case 0x18ac44u: goto label_18ac44;
        case 0x18ac54u: goto label_18ac54;
        default: break;
    }

    ctx->pc = 0x18ab80u;

    // 0x18ab80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18ab84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ab88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18ab8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ab8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ab90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ab90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ab94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ab94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ab98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18ab98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab9c: 0x8c8408c0  lw          $a0, 0x8C0($a0)
    ctx->pc = 0x18ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2240)));
    // 0x18aba0: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x18ABA0u;
    {
        const bool branch_taken_0x18aba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABA0u;
        // 0x18aba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aba0) {
            ctx->pc = 0x18AC64u;
            goto label_18ac64;
        }
    }
    ctx->pc = 0x18ABA8u;
    // 0x18aba8: 0xc074c7c  jal         func_1D31F0
    ctx->pc = 0x18ABA8u;
    SET_GPR_U32(ctx, 31, 0x18ABB0u);
    ctx->pc = 0x1D31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D31F0u, 0x18ABA8u, 0x18ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABB0u;
label_18abb0:
    // 0x18abb0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x18ABB0u;
    {
        const bool branch_taken_0x18abb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18abb0) {
            ctx->pc = 0x18AC60u;
            goto label_18ac60;
        }
    }
    ctx->pc = 0x18ABB8u;
    // 0x18abb8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x18ABB8u;
    SET_GPR_U32(ctx, 31, 0x18ABC0u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x18ABB8u, 0x18ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABC0u;
label_18abc0:
    // 0x18abc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18abc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18abc4: 0x8e2208c4  lw          $v0, 0x8C4($s1)
    ctx->pc = 0x18abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2244)));
    // 0x18abc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18abcc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18abd0: 0x8c450880  lw          $a1, 0x880($v0)
    ctx->pc = 0x18abd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2176)));
    // 0x18abd4: 0xc0784a2  jal         func_1E1288
    ctx->pc = 0x18ABD4u;
    SET_GPR_U32(ctx, 31, 0x18ABDCu);
    ctx->pc = 0x18ABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ABD4u;
    // 0x18abd8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1288u, 0x18ABD4u, 0x18ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABDCu;
label_18abdc:
    // 0x18abdc: 0xc07c9da  jal         func_1F2768
    ctx->pc = 0x18ABDCu;
    SET_GPR_U32(ctx, 31, 0x18ABE4u);
    ctx->pc = 0x18ABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ABDCu;
    // 0x18abe0: 0x8e2408c8  lw          $a0, 0x8C8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2768u, 0x18ABDCu, 0x18ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABE4u;
label_18abe4:
    // 0x18abe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18abe8: 0xae2208c0  sw          $v0, 0x8C0($s1)
    ctx->pc = 0x18abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2240), GPR_U32(ctx, 2));
    // 0x18abec: 0x8f9280dc  lw          $s2, -0x7F24($gp)
    ctx->pc = 0x18abecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934748)));
    // 0x18abf0: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18ABF0u;
    {
        const bool branch_taken_0x18abf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABF0u;
        // 0x18abf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abf0) {
            ctx->pc = 0x18AC08u;
            goto label_18ac08;
        }
    }
    ctx->pc = 0x18ABF8u;
    // 0x18abf8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x18abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x18abfc: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18ABFCu;
    {
        const bool branch_taken_0x18abfc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x18abfc) {
            ctx->pc = 0x18AC18u;
            goto label_18ac18;
        }
    }
    ctx->pc = 0x18AC04u;
    // 0x18ac04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18ac08:
    // 0x18ac08: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AC08u;
    {
        const bool branch_taken_0x18ac08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ac08) {
            ctx->pc = 0x18AC1Cu;
            goto label_18ac1c;
        }
    }
    ctx->pc = 0x18AC10u;
    // 0x18ac10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18AC10u;
    {
        const bool branch_taken_0x18ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC10u;
        // 0x18ac14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac10) {
            ctx->pc = 0x18AC1Cu;
            goto label_18ac1c;
        }
    }
    ctx->pc = 0x18AC18u;
label_18ac18:
    // 0x18ac18: 0xaf9280dc  sw          $s2, -0x7F24($gp)
    ctx->pc = 0x18ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934748), GPR_U32(ctx, 18));
label_18ac1c:
    // 0x18ac1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ac20: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC20u;
    {
        const bool branch_taken_0x18ac20 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x18ac20) {
            ctx->pc = 0x18AC30u;
            goto label_18ac30;
        }
    }
    ctx->pc = 0x18AC28u;
    // 0x18ac28: 0xc076654  jal         func_1D9950
    ctx->pc = 0x18AC28u;
    SET_GPR_U32(ctx, 31, 0x18AC30u);
    ctx->pc = 0x18AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC28u;
    // 0x18ac2c: 0x8f8580dc  lw          $a1, -0x7F24($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x18AC28u, 0x18AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC30u;
label_18ac30:
    // 0x18ac30: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18ac34: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC34u;
    {
        const bool branch_taken_0x18ac34 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x18ac34) {
            ctx->pc = 0x18AC44u;
            goto label_18ac44;
        }
    }
    ctx->pc = 0x18AC3Cu;
    // 0x18ac3c: 0xc076654  jal         func_1D9950
    ctx->pc = 0x18AC3Cu;
    SET_GPR_U32(ctx, 31, 0x18AC44u);
    ctx->pc = 0x18AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC3Cu;
    // 0x18ac40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x18AC3Cu, 0x18AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC44u;
label_18ac44:
    // 0x18ac44: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AC44u;
    {
        const bool branch_taken_0x18ac44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC44u;
        // 0x18ac48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac44) {
            ctx->pc = 0x18AC58u;
            goto label_18ac58;
        }
    }
    ctx->pc = 0x18AC4Cu;
    // 0x18ac4c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x18AC4Cu;
    SET_GPR_U32(ctx, 31, 0x18AC54u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x18AC4Cu, 0x18AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC54u;
label_18ac54:
    // 0x18ac54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ac58:
    // 0x18ac58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC58u;
    {
        const bool branch_taken_0x18ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC58u;
        // 0x18ac5c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac58) {
            ctx->pc = 0x18AC68u;
            goto label_18ac68;
        }
    }
    ctx->pc = 0x18AC60u;
label_18ac60:
    // 0x18ac60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ac60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ac64:
    // 0x18ac64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18ac64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18ac68:
    // 0x18ac68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ac68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ac6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ac6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ac70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ac70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ac74: 0x3e00008  jr          $ra
    ctx->pc = 0x18AC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC74u;
        // 0x18ac78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AC7Cu;
}
