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

// Function: entry_0011eb28
// Address: 0x11eb28 - 0x11eb30
void entry_0011eb28_0x11eb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eb28_0x11eb28");
#endif

    ctx->pc = 0x11eb28u;

    // 0x11eb28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11EB28u;
    {
        const bool branch_taken_0x11eb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB28u;
        // 0x11eb2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb28) {
            ctx->pc = 0x11EB38u;
            return;
        }
    }
    ctx->pc = 0x11EB30u;
}
