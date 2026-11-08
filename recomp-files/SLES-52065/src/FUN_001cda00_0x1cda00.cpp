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

// Function: FUN_001cda00
// Address: 0x1cda00 - 0x1cdaf4
void FUN_001cda00_0x1cda00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cda00_0x1cda00");
#endif

    switch (ctx->pc) {
        case 0x1cdabcu: goto label_1cdabc;
        case 0x1cdad0u: goto label_1cdad0;
        case 0x1cdae4u: goto label_1cdae4;
        default: break;
    }

    ctx->pc = 0x1cda00u;

    // 0x1cda00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cda00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cda04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cda04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cda08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cda08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cda0c: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1CDA0Cu;
    {
        const bool branch_taken_0x1cda0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA0Cu;
        // 0x1cda10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda0c) {
            ctx->pc = 0x1CDAA4u;
            goto label_1cdaa4;
        }
    }
    ctx->pc = 0x1CDA14u;
    // 0x1cda14: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x1cda14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1cda18: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1cda18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1cda1c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cda1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cda20: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1cda20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1cda24: 0x8c232ca0  lw          $v1, 0x2CA0($at)
    ctx->pc = 0x1cda24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x222CA0u));
    // 0x1cda28: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0
    ctx->pc = 0x1cda28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
    // 0x1cda2c: 0x24c62c70  addiu       $a2, $a2, 0x2C70
    ctx->pc = 0x1cda2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11376));
    // 0x1cda30: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cda30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cda34: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1cda34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1cda38: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1cda38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cda3c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1cda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cda40: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cda40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cda44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cda44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cda48: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1cda48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1cda4c: 0x8c232ca4  lw          $v1, 0x2CA4($at)
    ctx->pc = 0x1cda4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x222CA4u));
    // 0x1cda50: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cda50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cda54: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1cda54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1cda58: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1cda58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cda5c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1cda5cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cda60: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cda60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cda64: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cda64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cda68: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x1cda68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1cda6c: 0x8c232ca8  lw          $v1, 0x2CA8($at)
    ctx->pc = 0x1cda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x222CA8u));
    // 0x1cda70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cda70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cda74: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1cda74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1cda78: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1cda78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cda7c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1cda7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cda80: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cda80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cda84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cda84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cda88: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x1cda88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1cda8c: 0x8c232cac  lw          $v1, 0x2CAC($at)
    ctx->pc = 0x1cda8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x222CACu));
    // 0x1cda90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cda90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cda94: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1cda94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1cda98: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1cda98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cda9c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1cda9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cdaa0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cdaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cdaa4:
    // 0x1cdaa4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cdaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdaa8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CDAA8u;
    {
        const bool branch_taken_0x1cdaa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAA8u;
        // 0x1cdaac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaa8) {
            ctx->pc = 0x1CDAE4u;
            goto label_1cdae4;
        }
    }
    ctx->pc = 0x1CDAB0u;
    // 0x1cdab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cdab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdab4: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CDAB4u;
    SET_GPR_U32(ctx, 31, 0x1CDABCu);
    ctx->pc = 0x1CDAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAB4u;
    // 0x1cdab8: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CDAB4u, 0x1CDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDABCu;
label_1cdabc:
    // 0x1cdabc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdac4: 0x24a58830  addiu       $a1, $a1, -0x77D0
    ctx->pc = 0x1cdac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936624));
    // 0x1cdac8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CDAC8u;
    SET_GPR_U32(ctx, 31, 0x1CDAD0u);
    ctx->pc = 0x1CDACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAC8u;
    // 0x1cdacc: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CDAC8u, 0x1CDAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAD0u;
label_1cdad0:
    // 0x1cdad0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdad8: 0x24a589e0  addiu       $a1, $a1, -0x7620
    ctx->pc = 0x1cdad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937056));
    // 0x1cdadc: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CDADCu;
    SET_GPR_U32(ctx, 31, 0x1CDAE4u);
    ctx->pc = 0x1CDAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDADCu;
    // 0x1cdae0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CDADCu, 0x1CDAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAE4u;
label_1cdae4:
    // 0x1cdae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cdae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdaec: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAECu;
        // 0x1cdaf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDAF4u;
}
