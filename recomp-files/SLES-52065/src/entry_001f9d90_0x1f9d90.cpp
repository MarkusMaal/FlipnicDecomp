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

// Function: entry_001f9d90
// Address: 0x1f9d90 - 0x1f9d9c
void entry_001f9d90_0x1f9d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9d90_0x1f9d90");
#endif

    ctx->pc = 0x1f9d90u;

    // 0x1f9d90: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1f9d90u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9d94: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1F9D94u;
    {
        const bool branch_taken_0x1f9d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D94u;
        // 0x1f9d98: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d94) {
            ctx->pc = 0x1FA020u;
            return;
        }
    }
    ctx->pc = 0x1F9D9Cu;
}
