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

// Function: entry_0012ea04
// Address: 0x12ea04 - 0x12ea4c
void entry_0012ea04_0x12ea04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ea04_0x12ea04");
#endif

    ctx->pc = 0x12ea04u;

    // 0x12ea04: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x12EA04u;
    {
        const bool branch_taken_0x12ea04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea04) {
            ctx->pc = 0x12EA4Cu;
            return;
        }
    }
    ctx->pc = 0x12EA0Cu;
    // 0x12ea0c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x12ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ea10: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x12ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ea14: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x12ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ea18: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x12ea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ea1c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x12ea1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x12ea20: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x12ea20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x12ea24: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x12ea24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x12ea28: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x12ea28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x12ea2c: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x12ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ea30: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x12ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ea34: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x12ea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ea38: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x12ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ea3c: 0xe4a30010  swc1        $f3, 0x10($a1)
    ctx->pc = 0x12ea3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x12ea40: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x12ea40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x12ea44: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x12ea44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x12ea48: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x12ea48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    ctx->pc = 0x12ea4cu;
}
