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

// Function: entry_0011fbe8
// Address: 0x11fbe8 - 0x11fc04
void entry_0011fbe8_0x11fbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fbe8_0x11fbe8");
#endif

    ctx->pc = 0x11fbe8u;

    // 0x11fbe8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x11fbec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11fbf0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x11fbf4: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x11fbf8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11fbfc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11FBFCu;
    {
        const bool branch_taken_0x11fbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBFCu;
        // 0x11fc00: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbfc) {
            ctx->pc = 0x11FCA4u;
            return;
        }
    }
    ctx->pc = 0x11FC04u;
}
