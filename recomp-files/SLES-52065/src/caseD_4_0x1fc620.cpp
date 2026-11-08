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
// Address: 0x1fc620 - 0x1fc640
void caseD_4_0x1fc620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1fc620");
#endif

    ctx->pc = 0x1fc620u;

    // 0x1fc620: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1fc620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1fc624: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1fc624u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc628: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x1fc628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fc62c: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x1fc62cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x1fc630: 0xafb4000c  sw          $s4, 0xC($sp)
    ctx->pc = 0x1fc630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
    // 0x1fc634: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x1fc634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x1fc638: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FC638u;
    {
        const bool branch_taken_0x1fc638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC638u;
        // 0x1fc63c: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc638) {
            ctx->pc = 0x1FC664u;
            return;
        }
    }
    ctx->pc = 0x1FC640u;
}
