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

// Function: entry_0015be4c
// Address: 0x15be4c - 0x15be84
void entry_0015be4c_0x15be4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015be4c_0x15be4c");
#endif

    ctx->pc = 0x15be4cu;

    // 0x15be4c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15be50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15be50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15be54: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x15be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be58: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15be58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15be5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15be60: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x15be60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x15be64: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be68: 0xc6200214  lwc1        $f0, 0x214($s1)
    ctx->pc = 0x15be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15be6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15be70: 0xe6200214  swc1        $f0, 0x214($s1)
    ctx->pc = 0x15be70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
    // 0x15be74: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x15be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be78: 0xc6200218  lwc1        $f0, 0x218($s1)
    ctx->pc = 0x15be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15be7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15be80: 0xe6200218  swc1        $f0, 0x218($s1)
    ctx->pc = 0x15be80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
    ctx->pc = 0x15be84u;
}
