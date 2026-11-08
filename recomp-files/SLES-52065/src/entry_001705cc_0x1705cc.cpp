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

// Function: entry_001705cc
// Address: 0x1705cc - 0x1705e8
void entry_001705cc_0x1705cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001705cc_0x1705cc");
#endif

    ctx->pc = 0x1705ccu;

    // 0x1705cc: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1705CCu;
    {
        const bool branch_taken_0x1705cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1705D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705CCu;
        // 0x1705d0: 0x8c870224  lw          $a3, 0x224($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705cc) {
            ctx->pc = 0x1705E8u;
            return;
        }
    }
    ctx->pc = 0x1705D4u;
    // 0x1705d4: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1705d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1705d8: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1705d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1705dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1705dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1705e0: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x1705e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1705e4: 0x0  nop
    ctx->pc = 0x1705e4u;
    // NOP
    ctx->pc = 0x1705e8u;
}
