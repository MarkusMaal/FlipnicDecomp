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

// Function: entry_00203e24
// Address: 0x203e24 - 0x203e2c
void entry_00203e24_0x203e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203e24_0x203e24");
#endif

    ctx->pc = 0x203e24u;

    // 0x203e24: 0x1000ff91  b           . + 4 + (-0x6F << 2)
    ctx->pc = 0x203E24u;
    {
        const bool branch_taken_0x203e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E24u;
        // 0x203e28: 0x37de0010  ori         $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e24) {
            ctx->pc = 0x203C6Cu;
            return;
        }
    }
    ctx->pc = 0x203E2Cu;
}
