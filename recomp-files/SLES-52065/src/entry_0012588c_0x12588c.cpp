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

// Function: entry_0012588c
// Address: 0x12588c - 0x1258a4
void entry_0012588c_0x12588c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012588c_0x12588c");
#endif

    ctx->pc = 0x12588cu;

    // 0x12588c: 0x83828434  lb          $v0, -0x7BCC($gp)
    ctx->pc = 0x12588cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935604)));
    // 0x125890: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125890u;
    {
        const bool branch_taken_0x125890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125890u;
        // 0x125894: 0x24031a00  addiu       $v1, $zero, 0x1A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125890) {
            ctx->pc = 0x1258A4u;
            return;
        }
    }
    ctx->pc = 0x125898u;
    // 0x125898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12589c: 0xaf838430  sw          $v1, -0x7BD0($gp)
    ctx->pc = 0x12589cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935600), GPR_U32(ctx, 3));
    // 0x1258a0: 0xa3828434  sb          $v0, -0x7BCC($gp)
    ctx->pc = 0x1258a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935604), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1258a4u;
}
