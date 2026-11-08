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

// Function: FUN_001ddbb0
// Address: 0x1ddbb0 - 0x1ddc90
void FUN_001ddbb0_0x1ddbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ddbb0_0x1ddbb0");
#endif

    switch (ctx->pc) {
        case 0x1ddbccu: goto label_1ddbcc;
        case 0x1ddbf0u: goto label_1ddbf0;
        default: break;
    }

    ctx->pc = 0x1ddbb0u;

    // 0x1ddbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ddbb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ddbb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ddbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddbbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ddbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ddbc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ddbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ddbc4: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DDBC4u;
    SET_GPR_U32(ctx, 31, 0x1DDBCCu);
    ctx->pc = 0x1DDBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDBC4u;
    // 0x1ddbc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DDBC4u, 0x1DDBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDBCCu;
label_1ddbcc:
    // 0x1ddbcc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1ddbccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddbd0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ddbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1ddbd4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1ddbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1ddbd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ddbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddbdc: 0x244b72f8  addiu       $t3, $v0, 0x72F8
    ctx->pc = 0x1ddbdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 29432));
    // 0x1ddbe0: 0x24657330  addiu       $a1, $v1, 0x7330
    ctx->pc = 0x1ddbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1ddbe4: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1ddbe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1ddbe8: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1ddbe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ddbec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ddbecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddbf0:
    // 0x1ddbf0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1ddbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ddbf4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ddbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1ddbf8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DDBF8u;
    {
        const bool branch_taken_0x1ddbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBF8u;
        // 0x1ddbfc: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbf8) {
            ctx->pc = 0x1DDC58u;
            goto label_1ddc58;
        }
    }
    ctx->pc = 0x1DDC00u;
    // 0x1ddc00: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DDC00u;
    {
        const bool branch_taken_0x1ddc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc00) {
            ctx->pc = 0x1DDC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDC00u;
            // 0x1ddc04: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDC5Cu;
            goto label_1ddc5c;
        }
    }
    ctx->pc = 0x1DDC08u;
    // 0x1ddc08: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ddc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ddc0c: 0x54510013  bnel        $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DDC0Cu;
    {
        const bool branch_taken_0x1ddc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1ddc0c) {
            ctx->pc = 0x1DDC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDC0Cu;
            // 0x1ddc10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDC5Cu;
            goto label_1ddc5c;
        }
    }
    ctx->pc = 0x1DDC14u;
    // 0x1ddc14: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1ddc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1ddc18: 0x54500010  bnel        $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DDC18u;
    {
        const bool branch_taken_0x1ddc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1ddc18) {
            ctx->pc = 0x1DDC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDC18u;
            // 0x1ddc1c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDC5Cu;
            goto label_1ddc5c;
        }
    }
    ctx->pc = 0x1DDC20u;
    // 0x1ddc20: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x1ddc20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x1ddc24: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1ddc24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1ddc28: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x1ddc28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc2c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1ddc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1ddc30: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1ddc30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ddc34: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1ddc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1ddc38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDC38u;
    {
        const bool branch_taken_0x1ddc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC38u;
        // 0x1ddc3c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc38) {
            ctx->pc = 0x1DDC48u;
            goto label_1ddc48;
        }
    }
    ctx->pc = 0x1DDC40u;
    // 0x1ddc40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDC40u;
    {
        const bool branch_taken_0x1ddc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC40u;
        // 0x1ddc44: 0xc71004  sllv        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc40) {
            ctx->pc = 0x1DDC50u;
            goto label_1ddc50;
        }
    }
    ctx->pc = 0x1DDC48u;
label_1ddc48:
    // 0x1ddc48: 0x24c2ffe8  addiu       $v0, $a2, -0x18
    ctx->pc = 0x1ddc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x1ddc4c: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x1ddc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1ddc50:
    // 0x1ddc50: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1ddc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ddc54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ddc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ddc58:
    // 0x1ddc58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ddc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ddc5c:
    // 0x1ddc5c: 0x28c20030  slti        $v0, $a2, 0x30
    ctx->pc = 0x1ddc5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ddc60: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1DDC60u;
    {
        const bool branch_taken_0x1ddc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC60u;
        // 0x1ddc64: 0x24a500e8  addiu       $a1, $a1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc60) {
            ctx->pc = 0x1DDBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddbf0;
        }
    }
    ctx->pc = 0x1DDC68u;
    // 0x1ddc68: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDC68u;
    {
        const bool branch_taken_0x1ddc68 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC68u;
        // 0x1ddc6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc68) {
            ctx->pc = 0x1DDC80u;
            goto label_1ddc80;
        }
    }
    ctx->pc = 0x1DDC70u;
    // 0x1ddc70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddc74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ddc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddc78: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1DDC78u;
    ctx->pc = 0x1DDC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDC78u;
    // 0x1ddc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDC80u;
label_1ddc80:
    // 0x1ddc80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddc80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddc84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ddc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddc88: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC88u;
        // 0x1ddc8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDC90u;
}
