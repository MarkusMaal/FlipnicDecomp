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

// Function: entry_00157048
// Address: 0x157048 - 0x15705c
void entry_00157048_0x157048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157048_0x157048");
#endif

    ctx->pc = 0x157048u;

    // 0x157048: 0x460c1802  mul.s       $f0, $f3, $f12
    ctx->pc = 0x157048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x15704c: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x15704cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x157050: 0xe62002a0  swc1        $f0, 0x2A0($s1)
    ctx->pc = 0x157050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 672), bits); }
    // 0x157054: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x157054u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x157058: 0x7e260290  sq          $a2, 0x290($s1)
    ctx->pc = 0x157058u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 656), GPR_VEC(ctx, 6));
    ctx->pc = 0x15705cu;
}
