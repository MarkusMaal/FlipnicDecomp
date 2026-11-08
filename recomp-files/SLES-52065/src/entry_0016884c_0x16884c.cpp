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

// Function: entry_0016884c
// Address: 0x16884c - 0x168864
void entry_0016884c_0x16884c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016884c_0x16884c");
#endif

    ctx->pc = 0x16884cu;

    // 0x16884c: 0x14c00014  bnez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x16884Cu;
    {
        const bool branch_taken_0x16884c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x168850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16884Cu;
        // 0x168850: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16884c) {
            ctx->pc = 0x1688A0u;
            return;
        }
    }
    ctx->pc = 0x168854u;
    // 0x168854: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x168854u;
    {
        const bool branch_taken_0x168854 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x168858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168854u;
        // 0x168858: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168854) {
            ctx->pc = 0x168864u;
            return;
        }
    }
    ctx->pc = 0x16885Cu;
    // 0x16885c: 0x90232ebf  lbu         $v1, 0x2EBF($at)
    ctx->pc = 0x16885cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11967)));
    // 0x168860: 0x0  nop
    ctx->pc = 0x168860u;
    // NOP
    ctx->pc = 0x168864u;
}
