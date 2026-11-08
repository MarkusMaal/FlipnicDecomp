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

// Function: FUN_001ddc90
// Address: 0x1ddc90 - 0x1ddd9c
void FUN_001ddc90_0x1ddc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ddc90_0x1ddc90");
#endif

    switch (ctx->pc) {
        case 0x1ddcb4u: goto label_1ddcb4;
        case 0x1ddce0u: goto label_1ddce0;
        default: break;
    }

    ctx->pc = 0x1ddc90u;

    // 0x1ddc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ddc94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ddc98: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ddc98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ddc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ddca0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ddca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddca4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ddca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ddca8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ddca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ddcac: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DDCACu;
    SET_GPR_U32(ctx, 31, 0x1DDCB4u);
    ctx->pc = 0x1DDCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDCACu;
    // 0x1ddcb0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DDCACu, 0x1DDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDCB4u;
label_1ddcb4:
    // 0x1ddcb4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1ddcb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddcb8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ddcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1ddcbc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1ddcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1ddcc0: 0x244a7330  addiu       $t2, $v0, 0x7330
    ctx->pc = 0x1ddcc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1ddcc4: 0x246e72f8  addiu       $t6, $v1, 0x72F8
    ctx->pc = 0x1ddcc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 29432));
    // 0x1ddcc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ddcc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddccc: 0x240dfff7  addiu       $t5, $zero, -0x9
    ctx->pc = 0x1ddcccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1ddcd0: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x1ddcd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ddcd4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ddcd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddcd8: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1ddcd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddcdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ddcdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddce0:
    // 0x1ddce0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1ddce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ddce4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ddce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1ddce8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DDCE8u;
    {
        const bool branch_taken_0x1ddce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddce8) {
            ctx->pc = 0x1DDCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDCE8u;
            // 0x1ddcec: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD5Cu;
            goto label_1ddd5c;
        }
    }
    ctx->pc = 0x1DDCF0u;
    // 0x1ddcf0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1ddcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1ddcf4: 0x54520019  bnel        $v0, $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DDCF4u;
    {
        const bool branch_taken_0x1ddcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1ddcf4) {
            ctx->pc = 0x1DDCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDCF4u;
            // 0x1ddcf8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD5Cu;
            goto label_1ddd5c;
        }
    }
    ctx->pc = 0x1DDCFCu;
    // 0x1ddcfc: 0x25420004  addiu       $v0, $t2, 0x4
    ctx->pc = 0x1ddcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1ddd00: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x1ddd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1ddd04: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ddd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd08: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ddd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ddd0c: 0x54710013  bnel        $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DDD0Cu;
    {
        const bool branch_taken_0x1ddd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1ddd0c) {
            ctx->pc = 0x1DDD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDD0Cu;
            // 0x1ddd10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD5Cu;
            goto label_1ddd5c;
        }
    }
    ctx->pc = 0x1DDD14u;
    // 0x1ddd14: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1ddd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1ddd18: 0x54500010  bnel        $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DDD18u;
    {
        const bool branch_taken_0x1ddd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1ddd18) {
            ctx->pc = 0x1DDD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDD18u;
            // 0x1ddd1c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD5Cu;
            goto label_1ddd5c;
        }
    }
    ctx->pc = 0x1DDD20u;
    // 0x1ddd20: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x1ddd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
    // 0x1ddd24: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1ddd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1ddd28: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x1ddd28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd2c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1ddd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1ddd30: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1ddd30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ddd34: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x1ddd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1ddd38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDD38u;
    {
        const bool branch_taken_0x1ddd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD38u;
        // 0x1ddd3c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd38) {
            ctx->pc = 0x1DDD48u;
            goto label_1ddd48;
        }
    }
    ctx->pc = 0x1DDD40u;
    // 0x1ddd40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDD40u;
    {
        const bool branch_taken_0x1ddd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD40u;
        // 0x1ddd44: 0xc91004  sllv        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd40) {
            ctx->pc = 0x1DDD50u;
            goto label_1ddd50;
        }
    }
    ctx->pc = 0x1DDD48u;
label_1ddd48:
    // 0x1ddd48: 0x24c2ffe8  addiu       $v0, $a2, -0x18
    ctx->pc = 0x1ddd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x1ddd4c: 0x491004  sllv        $v0, $t1, $v0
    ctx->pc = 0x1ddd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_1ddd50:
    // 0x1ddd50: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1ddd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ddd54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ddd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ddd58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ddd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ddd5c:
    // 0x1ddd5c: 0x24e700e8  addiu       $a3, $a3, 0xE8
    ctx->pc = 0x1ddd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 232));
    // 0x1ddd60: 0x28c20030  slti        $v0, $a2, 0x30
    ctx->pc = 0x1ddd60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ddd64: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1DDD64u;
    {
        const bool branch_taken_0x1ddd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD64u;
        // 0x1ddd68: 0x250800e8  addiu       $t0, $t0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd64) {
            ctx->pc = 0x1DDCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddce0;
        }
    }
    ctx->pc = 0x1DDD6Cu;
    // 0x1ddd6c: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDD6Cu;
    {
        const bool branch_taken_0x1ddd6c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD6Cu;
        // 0x1ddd70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd6c) {
            ctx->pc = 0x1DDD88u;
            goto label_1ddd88;
        }
    }
    ctx->pc = 0x1DDD74u;
    // 0x1ddd74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddd74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddd78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddd78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddd7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ddd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddd80: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1DDD80u;
    ctx->pc = 0x1DDD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD80u;
    // 0x1ddd84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDD88u;
label_1ddd88:
    // 0x1ddd88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddd88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddd8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddd8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddd90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ddd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddd94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD94u;
        // 0x1ddd98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDD9Cu;
}
