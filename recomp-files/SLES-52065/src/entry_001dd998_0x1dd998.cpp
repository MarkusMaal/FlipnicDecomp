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

// Function: entry_001dd998
// Address: 0x1dd998 - 0x1dd9ac
void entry_001dd998_0x1dd998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd998_0x1dd998");
#endif

    ctx->pc = 0x1dd998u;

    // 0x1dd998: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd99c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dd99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dd9a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd9a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1dd9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1dd9a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1dd9a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x1dd9acu;
}
