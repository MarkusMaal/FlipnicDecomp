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

// Function: entry_00126f60
// Address: 0x126f60 - 0x126f74
void entry_00126f60_0x126f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126f60_0x126f60");
#endif

    ctx->pc = 0x126f60u;

    // 0x126f60: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x126f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x126f64: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x126f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x126f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126f6c: 0x0  nop
    ctx->pc = 0x126f6cu;
    // NOP
    // 0x126f70: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x126f70u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x126f74u;
}
