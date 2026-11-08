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

// Function: entry_0019dbc0
// Address: 0x19dbc0 - 0x19dbe0
void entry_0019dbc0_0x19dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dbc0_0x19dbc0");
#endif

    ctx->pc = 0x19dbc0u;

    // 0x19dbc0: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x19dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x19dbc4: 0x8c420674  lw          $v0, 0x674($v0)
    ctx->pc = 0x19dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
    // 0x19dbc8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x19dbc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19dbcc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x19DBCCu;
    {
        const bool branch_taken_0x19dbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dbcc) {
            ctx->pc = 0x19DB60u;
            return;
        }
    }
    ctx->pc = 0x19DBD4u;
    // 0x19dbd4: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x19dbd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x19dbd8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19dbd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x19dbdc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19dbdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x19dbe0u;
}
