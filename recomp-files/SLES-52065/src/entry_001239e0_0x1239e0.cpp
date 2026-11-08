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

// Function: entry_001239e0
// Address: 0x1239e0 - 0x123a04
void entry_001239e0_0x1239e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001239e0_0x1239e0");
#endif

    ctx->pc = 0x1239e0u;

    // 0x1239e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1239e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1239e4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1239e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1239e8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1239e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1239ec: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1239ECu;
    {
        const bool branch_taken_0x1239ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1239ec) {
            ctx->pc = 0x123A04u;
            return;
        }
    }
    ctx->pc = 0x1239F4u;
    // 0x1239f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1239f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1239f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1239f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1239fc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1239fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x123a00: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x123a00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x123a04u;
}
