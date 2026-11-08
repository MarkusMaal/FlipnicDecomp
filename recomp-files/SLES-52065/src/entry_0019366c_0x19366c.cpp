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

// Function: entry_0019366c
// Address: 0x19366c - 0x193688
void entry_0019366c_0x19366c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019366c_0x19366c");
#endif

    ctx->pc = 0x19366cu;

    // 0x19366c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19366cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193670: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x193674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193678: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x19367c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193680: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x193680u;
    {
        const bool branch_taken_0x193680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193680u;
        // 0x193684: 0xa0600028  sb          $zero, 0x28($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193680) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
    ctx->pc = 0x193688u;
}
