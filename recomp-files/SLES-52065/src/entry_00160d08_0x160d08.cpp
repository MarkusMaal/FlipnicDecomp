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

// Function: entry_00160d08
// Address: 0x160d08 - 0x160d20
void entry_00160d08_0x160d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160d08_0x160d08");
#endif

    ctx->pc = 0x160d08u;

    // 0x160d08: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x160d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160d0c: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x160D0Cu;
    {
        const bool branch_taken_0x160d0c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x160d0c) {
            ctx->pc = 0x160D20u;
            return;
        }
    }
    ctx->pc = 0x160D14u;
    // 0x160d14: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x160d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x160d18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160d1c: 0xaea30024  sw          $v1, 0x24($s5)
    ctx->pc = 0x160d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x160d20u;
}
