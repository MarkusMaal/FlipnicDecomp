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

// Function: entry_00121510
// Address: 0x121510 - 0x121520
void entry_00121510_0x121510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121510_0x121510");
#endif

    ctx->pc = 0x121510u;

    // 0x121510: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x121510u;
    {
        const bool branch_taken_0x121510 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x121510) {
            ctx->pc = 0x121520u;
            return;
        }
    }
    ctx->pc = 0x121518u;
    // 0x121518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121518u;
    {
        const bool branch_taken_0x121518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121518u;
        // 0x12151c: 0x272082b  sltu        $at, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121518) {
            ctx->pc = 0x121528u;
            return;
        }
    }
    ctx->pc = 0x121520u;
}
