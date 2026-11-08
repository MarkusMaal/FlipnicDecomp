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

// Function: entry_001790ec
// Address: 0x1790ec - 0x179104
void entry_001790ec_0x1790ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001790ec_0x1790ec");
#endif

    ctx->pc = 0x1790ecu;

    // 0x1790ec: 0x0  nop
    ctx->pc = 0x1790ecu;
    // NOP
    // 0x1790f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1790f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1790f4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1790f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1790f8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1790F8u;
    {
        const bool branch_taken_0x1790f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1790f8) {
            ctx->pc = 0x179040u;
            return;
        }
    }
    ctx->pc = 0x179100u;
    // 0x179100: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x179100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x179104u;
}
