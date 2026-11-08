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

// Function: entry_001a34f8
// Address: 0x1a34f8 - 0x1a350c
void entry_001a34f8_0x1a34f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a34f8_0x1a34f8");
#endif

    ctx->pc = 0x1a34f8u;

    // 0x1a34f8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a34fc: 0x244410c8  addiu       $a0, $v0, 0x10C8
    ctx->pc = 0x1a34fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    // 0x1a3500: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A3500u;
    {
        const bool branch_taken_0x1a3500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3500u;
        // 0x1a3504: 0xae2007c0  sw          $zero, 0x7C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3500) {
            ctx->pc = 0x1A3530u;
            return;
        }
    }
    ctx->pc = 0x1A3508u;
    // 0x1a3508: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a3508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    ctx->pc = 0x1a350cu;
}
