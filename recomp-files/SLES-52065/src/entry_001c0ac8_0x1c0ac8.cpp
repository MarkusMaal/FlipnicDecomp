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

// Function: entry_001c0ac8
// Address: 0x1c0ac8 - 0x1c0af0
void entry_001c0ac8_0x1c0ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0ac8_0x1c0ac8");
#endif

    ctx->pc = 0x1c0ac8u;

    // 0x1c0ac8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0acc: 0x8022f5b8  lb          $v0, -0xA48($at)
    ctx->pc = 0x1c0accu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F5B8u));
    // 0x1c0ad0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0AD0u;
    {
        const bool branch_taken_0x1c0ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ad0) {
            ctx->pc = 0x1C0AF0u;
            return;
        }
    }
    ctx->pc = 0x1C0AD8u;
    // 0x1c0ad8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c0adc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0ae0: 0xac23f5b0  sw          $v1, -0xA50($at)
    ctx->pc = 0x1c0ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F5B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5B0u, _value); } while (0);
    // 0x1c0ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ae8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0aec: 0xa022f5b8  sb          $v0, -0xA48($at)
    ctx->pc = 0x1c0aecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F5B8u, _value); } while (0);
    ctx->pc = 0x1c0af0u;
}
