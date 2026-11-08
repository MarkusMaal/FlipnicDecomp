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

// Function: entry_001fb5d8
// Address: 0x1fb5d8 - 0x1fb5ec
void entry_001fb5d8_0x1fb5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb5d8_0x1fb5d8");
#endif

    ctx->pc = 0x1fb5d8u;

    // 0x1fb5d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1fb5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1fb5dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb5e0: 0x0  nop
    ctx->pc = 0x1fb5e0u;
    // NOP
    // 0x1fb5e4: 0x0  nop
    ctx->pc = 0x1fb5e4u;
    // NOP
    // 0x1fb5e8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1fb5e8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    ctx->pc = 0x1fb5ecu;
}
