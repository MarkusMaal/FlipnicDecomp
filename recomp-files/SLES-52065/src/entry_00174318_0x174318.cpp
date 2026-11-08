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

// Function: entry_00174318
// Address: 0x174318 - 0x174334
void entry_00174318_0x174318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174318_0x174318");
#endif

    ctx->pc = 0x174318u;

    // 0x174318: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x174318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17431c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x17431Cu;
    {
        const bool branch_taken_0x17431c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17431c) {
            ctx->pc = 0x174240u;
            return;
        }
    }
    ctx->pc = 0x174324u;
    // 0x174324: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x174324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174328: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x174328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17432c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x17432cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x174330: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x174330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->pc = 0x174334u;
}
