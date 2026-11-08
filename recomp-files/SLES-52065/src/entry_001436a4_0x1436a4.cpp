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

// Function: entry_001436a4
// Address: 0x1436a4 - 0x1436cc
void entry_001436a4_0x1436a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001436a4_0x1436a4");
#endif

    ctx->pc = 0x1436a4u;

    // 0x1436a4: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1436A4u;
    {
        const bool branch_taken_0x1436a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1436a4) {
            ctx->pc = 0x1436CCu;
            return;
        }
    }
    ctx->pc = 0x1436ACu;
    // 0x1436ac: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1436acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1436b0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1436b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1436b4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1436b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1436b8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1436b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1436bc: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x1436bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1436c0: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x1436c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1436c4: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x1436c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1436c8: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1436c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    ctx->pc = 0x1436ccu;
}
