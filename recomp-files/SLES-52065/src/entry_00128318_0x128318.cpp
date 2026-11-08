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

// Function: entry_00128318
// Address: 0x128318 - 0x128334
void entry_00128318_0x128318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128318_0x128318");
#endif

    ctx->pc = 0x128318u;

label_128318:
    // 0x128318: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x128318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12831c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12831cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x128320: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x128324: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x128324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x128328: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x128328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12832c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12832Cu;
    {
        const bool branch_taken_0x12832c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12832c) {
            ctx->pc = 0x128318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128318;
        }
    }
    ctx->pc = 0x128334u;
}
