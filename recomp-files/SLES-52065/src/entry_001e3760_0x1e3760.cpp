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

// Function: entry_001e3760
// Address: 0x1e3760 - 0x1e3770
void entry_001e3760_0x1e3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3760_0x1e3760");
#endif

    ctx->pc = 0x1e3760u;

    // 0x1e3760: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e3760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3764: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e3764u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1e3768: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1E3768u;
    {
        const bool branch_taken_0x1e3768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3768u;
        // 0x1e376c: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3768) {
            ctx->pc = 0x1E38F4u;
            return;
        }
    }
    ctx->pc = 0x1E3770u;
}
