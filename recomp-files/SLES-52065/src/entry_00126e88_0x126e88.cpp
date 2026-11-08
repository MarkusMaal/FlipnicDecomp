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

// Function: entry_00126e88
// Address: 0x126e88 - 0x126ea0
void entry_00126e88_0x126e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126e88_0x126e88");
#endif

    ctx->pc = 0x126e88u;

    // 0x126e88: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x126e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x126e8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x126e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x126e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126e94: 0x0  nop
    ctx->pc = 0x126e94u;
    // NOP
    // 0x126e98: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x126e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x126e9c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x126e9cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    ctx->pc = 0x126ea0u;
}
