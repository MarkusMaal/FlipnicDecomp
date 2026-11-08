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

// Function: entry_001e4808
// Address: 0x1e4808 - 0x1e4820
void entry_001e4808_0x1e4808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4808_0x1e4808");
#endif

    ctx->pc = 0x1e4808u;

    // 0x1e4808: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4808u;
    {
        const bool branch_taken_0x1e4808 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4808u;
        // 0x1e480c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4808) {
            ctx->pc = 0x1E4820u;
            return;
        }
    }
    ctx->pc = 0x1E4810u;
    // 0x1e4810: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e4810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4814: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e4814u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1e4818: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1E4818u;
    {
        const bool branch_taken_0x1e4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4818u;
        // 0x1e481c: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4818) {
            ctx->pc = 0x1E4964u;
            return;
        }
    }
    ctx->pc = 0x1E4820u;
}
