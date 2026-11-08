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

// Function: entry_0019483c
// Address: 0x19483c - 0x194858
void entry_0019483c_0x19483c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019483c_0x19483c");
#endif

    ctx->pc = 0x19483cu;

    // 0x19483c: 0x0  nop
    ctx->pc = 0x19483cu;
    // NOP
    // 0x194840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194844: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x194844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x194848: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x194848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19484c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x19484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x194850: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x194850u;
    {
        const bool branch_taken_0x194850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194850u;
        // 0x194854: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194850) {
            ctx->pc = 0x19490Cu;
            return;
        }
    }
    ctx->pc = 0x194858u;
}
