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

// Function: entry_00113358
// Address: 0x113358 - 0x113378
void entry_00113358_0x113358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113358_0x113358");
#endif

    ctx->pc = 0x113358u;

    // 0x113358: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x113358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11335c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11335cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x113360: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x113360u;
    {
        const bool branch_taken_0x113360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113360) {
            ctx->pc = 0x113328u;
            return;
        }
    }
    ctx->pc = 0x113368u;
    // 0x113368: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x113368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x11336c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x113370: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x113370u;
    {
        const bool branch_taken_0x113370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113370u;
        // 0x113374: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113370) {
            ctx->pc = 0x113600u;
            return;
        }
    }
    ctx->pc = 0x113378u;
}
