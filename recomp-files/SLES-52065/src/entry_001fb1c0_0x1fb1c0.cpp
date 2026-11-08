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

// Function: entry_001fb1c0
// Address: 0x1fb1c0 - 0x1fb1ec
void entry_001fb1c0_0x1fb1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb1c0_0x1fb1c0");
#endif

    ctx->pc = 0x1fb1c0u;

    // 0x1fb1c0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1fb1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x1fb1c4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1fb1c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1fb1c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb1cc: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x1fb1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x1fb1d0: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1fb1d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1fb1d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb1d8: 0x460c0381  sub.s       $f14, $f0, $f12
    ctx->pc = 0x1fb1d8u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1fb1dc: 0x460d0ac1  sub.s       $f11, $f1, $f13
    ctx->pc = 0x1fb1dcu;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x1fb1e0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fb1e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fb1e4: 0x460b7300  add.s       $f12, $f14, $f11
    ctx->pc = 0x1fb1e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x1fb1e8: 0x460c6382  mul.s       $f14, $f12, $f12
    ctx->pc = 0x1fb1e8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x1fb1ecu;
}
