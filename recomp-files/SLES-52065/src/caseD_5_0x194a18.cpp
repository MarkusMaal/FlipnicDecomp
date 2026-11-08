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
// Address: 0x194a18 - 0x194a3c
void caseD_5_0x194a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x194a18");
#endif

    ctx->pc = 0x194a18u;

    // 0x194a18: 0x8e830338  lw          $v1, 0x338($s4)
    ctx->pc = 0x194a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 824)));
    // 0x194a1c: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x194A1Cu;
    {
        const bool branch_taken_0x194a1c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x194A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A1Cu;
        // 0x194a20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a1c) {
            ctx->pc = 0x194A3Cu;
            return;
        }
    }
    ctx->pc = 0x194A24u;
    // 0x194a24: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x194a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x194a28: 0xae830334  sw          $v1, 0x334($s4)
    ctx->pc = 0x194a28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 3));
    // 0x194a2c: 0x8e830338  lw          $v1, 0x338($s4)
    ctx->pc = 0x194a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 824)));
    // 0x194a30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x194a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x194a34: 0x100004cf  b           . + 4 + (0x4CF << 2)
    ctx->pc = 0x194A34u;
    {
        const bool branch_taken_0x194a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A34u;
        // 0x194a38: 0xae830338  sw          $v1, 0x338($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 824), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a34) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194A3Cu;
}
