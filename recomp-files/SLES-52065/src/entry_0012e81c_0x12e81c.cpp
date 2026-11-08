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

// Function: entry_0012e81c
// Address: 0x12e81c - 0x12e864
void entry_0012e81c_0x12e81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e81c_0x12e81c");
#endif

    ctx->pc = 0x12e81cu;

    // 0x12e81c: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E81Cu;
    {
        const bool branch_taken_0x12e81c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e81c) {
            ctx->pc = 0x12E864u;
            return;
        }
    }
    ctx->pc = 0x12E824u;
    // 0x12e824: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x12e824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e828: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x12e828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e82c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x12e82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e830: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x12e830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e834: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x12e834u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x12e838: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x12e838u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x12e83c: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x12e83cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x12e840: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x12e840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x12e844: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x12e844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e848: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x12e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e84c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x12e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e850: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x12e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e854: 0xe4e30010  swc1        $f3, 0x10($a3)
    ctx->pc = 0x12e854u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x12e858: 0xe4e20014  swc1        $f2, 0x14($a3)
    ctx->pc = 0x12e858u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x12e85c: 0xe4e10018  swc1        $f1, 0x18($a3)
    ctx->pc = 0x12e85cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x12e860: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x12e860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    ctx->pc = 0x12e864u;
}
