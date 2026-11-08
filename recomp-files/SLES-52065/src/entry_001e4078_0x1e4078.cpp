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

// Function: entry_001e4078
// Address: 0x1e4078 - 0x1e4088
void entry_001e4078_0x1e4078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4078_0x1e4078");
#endif

    ctx->pc = 0x1e4078u;

    // 0x1e4078: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4078u;
    {
        const bool branch_taken_0x1e4078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4078u;
        // 0x1e407c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4078) {
            ctx->pc = 0x1E4088u;
            return;
        }
    }
    ctx->pc = 0x1E4080u;
    // 0x1e4080: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1E4080u;
    {
        const bool branch_taken_0x1e4080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4080u;
        // 0x1e4084: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4080) {
            ctx->pc = 0x1E41D8u;
            return;
        }
    }
    ctx->pc = 0x1E4088u;
}
