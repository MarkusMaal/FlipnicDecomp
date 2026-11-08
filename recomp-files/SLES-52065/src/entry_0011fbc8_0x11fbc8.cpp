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

// Function: entry_0011fbc8
// Address: 0x11fbc8 - 0x11fbe8
void entry_0011fbc8_0x11fbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fbc8_0x11fbc8");
#endif

    ctx->pc = 0x11fbc8u;

    // 0x11fbc8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x11fbcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11fbd0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x11fbd4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x11fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x11fbd8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x11fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11fbdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11fbe0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x11FBE0u;
    {
        const bool branch_taken_0x11fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBE0u;
        // 0x11fbe4: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbe0) {
            ctx->pc = 0x11FCA4u;
            return;
        }
    }
    ctx->pc = 0x11FBE8u;
}
