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

// Function: entry_0010ee90
// Address: 0x10ee90 - 0x10eea8
void entry_0010ee90_0x10ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ee90_0x10ee90");
#endif

    ctx->pc = 0x10ee90u;

    // 0x10ee90: 0x92050230  lbu         $a1, 0x230($s0)
    ctx->pc = 0x10ee90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x10ee94: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x10ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10ee98: 0x64040004  daddiu      $a0, $zero, 0x4
    ctx->pc = 0x10ee98u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x10ee9c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10ee9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10eea0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10eea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10eea4: 0xa2030230  sb          $v1, 0x230($s0)
    ctx->pc = 0x10eea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 560), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10eea8u;
}
