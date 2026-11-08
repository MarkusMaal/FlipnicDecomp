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

// Function: entry_00174334
// Address: 0x174334 - 0x174354
void entry_00174334_0x174334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174334_0x174334");
#endif

    ctx->pc = 0x174334u;

    // 0x174334: 0x0  nop
    ctx->pc = 0x174334u;
    // NOP
    // 0x174338: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x174338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17433c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x17433Cu;
    {
        const bool branch_taken_0x17433c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17433c) {
            ctx->pc = 0x174230u;
            return;
        }
    }
    ctx->pc = 0x174344u;
    // 0x174344: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x174344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174348: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17434c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x17434cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x174350: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x174350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x174354u;
}
