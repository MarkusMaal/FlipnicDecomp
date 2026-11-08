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

// Function: entry_00194920
// Address: 0x194920 - 0x194938
void entry_00194920_0x194920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194920_0x194920");
#endif

    ctx->pc = 0x194920u;

    // 0x194920: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194924: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x194924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x194928: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x194928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19492c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x19492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x194930: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x194930u;
    {
        const bool branch_taken_0x194930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194930u;
        // 0x194934: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194930) {
            ctx->pc = 0x1949ECu;
            return;
        }
    }
    ctx->pc = 0x194938u;
}
