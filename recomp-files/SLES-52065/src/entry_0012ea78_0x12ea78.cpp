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

// Function: entry_0012ea78
// Address: 0x12ea78 - 0x12eac0
void entry_0012ea78_0x12ea78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ea78_0x12ea78");
#endif

    ctx->pc = 0x12ea78u;

    // 0x12ea78: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x12EA78u;
    {
        const bool branch_taken_0x12ea78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea78) {
            ctx->pc = 0x12EAC0u;
            return;
        }
    }
    ctx->pc = 0x12EA80u;
    // 0x12ea80: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x12ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ea84: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x12ea84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ea88: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x12ea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ea8c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x12ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ea90: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x12ea90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x12ea94: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x12ea94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x12ea98: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x12ea98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x12ea9c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x12ea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x12eaa0: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x12eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12eaa4: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x12eaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12eaa8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x12eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12eaac: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x12eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12eab0: 0xe4a30010  swc1        $f3, 0x10($a1)
    ctx->pc = 0x12eab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x12eab4: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x12eab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x12eab8: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x12eab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x12eabc: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x12eabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    ctx->pc = 0x12eac0u;
}
