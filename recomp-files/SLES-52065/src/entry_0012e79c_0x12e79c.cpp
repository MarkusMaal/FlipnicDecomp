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

// Function: entry_0012e79c
// Address: 0x12e79c - 0x12e7e4
void entry_0012e79c_0x12e79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e79c_0x12e79c");
#endif

    ctx->pc = 0x12e79cu;

    // 0x12e79c: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E79Cu;
    {
        const bool branch_taken_0x12e79c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e79c) {
            ctx->pc = 0x12E7E4u;
            return;
        }
    }
    ctx->pc = 0x12E7A4u;
    // 0x12e7a4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x12e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e7a8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x12e7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e7ac: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x12e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e7b0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x12e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e7b4: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x12e7b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x12e7b8: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x12e7b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x12e7bc: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x12e7bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x12e7c0: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x12e7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x12e7c4: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x12e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e7c8: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x12e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e7cc: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x12e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e7d0: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x12e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e7d4: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x12e7d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x12e7d8: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x12e7d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x12e7dc: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x12e7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x12e7e0: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x12e7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    ctx->pc = 0x12e7e4u;
}
