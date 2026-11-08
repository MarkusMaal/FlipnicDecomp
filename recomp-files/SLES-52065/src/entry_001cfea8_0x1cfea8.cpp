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

// Function: entry_001cfea8
// Address: 0x1cfea8 - 0x1cfec0
void entry_001cfea8_0x1cfea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfea8_0x1cfea8");
#endif

    ctx->pc = 0x1cfea8u;

    // 0x1cfea8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cfea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cfeac: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x1cfeacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cfeb0: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1CFEB0u;
    {
        const bool branch_taken_0x1cfeb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEB0u;
        // 0x1cfeb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfeb0) {
            ctx->pc = 0x1CFE20u;
            return;
        }
    }
    ctx->pc = 0x1CFEB8u;
    // 0x1cfeb8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1CFEB8u;
    {
        const bool branch_taken_0x1cfeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfeb8) {
            ctx->pc = 0x1CFFD0u;
            return;
        }
    }
    ctx->pc = 0x1CFEC0u;
}
