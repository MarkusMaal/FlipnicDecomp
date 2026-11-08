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

// Function: entry_001e48e4
// Address: 0x1e48e4 - 0x1e48f4
void entry_001e48e4_0x1e48e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e48e4_0x1e48e4");
#endif

    ctx->pc = 0x1e48e4u;

    // 0x1e48e4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e48e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e48e8: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e48e8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1e48ec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E48ECu;
    {
        const bool branch_taken_0x1e48ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48ECu;
        // 0x1e48f0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48ec) {
            ctx->pc = 0x1E4964u;
            return;
        }
    }
    ctx->pc = 0x1E48F4u;
}
