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

// Function: caseD_8
// Address: 0x194a58 - 0x194a60
void caseD_8_0x194a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x194a58");
#endif

    ctx->pc = 0x194a58u;

    // 0x194a58: 0x100004c6  b           . + 4 + (0x4C6 << 2)
    ctx->pc = 0x194A58u;
    {
        const bool branch_taken_0x194a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A58u;
        // 0x194a5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a58) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194A60u;
}
