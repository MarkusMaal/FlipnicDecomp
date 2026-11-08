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
// Address: 0x172874 - 0x172880
void caseD_5_0x172874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x172874");
#endif

    ctx->pc = 0x172874u;

    // 0x172874: 0x26032370  addiu       $v1, $s0, 0x2370
    ctx->pc = 0x172874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9072));
    // 0x172878: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x172878u;
    {
        const bool branch_taken_0x172878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172878u;
        // 0x17287c: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172878) {
            ctx->pc = 0x1728ACu;
            return;
        }
    }
    ctx->pc = 0x172880u;
}
