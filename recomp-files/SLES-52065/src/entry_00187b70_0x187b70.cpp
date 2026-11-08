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

// Function: entry_00187b70
// Address: 0x187b70 - 0x187b80
void entry_00187b70_0x187b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187b70_0x187b70");
#endif

    ctx->pc = 0x187b70u;

    // 0x187b70: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x187b70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x187b74: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x187b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x187b78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x187B78u;
    {
        const bool branch_taken_0x187b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B78u;
        // 0x187b7c: 0x24c6f9e8  addiu       $a2, $a2, -0x618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b78) {
            ctx->pc = 0x187B90u;
            return;
        }
    }
    ctx->pc = 0x187B80u;
}
