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

// Function: entry_0016097c
// Address: 0x16097c - 0x16099c
void entry_0016097c_0x16097c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016097c_0x16097c");
#endif

    ctx->pc = 0x16097cu;

    // 0x16097c: 0x0  nop
    ctx->pc = 0x16097cu;
    // NOP
    // 0x160980: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x160980u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160984: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x160984u;
    {
        const bool branch_taken_0x160984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160984u;
        // 0x160988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160984) {
            ctx->pc = 0x160A64u;
            return;
        }
    }
    ctx->pc = 0x16098Cu;
    // 0x16098c: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x16098cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x160990: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x160990u;
    {
        const bool branch_taken_0x160990 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160990u;
        // 0x160994: 0x2685fff8  addiu       $a1, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160990) {
            ctx->pc = 0x160A2Cu;
            return;
        }
    }
    ctx->pc = 0x160998u;
    // 0x160998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16099cu;
}
