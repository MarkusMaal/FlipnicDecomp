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

// Function: entry_001e6bd0
// Address: 0x1e6bd0 - 0x1e6bf4
void entry_001e6bd0_0x1e6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6bd0_0x1e6bd0");
#endif

    ctx->pc = 0x1e6bd0u;

    // 0x1e6bd0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x1e6bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e6bd4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E6BD4u;
    {
        const bool branch_taken_0x1e6bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6bd4) {
            ctx->pc = 0x1E6BB8u;
            return;
        }
    }
    ctx->pc = 0x1E6BDCu;
    // 0x1e6bdc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1e6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e6be0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1e6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1e6be4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1e6be4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1e6be8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1e6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1e6bec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1e6becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1e6bf0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x1e6bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1e6bf4u;
}
