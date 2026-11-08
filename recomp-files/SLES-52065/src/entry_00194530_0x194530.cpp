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

// Function: entry_00194530
// Address: 0x194530 - 0x194548
void entry_00194530_0x194530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194530_0x194530");
#endif

    ctx->pc = 0x194530u;

    // 0x194530: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x194530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x194534: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x194534u;
    {
        const bool branch_taken_0x194534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194534u;
        // 0x194538: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194534) {
            ctx->pc = 0x194500u;
            return;
        }
    }
    ctx->pc = 0x19453Cu;
    // 0x19453c: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x19453cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x194540: 0x1000060c  b           . + 4 + (0x60C << 2)
    ctx->pc = 0x194540u;
    {
        const bool branch_taken_0x194540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194540u;
        // 0x194544: 0xae83032c  sw          $v1, 0x32C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194540) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194548u;
}
