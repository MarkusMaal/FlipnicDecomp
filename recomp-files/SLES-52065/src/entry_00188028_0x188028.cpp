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

// Function: entry_00188028
// Address: 0x188028 - 0x188038
void entry_00188028_0x188028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188028_0x188028");
#endif

    ctx->pc = 0x188028u;

    // 0x188028: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x188028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x18802c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x18802cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x188030: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x188030u;
    {
        const bool branch_taken_0x188030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188030u;
        // 0x188034: 0x24c6f9e8  addiu       $a2, $a2, -0x618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188030) {
            ctx->pc = 0x188054u;
            return;
        }
    }
    ctx->pc = 0x188038u;
}
