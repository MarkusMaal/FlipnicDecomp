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

// Function: entry_001ed358
// Address: 0x1ed358 - 0x1ed368
void entry_001ed358_0x1ed358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed358_0x1ed358");
#endif

    ctx->pc = 0x1ed358u;

    // 0x1ed358: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED358u;
    {
        const bool branch_taken_0x1ed358 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED358u;
        // 0x1ed35c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed358) {
            ctx->pc = 0x1ED368u;
            return;
        }
    }
    ctx->pc = 0x1ED360u;
    // 0x1ed360: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED360u;
    {
        const bool branch_taken_0x1ed360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED360u;
        // 0x1ed364: 0x8671fff8  lh          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed360) {
            ctx->pc = 0x1ED36Cu;
            return;
        }
    }
    ctx->pc = 0x1ED368u;
}
