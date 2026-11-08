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

// Function: entry_001c9a5c
// Address: 0x1c9a5c - 0x1c9a84
void entry_001c9a5c_0x1c9a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9a5c_0x1c9a5c");
#endif

    ctx->pc = 0x1c9a5cu;

    // 0x1c9a5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9a60: 0x8022f8c8  lb          $v0, -0x738($at)
    ctx->pc = 0x1c9a60u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F8C8u));
    // 0x1c9a64: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9A64u;
    {
        const bool branch_taken_0x1c9a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a64) {
            ctx->pc = 0x1C9A84u;
            return;
        }
    }
    ctx->pc = 0x1C9A6Cu;
    // 0x1c9a6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9a70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9a74: 0xac23f8c0  sw          $v1, -0x740($at)
    ctx->pc = 0x1c9a74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F8C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8C0u, _value); } while (0);
    // 0x1c9a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9a80: 0xa022f8c8  sb          $v0, -0x738($at)
    ctx->pc = 0x1c9a80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F8C8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8C8u, _value); } while (0);
    ctx->pc = 0x1c9a84u;
}
