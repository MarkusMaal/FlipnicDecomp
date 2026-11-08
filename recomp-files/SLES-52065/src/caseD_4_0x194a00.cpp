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
// Address: 0x194a00 - 0x194a18
void caseD_4_0x194a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x194a00");
#endif

    ctx->pc = 0x194a00u;

    // 0x194a00: 0x8e830338  lw          $v1, 0x338($s4)
    ctx->pc = 0x194a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 824)));
    // 0x194a04: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x194a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x194a08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x194a0c: 0xae830338  sw          $v1, 0x338($s4)
    ctx->pc = 0x194a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 824), GPR_U32(ctx, 3));
    // 0x194a10: 0x100004d8  b           . + 4 + (0x4D8 << 2)
    ctx->pc = 0x194A10u;
    {
        const bool branch_taken_0x194a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A10u;
        // 0x194a14: 0xae800334  sw          $zero, 0x334($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a10) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194A18u;
}
