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

// Function: entry_001d9810
// Address: 0x1d9810 - 0x1d9828
void entry_001d9810_0x1d9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9810_0x1d9810");
#endif

    ctx->pc = 0x1d9810u;

    // 0x1d9810: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d9810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9814: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1d9814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d9818: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d9818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d981c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D981Cu;
    {
        const bool branch_taken_0x1d981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D981Cu;
        // 0x1d9820: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d981c) {
            ctx->pc = 0x1D983Cu;
            return;
        }
    }
    ctx->pc = 0x1D9824u;
    // 0x1d9824: 0x0  nop
    ctx->pc = 0x1d9824u;
    // NOP
    ctx->pc = 0x1d9828u;
}
