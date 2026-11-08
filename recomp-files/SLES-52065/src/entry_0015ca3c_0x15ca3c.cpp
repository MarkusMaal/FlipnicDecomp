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

// Function: entry_0015ca3c
// Address: 0x15ca3c - 0x15ca50
void entry_0015ca3c_0x15ca3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ca3c_0x15ca3c");
#endif

    ctx->pc = 0x15ca3cu;

    // 0x15ca3c: 0x0  nop
    ctx->pc = 0x15ca3cu;
    // NOP
    // 0x15ca40: 0x8ea33dd8  lw          $v1, 0x3DD8($s5)
    ctx->pc = 0x15ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15832)));
    // 0x15ca44: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x15ca44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15ca48: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x15CA48u;
    {
        const bool branch_taken_0x15ca48 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x15CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA48u;
        // 0x15ca4c: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca48) {
            ctx->pc = 0x15CA74u;
            return;
        }
    }
    ctx->pc = 0x15CA50u;
}
