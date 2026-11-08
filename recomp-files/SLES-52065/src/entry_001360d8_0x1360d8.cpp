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

// Function: entry_001360d8
// Address: 0x1360d8 - 0x1360f4
void entry_001360d8_0x1360d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001360d8_0x1360d8");
#endif

    ctx->pc = 0x1360d8u;

label_1360d8:
    // 0x1360d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1360d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1360dc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1360dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1360e0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1360e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1360e4: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x1360e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1360e8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1360e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1360ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1360ECu;
    {
        const bool branch_taken_0x1360ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1360ec) {
            ctx->pc = 0x1360D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1360d8;
        }
    }
    ctx->pc = 0x1360F4u;
}
