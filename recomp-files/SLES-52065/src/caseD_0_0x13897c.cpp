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

// Function: caseD_0
// Address: 0x13897c - 0x138990
void caseD_0_0x13897c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x13897c");
#endif

    ctx->pc = 0x13897cu;

    // 0x13897c: 0x8f8384bc  lw          $v1, -0x7B44($gp)
    ctx->pc = 0x13897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x138980: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138984: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138988: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x138988u;
    {
        const bool branch_taken_0x138988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138988u;
        // 0x13898c: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138988) {
            ctx->pc = 0x138A74u;
            return;
        }
    }
    ctx->pc = 0x138990u;
}
