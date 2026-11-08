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

// Function: entry_0012e5c8
// Address: 0x12e5c8 - 0x12e610
void entry_0012e5c8_0x12e5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e5c8_0x12e5c8");
#endif

    ctx->pc = 0x12e5c8u;

    // 0x12e5c8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E5C8u;
    {
        const bool branch_taken_0x12e5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e5c8) {
            ctx->pc = 0x12E610u;
            return;
        }
    }
    ctx->pc = 0x12E5D0u;
    // 0x12e5d0: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x12e5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e5d4: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x12e5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e5d8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x12e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e5dc: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x12e5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e5e0: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x12e5e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x12e5e4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x12e5e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12e5e8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x12e5e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x12e5ec: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x12e5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x12e5f0: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x12e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e5f4: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x12e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e5f8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x12e5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e5fc: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x12e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e600: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x12e600u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x12e604: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x12e604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x12e608: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x12e608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x12e60c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x12e60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    ctx->pc = 0x12e610u;
}
