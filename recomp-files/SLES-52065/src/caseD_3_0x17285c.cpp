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

// Function: caseD_3
// Address: 0x17285c - 0x172868
void caseD_3_0x17285c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x17285c");
#endif

    ctx->pc = 0x17285cu;

    // 0x17285c: 0x26031510  addiu       $v1, $s0, 0x1510
    ctx->pc = 0x17285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
    // 0x172860: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x172860u;
    {
        const bool branch_taken_0x172860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172860u;
        // 0x172864: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172860) {
            ctx->pc = 0x1728ACu;
            return;
        }
    }
    ctx->pc = 0x172868u;
}
