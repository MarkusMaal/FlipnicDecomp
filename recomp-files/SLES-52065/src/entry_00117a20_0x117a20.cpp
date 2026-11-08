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

// Function: entry_00117a20
// Address: 0x117a20 - 0x117a34
void entry_00117a20_0x117a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117a20_0x117a20");
#endif

    ctx->pc = 0x117a20u;

    // 0x117a20: 0x83828364  lb          $v0, -0x7C9C($gp)
    ctx->pc = 0x117a20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935396)));
    // 0x117a24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117A24u;
    {
        const bool branch_taken_0x117a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A24u;
        // 0x117a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a24) {
            ctx->pc = 0x117A34u;
            return;
        }
    }
    ctx->pc = 0x117A2Cu;
    // 0x117a2c: 0xaf808360  sw          $zero, -0x7CA0($gp)
    ctx->pc = 0x117a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935392), GPR_U32(ctx, 0));
    // 0x117a30: 0xa3828364  sb          $v0, -0x7C9C($gp)
    ctx->pc = 0x117a30u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935396), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x117a34u;
}
