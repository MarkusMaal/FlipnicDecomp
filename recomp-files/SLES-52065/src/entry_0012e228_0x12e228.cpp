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

// Function: entry_0012e228
// Address: 0x12e228 - 0x12e26c
void entry_0012e228_0x12e228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e228_0x12e228");
#endif

    ctx->pc = 0x12e228u;

    // 0x12e228: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x12e228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12e22c: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x12e22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e230: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x12e230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e234: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x12e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e238: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x12e238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e23c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x12e23cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12e240: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x12e240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12e244: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x12e244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12e248: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x12e248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x12e24c: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x12e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e250: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x12e250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e254: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x12e254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e258: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x12e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e25c: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x12e25cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x12e260: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x12e260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x12e264: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x12e264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x12e268: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x12e268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    ctx->pc = 0x12e26cu;
}
