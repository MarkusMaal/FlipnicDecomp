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

// Function: entry_0018d300
// Address: 0x18d300 - 0x18d31c
void entry_0018d300_0x18d300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d300_0x18d300");
#endif

    ctx->pc = 0x18d300u;

    // 0x18d300: 0xe64004a0  swc1        $f0, 0x4A0($s2)
    ctx->pc = 0x18d300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1184), bits); }
    // 0x18d304: 0xe64004a4  swc1        $f0, 0x4A4($s2)
    ctx->pc = 0x18d304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1188), bits); }
    // 0x18d308: 0xe64004a8  swc1        $f0, 0x4A8($s2)
    ctx->pc = 0x18d308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1192), bits); }
    // 0x18d30c: 0xe64004bc  swc1        $f0, 0x4BC($s2)
    ctx->pc = 0x18d30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1212), bits); }
    // 0x18d310: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x18d310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d314: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18D314u;
    {
        const bool branch_taken_0x18d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D314u;
        // 0x18d318: 0xe64004cc  swc1        $f0, 0x4CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d314) {
            ctx->pc = 0x18D338u;
            return;
        }
    }
    ctx->pc = 0x18D31Cu;
}
