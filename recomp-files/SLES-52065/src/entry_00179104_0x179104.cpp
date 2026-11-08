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

// Function: entry_00179104
// Address: 0x179104 - 0x17911c
void entry_00179104_0x179104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179104_0x179104");
#endif

    ctx->pc = 0x179104u;

    // 0x179104: 0x0  nop
    ctx->pc = 0x179104u;
    // NOP
    // 0x179108: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x179108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17910c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x17910cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179110: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x179110u;
    {
        const bool branch_taken_0x179110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179110) {
            ctx->pc = 0x179024u;
            return;
        }
    }
    ctx->pc = 0x179118u;
    // 0x179118: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x179118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x17911cu;
}
