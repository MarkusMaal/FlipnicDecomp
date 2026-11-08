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

// Function: entry_00187af4
// Address: 0x187af4 - 0x187b08
void entry_00187af4_0x187af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187af4_0x187af4");
#endif

    ctx->pc = 0x187af4u;

    // 0x187af4: 0x0  nop
    ctx->pc = 0x187af4u;
    // NOP
    // 0x187af8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x187af8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x187afc: 0x24c6f9e0  addiu       $a2, $a2, -0x620
    ctx->pc = 0x187afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965728));
    // 0x187b00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x187B00u;
    {
        const bool branch_taken_0x187b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B00u;
        // 0x187b04: 0x30e400ff  andi        $a0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b00) {
            ctx->pc = 0x187B18u;
            return;
        }
    }
    ctx->pc = 0x187B08u;
}
