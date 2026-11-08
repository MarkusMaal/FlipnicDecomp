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

// Function: caseD_8
// Address: 0x172898 - 0x1728a4
void caseD_8_0x172898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x172898");
#endif

    ctx->pc = 0x172898u;

    // 0x172898: 0x26032710  addiu       $v1, $s0, 0x2710
    ctx->pc = 0x172898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 10000));
    // 0x17289c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17289Cu;
    {
        const bool branch_taken_0x17289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1728A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17289Cu;
        // 0x1728a0: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17289c) {
            ctx->pc = 0x1728ACu;
            return;
        }
    }
    ctx->pc = 0x1728A4u;
}
