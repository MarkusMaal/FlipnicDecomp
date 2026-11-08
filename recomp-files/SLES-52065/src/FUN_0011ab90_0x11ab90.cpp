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

// Function: FUN_0011ab90
// Address: 0x11ab90 - 0x11ac9c
void FUN_0011ab90_0x11ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ab90_0x11ab90");
#endif

    switch (ctx->pc) {
        case 0x11abb4u: goto label_11abb4;
        case 0x11abd8u: goto label_11abd8;
        case 0x11ac00u: goto label_11ac00;
        case 0x11ac34u: goto label_11ac34;
        case 0x11ac3cu: goto label_11ac3c;
        case 0x11ac50u: goto label_11ac50;
        case 0x11ac6cu: goto label_11ac6c;
        default: break;
    }

    ctx->pc = 0x11ab90u;

    // 0x11ab90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ab94: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11ab94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11ab98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11ab9c: 0x24c6e710  addiu       $a2, $a2, -0x18F0
    ctx->pc = 0x11ab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960912));
    // 0x11aba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11aba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11aba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11aba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11aba8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11aba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abac: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11ABACu;
    SET_GPR_U32(ctx, 31, 0x11ABB4u);
    ctx->pc = 0x11ABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABACu;
    // 0x11abb0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11ABACu, 0x11ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABB4u;
label_11abb4:
    // 0x11abb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11abb8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11ABB8u;
    {
        const bool branch_taken_0x11abb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABB8u;
        // 0x11abbc: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abb8) {
            ctx->pc = 0x11ABC8u;
            goto label_11abc8;
        }
    }
    ctx->pc = 0x11ABC0u;
    // 0x11abc0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11ABC0u;
    {
        const bool branch_taken_0x11abc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABC0u;
        // 0x11abc4: 0xae230534  sw          $v1, 0x534($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abc0) {
            ctx->pc = 0x11AC20u;
            goto label_11ac20;
        }
    }
    ctx->pc = 0x11ABC8u;
label_11abc8:
    // 0x11abc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11abc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11abccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abd0: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11ABD0u;
    SET_GPR_U32(ctx, 31, 0x11ABD8u);
    ctx->pc = 0x11ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABD0u;
    // 0x11abd4: 0x24c6e718  addiu       $a2, $a2, -0x18E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11ABD0u, 0x11ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABD8u;
label_11abd8:
    // 0x11abd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11abdc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11ABDCu;
    {
        const bool branch_taken_0x11abdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABDCu;
        // 0x11abe0: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abdc) {
            ctx->pc = 0x11ABF0u;
            goto label_11abf0;
        }
    }
    ctx->pc = 0x11ABE4u;
    // 0x11abe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11abe8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11ABE8u;
    {
        const bool branch_taken_0x11abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABE8u;
        // 0x11abec: 0xae220534  sw          $v0, 0x534($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abe8) {
            ctx->pc = 0x11AC20u;
            goto label_11ac20;
        }
    }
    ctx->pc = 0x11ABF0u;
label_11abf0:
    // 0x11abf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11abf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11abf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abf8: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11ABF8u;
    SET_GPR_U32(ctx, 31, 0x11AC00u);
    ctx->pc = 0x11ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABF8u;
    // 0x11abfc: 0x24c6e720  addiu       $a2, $a2, -0x18E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11ABF8u, 0x11AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC00u;
label_11ac00:
    // 0x11ac00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ac04: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AC04u;
    {
        const bool branch_taken_0x11ac04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11ac04) {
            ctx->pc = 0x11AC18u;
            goto label_11ac18;
        }
    }
    ctx->pc = 0x11AC0Cu;
    // 0x11ac0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11ac10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11AC10u;
    {
        const bool branch_taken_0x11ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC10u;
        // 0x11ac14: 0xae220534  sw          $v0, 0x534($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac10) {
            ctx->pc = 0x11AC20u;
            goto label_11ac20;
        }
    }
    ctx->pc = 0x11AC18u;
label_11ac18:
    // 0x11ac18: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x11ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11ac1c: 0xae220534  sw          $v0, 0x534($s1)
    ctx->pc = 0x11ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1332), GPR_U32(ctx, 2));
label_11ac20:
    // 0x11ac20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ac24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac28: 0x26260104  addiu       $a2, $s1, 0x104
    ctx->pc = 0x11ac28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x11ac2c: 0xc046cd4  jal         func_11B350
    ctx->pc = 0x11AC2Cu;
    SET_GPR_U32(ctx, 31, 0x11AC34u);
    ctx->pc = 0x11AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC2Cu;
    // 0x11ac30: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B350u, 0x11AC2Cu, 0x11AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC34u;
label_11ac34:
    // 0x11ac34: 0xc046a6c  jal         func_11A9B0
    ctx->pc = 0x11AC34u;
    SET_GPR_U32(ctx, 31, 0x11AC3Cu);
    ctx->pc = 0x11AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC34u;
    // 0x11ac38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A9B0u, 0x11AC34u, 0x11AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC3Cu;
label_11ac3c:
    // 0x11ac3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ac3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ac40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac44: 0x26260264  addiu       $a2, $s1, 0x264
    ctx->pc = 0x11ac44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 612));
    // 0x11ac48: 0xc046d2c  jal         func_11B4B0
    ctx->pc = 0x11AC48u;
    SET_GPR_U32(ctx, 31, 0x11AC50u);
    ctx->pc = 0x11AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC48u;
    // 0x11ac4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B4B0u, 0x11AC48u, 0x11AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC50u;
label_11ac50:
    // 0x11ac50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AC50u;
    {
        const bool branch_taken_0x11ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC50u;
        // 0x11ac54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac50) {
            ctx->pc = 0x11AC64u;
            goto label_11ac64;
        }
    }
    ctx->pc = 0x11AC58u;
    // 0x11ac58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ac5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11AC5Cu;
    {
        const bool branch_taken_0x11ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC5Cu;
        // 0x11ac60: 0xae220538  sw          $v0, 0x538($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac5c) {
            ctx->pc = 0x11AC84u;
            goto label_11ac84;
        }
    }
    ctx->pc = 0x11AC64u;
label_11ac64:
    // 0x11ac64: 0xc046eb0  jal         func_11BAC0
    ctx->pc = 0x11AC64u;
    SET_GPR_U32(ctx, 31, 0x11AC6Cu);
    ctx->pc = 0x11BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BAC0u, 0x11AC64u, 0x11AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC6Cu;
label_11ac6c:
    // 0x11ac6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AC6Cu;
    {
        const bool branch_taken_0x11ac6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ac6c) {
            ctx->pc = 0x11AC7Cu;
            goto label_11ac7c;
        }
    }
    ctx->pc = 0x11AC74u;
    // 0x11ac74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11AC74u;
    {
        const bool branch_taken_0x11ac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC74u;
        // 0x11ac78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac74) {
            ctx->pc = 0x11AC88u;
            goto label_11ac88;
        }
    }
    ctx->pc = 0x11AC7Cu;
label_11ac7c:
    // 0x11ac7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ac80: 0xae220538  sw          $v0, 0x538($s1)
    ctx->pc = 0x11ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1336), GPR_U32(ctx, 2));
label_11ac84:
    // 0x11ac84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ac88:
    // 0x11ac88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ac88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ac8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11ac8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ac90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ac90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ac94: 0x3e00008  jr          $ra
    ctx->pc = 0x11AC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC94u;
        // 0x11ac98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AC9Cu;
}
