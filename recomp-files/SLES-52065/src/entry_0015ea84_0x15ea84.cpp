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

// Function: entry_0015ea84
// Address: 0x15ea84 - 0x15eb14
void entry_0015ea84_0x15ea84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ea84_0x15ea84");
#endif

    switch (ctx->pc) {
        case 0x15ead0u: goto label_15ead0;
        case 0x15eaf0u: goto label_15eaf0;
        default: break;
    }

    ctx->pc = 0x15ea84u;

label_15ea84:
    // 0x15ea84: 0x0  nop
    ctx->pc = 0x15ea84u;
    // NOP
label_15ea88:
    // 0x15ea88: 0x2b61021  addu        $v0, $s5, $s6
    ctx->pc = 0x15ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_15ea8c:
    // 0x15ea8c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15ea90:
    // 0x15ea90: 0x24532cd8  addiu       $s3, $v0, 0x2CD8
    ctx->pc = 0x15ea90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_15ea94:
    // 0x15ea94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15ea98:
    // 0x15ea98: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x15ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_15ea9c:
    // 0x15ea9c: 0x84630020  lh          $v1, 0x20($v1)
    ctx->pc = 0x15ea9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_15eaa0:
    // 0x15eaa0: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_15eaa4:
    if (ctx->pc == 0x15EAA4u) {
        ctx->pc = 0x15EAA8u;
        goto label_15eaa8;
    }
    ctx->pc = 0x15EAA0u;
    {
        const bool branch_taken_0x15eaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15eaa0) {
            ctx->pc = 0x15EB44u;
            return;
        }
    }
    ctx->pc = 0x15EAA8u;
label_15eaa8:
    // 0x15eaa8: 0x908201d3  lbu         $v0, 0x1D3($a0)
    ctx->pc = 0x15eaa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15eaac:
    // 0x15eaac: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_15eab0:
    if (ctx->pc == 0x15EAB0u) {
        ctx->pc = 0x15EAB4u;
        goto label_15eab4;
    }
    ctx->pc = 0x15EAACu;
    {
        const bool branch_taken_0x15eaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eaac) {
            ctx->pc = 0x15EB44u;
            return;
        }
    }
    ctx->pc = 0x15EAB4u;
label_15eab4:
    // 0x15eab4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15eab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15eab8:
    // 0x15eab8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15eabc:
    // 0x15eabc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15eabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15eac0:
    // 0x15eac0: 0x2a2a021  addu        $s4, $s5, $v0
    ctx->pc = 0x15eac0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_15eac4:
    // 0x15eac4: 0x26920040  addiu       $s2, $s4, 0x40
    ctx->pc = 0x15eac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_15eac8:
    // 0x15eac8: 0x320f809  jalr        $t9
label_15eacc:
    if (ctx->pc == 0x15EACCu) {
        ctx->pc = 0x15EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAC8u;
        // 0x15eacc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAD0u;
        goto label_15ead0;
    }
    ctx->pc = 0x15EAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EAD0u);
        ctx->pc = 0x15EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAC8u;
        // 0x15eacc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EAC8u, 0x15EAD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EAD0u;
label_15ead0:
    // 0x15ead0: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15ead0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15ead4:
    // 0x15ead4: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
label_15ead8:
    if (ctx->pc == 0x15EAD8u) {
        ctx->pc = 0x15EADCu;
        goto label_15eadc;
    }
    ctx->pc = 0x15EAD4u;
    {
        const bool branch_taken_0x15ead4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ead4) {
            ctx->pc = 0x15EB44u;
            return;
        }
    }
    ctx->pc = 0x15EADCu;
label_15eadc:
    // 0x15eadc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x15eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15eae0:
    // 0x15eae0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15eae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15eae4:
    // 0x15eae4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15eae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15eae8:
    // 0x15eae8: 0x320f809  jalr        $t9
label_15eaec:
    if (ctx->pc == 0x15EAECu) {
        ctx->pc = 0x15EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAE8u;
        // 0x15eaec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAF0u;
        goto label_15eaf0;
    }
    ctx->pc = 0x15EAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EAF0u);
        ctx->pc = 0x15EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAE8u;
        // 0x15eaec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EAE8u, 0x15EAF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EAF0u;
label_15eaf0:
    // 0x15eaf0: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15eaf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15eaf4:
    // 0x15eaf4: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_15eaf8:
    if (ctx->pc == 0x15EAF8u) {
        ctx->pc = 0x15EAFCu;
        goto label_15eafc;
    }
    ctx->pc = 0x15EAF4u;
    {
        const bool branch_taken_0x15eaf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eaf4) {
            ctx->pc = 0x15EB44u;
            return;
        }
    }
    ctx->pc = 0x15EAFCu;
label_15eafc:
    // 0x15eafc: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_15eb00:
    if (ctx->pc == 0x15EB00u) {
        ctx->pc = 0x15EB04u;
        goto label_15eb04;
    }
    ctx->pc = 0x15EAFCu;
    {
        const bool branch_taken_0x15eafc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x15eafc) {
            ctx->pc = 0x15EB14u;
            return;
        }
    }
    ctx->pc = 0x15EB04u;
label_15eb04:
    // 0x15eb04: 0x8683022c  lh          $v1, 0x22C($s4)
    ctx->pc = 0x15eb04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 556)));
label_15eb08:
    // 0x15eb08: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15eb0c:
    if (ctx->pc == 0x15EB0Cu) {
        ctx->pc = 0x15EB10u;
        goto label_15eb10;
    }
    ctx->pc = 0x15EB08u;
    {
        const bool branch_taken_0x15eb08 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15eb08) {
            ctx->pc = 0x15EB14u;
            return;
        }
    }
    ctx->pc = 0x15EB10u;
label_15eb10:
    // 0x15eb10: 0xa683022e  sh          $v1, 0x22E($s4)
    ctx->pc = 0x15eb10u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 558), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15eb14u;
}
