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

// Function: entry_0012e120
// Address: 0x12e120 - 0x12e128
void entry_0012e120_0x12e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e120_0x12e120");
#endif

    ctx->pc = 0x12e120u;

    // 0x12e120: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12E120u;
    {
        const bool branch_taken_0x12e120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E120u;
        // 0x12e124: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e120) {
            ctx->pc = 0x12E158u;
            return;
        }
    }
    ctx->pc = 0x12E128u;
}
