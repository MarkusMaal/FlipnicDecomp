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

// Function: entry_001a5078
// Address: 0x1a5078 - 0x1a50b4
void entry_001a5078_0x1a5078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5078_0x1a5078");
#endif

    ctx->pc = 0x1a5078u;

    // 0x1a5078: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a5078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a507c: 0xfe620788  sd          $v0, 0x788($s3)
    ctx->pc = 0x1a507cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1928), GPR_U64(ctx, 2));
    // 0x1a5080: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1a5080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a5084: 0xfe620790  sd          $v0, 0x790($s3)
    ctx->pc = 0x1a5084u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1936), GPR_U64(ctx, 2));
    // 0x1a5088: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1a5088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a508c: 0xfe620798  sd          $v0, 0x798($s3)
    ctx->pc = 0x1a508cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1944), GPR_U64(ctx, 2));
    // 0x1a5090: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1a5090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a5094: 0xfe6207a0  sd          $v0, 0x7A0($s3)
    ctx->pc = 0x1a5094u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1952), GPR_U64(ctx, 2));
    // 0x1a5098: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1a5098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a509c: 0xfe6207a8  sd          $v0, 0x7A8($s3)
    ctx->pc = 0x1a509cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1960), GPR_U64(ctx, 2));
    // 0x1a50a0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1a50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1a50a4: 0xfe6207b0  sd          $v0, 0x7B0($s3)
    ctx->pc = 0x1a50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1968), GPR_U64(ctx, 2));
    // 0x1a50a8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1a50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a50ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A50ACu;
    {
        const bool branch_taken_0x1a50ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50ACu;
        // 0x1a50b0: 0xfe6207b8  sd          $v0, 0x7B8($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 1976), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50ac) {
            ctx->pc = 0x1A50CCu;
            return;
        }
    }
    ctx->pc = 0x1A50B4u;
}
