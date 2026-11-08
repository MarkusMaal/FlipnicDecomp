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

// Function: entry_0012e724
// Address: 0x12e724 - 0x12e76c
void entry_0012e724_0x12e724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e724_0x12e724");
#endif

    ctx->pc = 0x12e724u;

    // 0x12e724: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E724u;
    {
        const bool branch_taken_0x12e724 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e724) {
            ctx->pc = 0x12E76Cu;
            return;
        }
    }
    ctx->pc = 0x12E72Cu;
    // 0x12e72c: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x12e72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e730: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x12e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e734: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x12e734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e738: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x12e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e73c: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x12e73cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x12e740: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x12e740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x12e744: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x12e744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x12e748: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x12e748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x12e74c: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x12e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e750: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x12e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e754: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x12e754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e758: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x12e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e75c: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x12e75cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x12e760: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x12e760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x12e764: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x12e764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x12e768: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x12e768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    ctx->pc = 0x12e76cu;
}
