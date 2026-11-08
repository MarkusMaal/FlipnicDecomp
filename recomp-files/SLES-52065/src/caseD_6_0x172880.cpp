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

// Function: caseD_6
// Address: 0x172880 - 0x17288c
void caseD_6_0x172880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x172880");
#endif

    ctx->pc = 0x172880u;

    // 0x172880: 0x26032510  addiu       $v1, $s0, 0x2510
    ctx->pc = 0x172880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9488));
    // 0x172884: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172884u;
    {
        const bool branch_taken_0x172884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172884u;
        // 0x172888: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172884) {
            ctx->pc = 0x1728ACu;
            return;
        }
    }
    ctx->pc = 0x17288Cu;
}
