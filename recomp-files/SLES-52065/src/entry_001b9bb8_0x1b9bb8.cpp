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

// Function: entry_001b9bb8
// Address: 0x1b9bb8 - 0x1b9bd0
void entry_001b9bb8_0x1b9bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9bb8_0x1b9bb8");
#endif

    ctx->pc = 0x1b9bb8u;

    // 0x1b9bb8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1b9bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1b9bbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9bc0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x1b9bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x1b9bc4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x1b9bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1b9bc8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B9BC8u;
    {
        const bool branch_taken_0x1b9bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9BC8u;
        // 0x1b9bcc: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bc8) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B9BD0u;
}
