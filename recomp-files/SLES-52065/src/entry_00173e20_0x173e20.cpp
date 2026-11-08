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

// Function: entry_00173e20
// Address: 0x173e20 - 0x173e3c
void entry_00173e20_0x173e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173e20_0x173e20");
#endif

    ctx->pc = 0x173e20u;

    // 0x173e20: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x173e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x173e24: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x173E24u;
    {
        const bool branch_taken_0x173e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e24) {
            ctx->pc = 0x173C28u;
            return;
        }
    }
    ctx->pc = 0x173E2Cu;
    // 0x173e2c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x173e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173e30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x173e30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x173e34: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x173e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x173e38: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x173e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->pc = 0x173e3cu;
}
