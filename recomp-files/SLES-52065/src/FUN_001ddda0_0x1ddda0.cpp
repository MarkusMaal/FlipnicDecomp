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

// Function: FUN_001ddda0
// Address: 0x1ddda0 - 0x1ddeac
void FUN_001ddda0_0x1ddda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ddda0_0x1ddda0");
#endif

    switch (ctx->pc) {
        case 0x1dddc4u: goto label_1dddc4;
        case 0x1dddf0u: goto label_1dddf0;
        default: break;
    }

    ctx->pc = 0x1ddda0u;

    // 0x1ddda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ddda4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ddda8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ddda8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dddac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dddacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dddb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dddb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dddb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dddb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dddb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dddbc: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DDDBCu;
    SET_GPR_U32(ctx, 31, 0x1DDDC4u);
    ctx->pc = 0x1DDDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDDBCu;
    // 0x1dddc0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DDDBCu, 0x1DDDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDC4u;
label_1dddc4:
    // 0x1dddc4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1dddc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dddc8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dddcc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dddccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dddd0: 0x244a7330  addiu       $t2, $v0, 0x7330
    ctx->pc = 0x1dddd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1dddd4: 0x246e72f8  addiu       $t6, $v1, 0x72F8
    ctx->pc = 0x1dddd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 29432));
    // 0x1dddd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dddd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddddc: 0x240dfff7  addiu       $t5, $zero, -0x9
    ctx->pc = 0x1ddddcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1ddde0: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x1ddde0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ddde4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ddde4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddde8: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1ddde8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dddec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dddecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dddf0:
    // 0x1dddf0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1dddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dddf4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1dddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1dddf8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DDDF8u;
    {
        const bool branch_taken_0x1dddf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dddf8) {
            ctx->pc = 0x1DDDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDDF8u;
            // 0x1dddfc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE6Cu;
            goto label_1dde6c;
        }
    }
    ctx->pc = 0x1DDE00u;
    // 0x1dde00: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1dde00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1dde04: 0x14520018  bne         $v0, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DDE04u;
    {
        const bool branch_taken_0x1dde04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1DDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE04u;
        // 0x1dde08: 0x25040010  addiu       $a0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde04) {
            ctx->pc = 0x1DDE68u;
            goto label_1dde68;
        }
    }
    ctx->pc = 0x1DDE0Cu;
    // 0x1dde0c: 0x25420004  addiu       $v0, $t2, 0x4
    ctx->pc = 0x1dde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1dde10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dde10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dde14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dde14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dde18: 0x14710013  bne         $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DDE18u;
    {
        const bool branch_taken_0x1dde18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x1DDE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE18u;
        // 0x1dde1c: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde18) {
            ctx->pc = 0x1DDE68u;
            goto label_1dde68;
        }
    }
    ctx->pc = 0x1DDE20u;
    // 0x1dde20: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1dde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1dde24: 0x54500011  bnel        $v0, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DDE24u;
    {
        const bool branch_taken_0x1dde24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1dde24) {
            ctx->pc = 0x1DDE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDE24u;
            // 0x1dde28: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE6Cu;
            goto label_1dde6c;
        }
    }
    ctx->pc = 0x1DDE2Cu;
    // 0x1dde2c: 0xad2024  and         $a0, $a1, $t5
    ctx->pc = 0x1dde2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x1dde30: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1dde30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1dde34: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x1dde34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde38: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1dde38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1dde3c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1dde3cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1dde40: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x1dde40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1dde44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDE44u;
    {
        const bool branch_taken_0x1dde44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE44u;
        // 0x1dde48: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde44) {
            ctx->pc = 0x1DDE58u;
            goto label_1dde58;
        }
    }
    ctx->pc = 0x1DDE4Cu;
    // 0x1dde4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDE4Cu;
    {
        const bool branch_taken_0x1dde4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE4Cu;
        // 0x1dde50: 0xc91004  sllv        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde4c) {
            ctx->pc = 0x1DDE60u;
            goto label_1dde60;
        }
    }
    ctx->pc = 0x1DDE54u;
    // 0x1dde54: 0x0  nop
    ctx->pc = 0x1dde54u;
    // NOP
label_1dde58:
    // 0x1dde58: 0x24c2ffe8  addiu       $v0, $a2, -0x18
    ctx->pc = 0x1dde58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x1dde5c: 0x491004  sllv        $v0, $t1, $v0
    ctx->pc = 0x1dde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_1dde60:
    // 0x1dde60: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1dde60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dde64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dde64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1dde68:
    // 0x1dde68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1dde68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1dde6c:
    // 0x1dde6c: 0x24e700e8  addiu       $a3, $a3, 0xE8
    ctx->pc = 0x1dde6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 232));
    // 0x1dde70: 0x28c20030  slti        $v0, $a2, 0x30
    ctx->pc = 0x1dde70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1dde74: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1DDE74u;
    {
        const bool branch_taken_0x1dde74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE74u;
        // 0x1dde78: 0x250800e8  addiu       $t0, $t0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde74) {
            ctx->pc = 0x1DDDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dddf0;
        }
    }
    ctx->pc = 0x1DDE7Cu;
    // 0x1dde7c: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDE7Cu;
    {
        const bool branch_taken_0x1dde7c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE7Cu;
        // 0x1dde80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde7c) {
            ctx->pc = 0x1DDE98u;
            goto label_1dde98;
        }
    }
    ctx->pc = 0x1DDE84u;
    // 0x1dde84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dde84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dde88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dde88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dde8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dde8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dde90: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1DDE90u;
    ctx->pc = 0x1DDE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDE90u;
    // 0x1dde94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDE98u;
label_1dde98:
    // 0x1dde98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dde98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dde9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dde9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddea0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ddea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEA4u;
        // 0x1ddea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDEACu;
}
