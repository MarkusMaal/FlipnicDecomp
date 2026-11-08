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

// Function: entry_00204db8
// Address: 0x204db8 - 0x204de0
void entry_00204db8_0x204db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204db8_0x204db8");
#endif

    ctx->pc = 0x204db8u;

    // 0x204db8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x204db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x204dbc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204dc0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204dc8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x204dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204dcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204dd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204dd4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204dd8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x204dd8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204ddc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x204ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x204de0u;
}
