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

// Function: entry_001ac490
// Address: 0x1ac490 - 0x1ac4a0
void entry_001ac490_0x1ac490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac490_0x1ac490");
#endif

    ctx->pc = 0x1ac490u;

    // 0x1ac490: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ac494: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1ac494u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ac498: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AC498u;
    {
        const bool branch_taken_0x1ac498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC498u;
        // 0x1ac49c: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac498) {
            ctx->pc = 0x1AC3F8u;
            return;
        }
    }
    ctx->pc = 0x1AC4A0u;
}
