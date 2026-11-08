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

// Function: entry_0018a244
// Address: 0x18a244 - 0x18a254
void entry_0018a244_0x18a244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a244_0x18a244");
#endif

    ctx->pc = 0x18a244u;

    // 0x18a244: 0x0  nop
    ctx->pc = 0x18a244u;
    // NOP
    // 0x18a248: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x18a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a24c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x18A24Cu;
    {
        const bool branch_taken_0x18a24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A24Cu;
        // 0x18a250: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a24c) {
            ctx->pc = 0x18A2E0u;
            return;
        }
    }
    ctx->pc = 0x18A254u;
}
