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

// Function: caseD_f
// Address: 0x19fe4c - 0x19fe58
void caseD_f_0x19fe4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x19fe4c");
#endif

    ctx->pc = 0x19fe4cu;

    // 0x19fe4c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fe50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19FE50u;
    {
        const bool branch_taken_0x19fe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE50u;
        // 0x19fe54: 0xac662830  sw          $a2, 0x2830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10288), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe50) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FE58u;
}
