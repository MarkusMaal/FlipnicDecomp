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

// Function: entry_0012e008
// Address: 0x12e008 - 0x12e048
void entry_0012e008_0x12e008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e008_0x12e008");
#endif

    ctx->pc = 0x12e008u;

    // 0x12e008: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x12e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e00c: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x12e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e010: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x12e010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e014: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x12e014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e018: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x12e018u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x12e01c: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x12e01cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x12e020: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x12e020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x12e024: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x12e024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x12e028: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x12e028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e02c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x12e02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e030: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x12e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e034: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x12e034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e038: 0xe6430010  swc1        $f3, 0x10($s2)
    ctx->pc = 0x12e038u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x12e03c: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x12e03cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x12e040: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x12e040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x12e044: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x12e044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    ctx->pc = 0x12e048u;
}
