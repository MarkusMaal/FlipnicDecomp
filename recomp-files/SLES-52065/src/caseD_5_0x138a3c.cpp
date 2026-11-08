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

// Function: caseD_5
// Address: 0x138a3c - 0x138a50
void caseD_5_0x138a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x138a3c");
#endif

    ctx->pc = 0x138a3cu;

    // 0x138a3c: 0x8f8384c8  lw          $v1, -0x7B38($gp)
    ctx->pc = 0x138a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935752)));
    // 0x138a40: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138a44: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138a48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x138A48u;
    {
        const bool branch_taken_0x138a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A48u;
        // 0x138a4c: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a48) {
            ctx->pc = 0x138A74u;
            return;
        }
    }
    ctx->pc = 0x138A50u;
}
