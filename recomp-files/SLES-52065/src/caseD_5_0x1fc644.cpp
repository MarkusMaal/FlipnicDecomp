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
// Address: 0x1fc644 - 0x1fc664
void caseD_5_0x1fc644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1fc644");
#endif

    ctx->pc = 0x1fc644u;

    // 0x1fc644: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1fc644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1fc648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fc648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc64c: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x1fc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fc650: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x1fc650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc654: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1fc654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1fc658: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x1fc658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x1fc65c: 0x14102a  slt         $v0, $zero, $s4
    ctx->pc = 0x1fc65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fc660: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x1fc660u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    ctx->pc = 0x1fc664u;
}
