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

// Function: caseD_4
// Address: 0x172868 - 0x172874
void caseD_4_0x172868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x172868");
#endif

    ctx->pc = 0x172868u;

    // 0x172868: 0x26031620  addiu       $v1, $s0, 0x1620
    ctx->pc = 0x172868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5664));
    // 0x17286c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17286Cu;
    {
        const bool branch_taken_0x17286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17286Cu;
        // 0x172870: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17286c) {
            ctx->pc = 0x1728ACu;
            return;
        }
    }
    ctx->pc = 0x172874u;
}
