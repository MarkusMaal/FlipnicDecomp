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

// Function: entry_00157148
// Address: 0x157148 - 0x15715c
void entry_00157148_0x157148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157148_0x157148");
#endif

    ctx->pc = 0x157148u;

    // 0x157148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x157148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15714c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x157150: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x157150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157154: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x157154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x157158: 0xe4600280  swc1        $f0, 0x280($v1)
    ctx->pc = 0x157158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 640), bits); }
    ctx->pc = 0x15715cu;
}
