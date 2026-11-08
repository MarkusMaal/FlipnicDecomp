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

// Function: entry_001e47c0
// Address: 0x1e47c0 - 0x1e47d0
void entry_001e47c0_0x1e47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e47c0_0x1e47c0");
#endif

    ctx->pc = 0x1e47c0u;

    // 0x1e47c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e47c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47c4: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e47c4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1e47c8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1E47C8u;
    {
        const bool branch_taken_0x1e47c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47C8u;
        // 0x1e47cc: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47c8) {
            ctx->pc = 0x1E4964u;
            return;
        }
    }
    ctx->pc = 0x1E47D0u;
}
