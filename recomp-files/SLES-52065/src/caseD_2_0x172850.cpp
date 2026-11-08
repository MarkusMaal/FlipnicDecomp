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

// Function: caseD_2
// Address: 0x172850 - 0x17285c
void caseD_2_0x172850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x172850");
#endif

    ctx->pc = 0x172850u;

    // 0x172850: 0x26031740  addiu       $v1, $s0, 0x1740
    ctx->pc = 0x172850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x172854: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x172854u;
    {
        const bool branch_taken_0x172854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172854u;
        // 0x172858: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172854) {
            ctx->pc = 0x1728ACu;
            return;
        }
    }
    ctx->pc = 0x17285Cu;
}
