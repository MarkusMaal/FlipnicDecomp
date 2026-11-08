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

// Function: entry_001c9c98
// Address: 0x1c9c98 - 0x1c9cc0
void entry_001c9c98_0x1c9c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9c98_0x1c9c98");
#endif

    ctx->pc = 0x1c9c98u;

    // 0x1c9c98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c9c: 0x8022f938  lb          $v0, -0x6C8($at)
    ctx->pc = 0x1c9c9cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F938u));
    // 0x1c9ca0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9CA0u;
    {
        const bool branch_taken_0x1c9ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ca0) {
            ctx->pc = 0x1C9CC0u;
            return;
        }
    }
    ctx->pc = 0x1C9CA8u;
    // 0x1c9ca8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9cac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9cb0: 0xac23f930  sw          $v1, -0x6D0($at)
    ctx->pc = 0x1c9cb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F930u, _value); } while (0);
    // 0x1c9cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9cb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9cbc: 0xa022f938  sb          $v0, -0x6C8($at)
    ctx->pc = 0x1c9cbcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F938u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F938u, _value); } while (0);
    ctx->pc = 0x1c9cc0u;
}
