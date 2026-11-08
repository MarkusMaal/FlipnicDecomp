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

// Function: entry_00187c74
// Address: 0x187c74 - 0x187c84
void entry_00187c74_0x187c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187c74_0x187c74");
#endif

    ctx->pc = 0x187c74u;

    // 0x187c74: 0x0  nop
    ctx->pc = 0x187c74u;
    // NOP
    // 0x187c78: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x187c78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x187c7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x187C7Cu;
    {
        const bool branch_taken_0x187c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C7Cu;
        // 0x187c80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c7c) {
            ctx->pc = 0x187C90u;
            return;
        }
    }
    ctx->pc = 0x187C84u;
}
