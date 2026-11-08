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

// Function: caseD_7
// Address: 0x138a50 - 0x138a64
void caseD_7_0x138a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x138a50");
#endif

    ctx->pc = 0x138a50u;

    // 0x138a50: 0x8f8384d4  lw          $v1, -0x7B2C($gp)
    ctx->pc = 0x138a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935764)));
    // 0x138a54: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138a58: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138a5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x138A5Cu;
    {
        const bool branch_taken_0x138a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A5Cu;
        // 0x138a60: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a5c) {
            ctx->pc = 0x138A74u;
            return;
        }
    }
    ctx->pc = 0x138A64u;
}
