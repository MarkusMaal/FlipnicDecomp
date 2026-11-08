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

// Function: entry_00173e3c
// Address: 0x173e3c - 0x173e5c
void entry_00173e3c_0x173e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173e3c_0x173e3c");
#endif

    ctx->pc = 0x173e3cu;

    // 0x173e3c: 0x0  nop
    ctx->pc = 0x173e3cu;
    // NOP
    // 0x173e40: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x173e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x173e44: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x173E44u;
    {
        const bool branch_taken_0x173e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e44) {
            ctx->pc = 0x173C18u;
            return;
        }
    }
    ctx->pc = 0x173E4Cu;
    // 0x173e4c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x173e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173e50: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x173e50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x173e54: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x173e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x173e58: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x173e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x173e5cu;
}
