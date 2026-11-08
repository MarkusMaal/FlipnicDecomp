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

// Function: entry_0011bd7c
// Address: 0x11bd7c - 0x11bdcc
void entry_0011bd7c_0x11bd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd7c_0x11bd7c");
#endif

    switch (ctx->pc) {
        case 0x11bdb0u: goto label_11bdb0;
        case 0x11bdc4u: goto label_11bdc4;
        default: break;
    }

    ctx->pc = 0x11bd7cu;

    // 0x11bd7c: 0x0  nop
    ctx->pc = 0x11bd7cu;
    // NOP
    // 0x11bd80: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x11bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11bd84: 0x8e220524  lw          $v0, 0x524($s1)
    ctx->pc = 0x11bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1316)));
    // 0x11bd88: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x11bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x11bd8c: 0x2484dae0  addiu       $a0, $a0, -0x2520
    ctx->pc = 0x11bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
    // 0x11bd90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd94: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x11bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x11bd98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11bd9c: 0x8c53003c  lw          $s3, 0x3C($v0)
    ctx->pc = 0x11bd9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11bda0: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x11bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x11bda4: 0x539023  subu        $s2, $v0, $s3
    ctx->pc = 0x11bda4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11bda8: 0xc080702  jal         func_201C08
    ctx->pc = 0x11BDA8u;
    SET_GPR_U32(ctx, 31, 0x11BDB0u);
    ctx->pc = 0x11BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDA8u;
    // 0x11bdac: 0xaf9183c4  sw          $s1, -0x7C3C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935492), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11BDA8u, 0x11BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDB0u;
label_11bdb0:
    // 0x11bdb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11bdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdb4: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x11bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x11bdb8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x11bdb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdbc: 0xc047948  jal         func_11E520
    ctx->pc = 0x11BDBCu;
    SET_GPR_U32(ctx, 31, 0x11BDC4u);
    ctx->pc = 0x11BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDBCu;
    // 0x11bdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E520u, 0x11BDBCu, 0x11BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDC4u;
label_11bdc4:
    // 0x11bdc4: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x11bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x11bdc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11bdc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11bdccu;
}
