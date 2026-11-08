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

// Function: entry_0012f94c
// Address: 0x12f94c - 0x12f95c
void entry_0012f94c_0x12f94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f94c_0x12f94c");
#endif

    ctx->pc = 0x12f94cu;

    // 0x12f94c: 0x0  nop
    ctx->pc = 0x12f94cu;
    // NOP
    // 0x12f950: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12f950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f954: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12F954u;
    {
        const bool branch_taken_0x12f954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F954u;
        // 0x12f958: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f954) {
            ctx->pc = 0x12F974u;
            return;
        }
    }
    ctx->pc = 0x12F95Cu;
}
