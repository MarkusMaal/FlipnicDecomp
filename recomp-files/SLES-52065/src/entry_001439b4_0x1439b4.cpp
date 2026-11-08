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

// Function: entry_001439b4
// Address: 0x1439b4 - 0x1439dc
void entry_001439b4_0x1439b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001439b4_0x1439b4");
#endif

    ctx->pc = 0x1439b4u;

    // 0x1439b4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1439B4u;
    {
        const bool branch_taken_0x1439b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1439b4) {
            ctx->pc = 0x1439DCu;
            return;
        }
    }
    ctx->pc = 0x1439BCu;
    // 0x1439bc: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1439bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1439c0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1439c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1439c4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1439c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1439c8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1439c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1439cc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x1439ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1439d0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x1439d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1439d4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1439d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1439d8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1439d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->pc = 0x1439dcu;
}
