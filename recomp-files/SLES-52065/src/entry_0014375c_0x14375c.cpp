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

// Function: entry_0014375c
// Address: 0x14375c - 0x143784
void entry_0014375c_0x14375c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014375c_0x14375c");
#endif

    ctx->pc = 0x14375cu;

    // 0x14375c: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14375Cu;
    {
        const bool branch_taken_0x14375c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x14375c) {
            ctx->pc = 0x143784u;
            return;
        }
    }
    ctx->pc = 0x143764u;
    // 0x143764: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x143764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143768: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x143768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14376c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x14376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143770: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x143770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143774: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x143774u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x143778: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x143778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x14377c: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x14377cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x143780: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x143780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    ctx->pc = 0x143784u;
}
