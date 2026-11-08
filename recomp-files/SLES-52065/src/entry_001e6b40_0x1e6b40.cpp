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

// Function: entry_001e6b40
// Address: 0x1e6b40 - 0x1e6b64
void entry_001e6b40_0x1e6b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6b40_0x1e6b40");
#endif

    ctx->pc = 0x1e6b40u;

    // 0x1e6b40: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1e6b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e6b44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E6B44u;
    {
        const bool branch_taken_0x1e6b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b44) {
            ctx->pc = 0x1E6B28u;
            return;
        }
    }
    ctx->pc = 0x1E6B4Cu;
    // 0x1e6b4c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1e6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e6b50: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1e6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1e6b54: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1e6b54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1e6b58: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1e6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1e6b5c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1e6b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1e6b60: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x1e6b60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1e6b64u;
}
