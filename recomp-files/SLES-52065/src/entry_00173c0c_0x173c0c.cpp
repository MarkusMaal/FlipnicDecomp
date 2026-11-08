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

// Function: entry_00173c0c
// Address: 0x173c0c - 0x173c18
void entry_00173c0c_0x173c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173c0c_0x173c0c");
#endif

    ctx->pc = 0x173c0cu;

    // 0x173c0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x173c0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c10: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x173C10u;
    {
        const bool branch_taken_0x173c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C10u;
        // 0x173c14: 0xafa20094  sw          $v0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c10) {
            ctx->pc = 0x173E3Cu;
            return;
        }
    }
    ctx->pc = 0x173C18u;
}
