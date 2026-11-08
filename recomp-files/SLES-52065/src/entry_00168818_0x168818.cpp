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

// Function: entry_00168818
// Address: 0x168818 - 0x168828
void entry_00168818_0x168818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168818_0x168818");
#endif

    ctx->pc = 0x168818u;

    // 0x168818: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168818u;
    {
        const bool branch_taken_0x168818 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168818u;
        // 0x16881c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168818) {
            ctx->pc = 0x168828u;
            return;
        }
    }
    ctx->pc = 0x168820u;
    // 0x168820: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x168820u;
    {
        const bool branch_taken_0x168820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168820) {
            ctx->pc = 0x16884Cu;
            return;
        }
    }
    ctx->pc = 0x168828u;
}
