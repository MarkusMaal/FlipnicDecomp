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

// Function: entry_001c4d24
// Address: 0x1c4d24 - 0x1c4d4c
void entry_001c4d24_0x1c4d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4d24_0x1c4d24");
#endif

    ctx->pc = 0x1c4d24u;

    // 0x1c4d24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d28: 0x8022f878  lb          $v0, -0x788($at)
    ctx->pc = 0x1c4d28u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F878u));
    // 0x1c4d2c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4D2Cu;
    {
        const bool branch_taken_0x1c4d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d2c) {
            ctx->pc = 0x1C4D4Cu;
            return;
        }
    }
    ctx->pc = 0x1C4D34u;
    // 0x1c4d34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4d38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d3c: 0xac23f870  sw          $v1, -0x790($at)
    ctx->pc = 0x1c4d3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F870u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F870u, _value); } while (0);
    // 0x1c4d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4d44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d48: 0xa022f878  sb          $v0, -0x788($at)
    ctx->pc = 0x1c4d48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F878u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F878u, _value); } while (0);
    ctx->pc = 0x1c4d4cu;
}
