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

// Function: entry_001a38b0
// Address: 0x1a38b0 - 0x1a38f8
void entry_001a38b0_0x1a38b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a38b0_0x1a38b0");
#endif

    switch (ctx->pc) {
        case 0x1a38f0u: goto label_1a38f0;
        default: break;
    }

    ctx->pc = 0x1a38b0u;

    // 0x1a38b0: 0x8e2507bc  lw          $a1, 0x7BC($s1)
    ctx->pc = 0x1a38b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1980)));
    // 0x1a38b4: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A38B4u;
    {
        const bool branch_taken_0x1a38b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38b4) {
            ctx->pc = 0x1A3904u;
            return;
        }
    }
    ctx->pc = 0x1A38BCu;
    // 0x1a38bc: 0x8e230790  lw          $v1, 0x790($s1)
    ctx->pc = 0x1a38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
    // 0x1a38c0: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A38C0u;
    {
        const bool branch_taken_0x1a38c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a38c0) {
            ctx->pc = 0x1A3904u;
            return;
        }
    }
    ctx->pc = 0x1A38C8u;
    // 0x1a38c8: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x1a38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x1a38cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A38CCu;
    {
        const bool branch_taken_0x1a38cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38cc) {
            ctx->pc = 0x1A38F8u;
            return;
        }
    }
    ctx->pc = 0x1A38D4u;
    // 0x1a38d4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1a38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1a38d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a38d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a38dc: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A38DCu;
    {
        const bool branch_taken_0x1a38dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a38dc) {
            ctx->pc = 0x1A3904u;
            return;
        }
    }
    ctx->pc = 0x1A38E4u;
    // 0x1a38e4: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a38e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1a38e8: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A38E8u;
    SET_GPR_U32(ctx, 31, 0x1A38F0u);
    ctx->pc = 0x1A38ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38E8u;
    // 0x1a38ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A38E8u, 0x1A38F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38F0u;
label_1a38f0:
    // 0x1a38f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A38F0u;
    {
        const bool branch_taken_0x1a38f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38f0) {
            ctx->pc = 0x1A3904u;
            return;
        }
    }
    ctx->pc = 0x1A38F8u;
}
