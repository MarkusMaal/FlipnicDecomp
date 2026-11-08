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

// Function: entry_00121358
// Address: 0x121358 - 0x121374
void entry_00121358_0x121358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121358_0x121358");
#endif

    ctx->pc = 0x121358u;

label_121358:
    // 0x121358: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x121358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12135c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x12135cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x121360: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x121360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x121364: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x121364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x121368: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x121368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x12136c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12136Cu;
    {
        const bool branch_taken_0x12136c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12136c) {
            ctx->pc = 0x121358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121358;
        }
    }
    ctx->pc = 0x121374u;
}
