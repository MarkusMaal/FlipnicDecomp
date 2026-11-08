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

// Function: entry_0012da3c
// Address: 0x12da3c - 0x12da50
void entry_0012da3c_0x12da3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012da3c_0x12da3c");
#endif

    ctx->pc = 0x12da3cu;

    // 0x12da3c: 0x838284a8  lb          $v0, -0x7B58($gp)
    ctx->pc = 0x12da3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935720)));
    // 0x12da40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DA40u;
    {
        const bool branch_taken_0x12da40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA40u;
        // 0x12da44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da40) {
            ctx->pc = 0x12DA50u;
            return;
        }
    }
    ctx->pc = 0x12DA48u;
    // 0x12da48: 0xa38084a4  sb          $zero, -0x7B5C($gp)
    ctx->pc = 0x12da48u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935716), (uint8_t)GPR_U32(ctx, 0));
    // 0x12da4c: 0xa38284a8  sb          $v0, -0x7B58($gp)
    ctx->pc = 0x12da4cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935720), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12da50u;
}
