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

// Function: entry_00137bf0
// Address: 0x137bf0 - 0x137c00
void entry_00137bf0_0x137bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137bf0_0x137bf0");
#endif

    ctx->pc = 0x137bf0u;

    // 0x137bf0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x137bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x137bf4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x137bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x137bf8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x137BF8u;
    {
        const bool branch_taken_0x137bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BF8u;
        // 0x137bfc: 0x2901021  addu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bf8) {
            ctx->pc = 0x137B58u;
            return;
        }
    }
    ctx->pc = 0x137C00u;
}
