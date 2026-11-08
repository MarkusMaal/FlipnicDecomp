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

// Function: entry_0019df48
// Address: 0x19df48 - 0x19df50
void entry_0019df48_0x19df48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019df48_0x19df48");
#endif

    ctx->pc = 0x19df48u;

    // 0x19df48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19DF48u;
    {
        const bool branch_taken_0x19df48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF48u;
        // 0x19df4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df48) {
            ctx->pc = 0x19DF74u;
            return;
        }
    }
    ctx->pc = 0x19DF50u;
}
