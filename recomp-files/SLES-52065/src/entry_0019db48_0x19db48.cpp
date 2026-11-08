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

// Function: entry_0019db48
// Address: 0x19db48 - 0x19db58
void entry_0019db48_0x19db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019db48_0x19db48");
#endif

    ctx->pc = 0x19db48u;

    // 0x19db48: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19db48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db4c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x19DB4Cu;
    {
        const bool branch_taken_0x19db4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB4Cu;
        // 0x19db50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db4c) {
            ctx->pc = 0x19DBE0u;
            return;
        }
    }
    ctx->pc = 0x19DB54u;
    // 0x19db54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19db54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19db58u;
}
