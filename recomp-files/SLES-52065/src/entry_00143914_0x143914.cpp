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

// Function: entry_00143914
// Address: 0x143914 - 0x14393c
void entry_00143914_0x143914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143914_0x143914");
#endif

    ctx->pc = 0x143914u;

    // 0x143914: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x143914u;
    {
        const bool branch_taken_0x143914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x143914) {
            ctx->pc = 0x14393Cu;
            return;
        }
    }
    ctx->pc = 0x14391Cu;
    // 0x14391c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x14391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143920: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x143920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143924: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x143924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143928: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x143928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14392c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x14392cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x143930: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x143930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x143934: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x143934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x143938: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x143938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->pc = 0x14393cu;
}
