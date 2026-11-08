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

// Function: entry_001c02b4
// Address: 0x1c02b4 - 0x1c02c0
void entry_001c02b4_0x1c02b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c02b4_0x1c02b4");
#endif

    ctx->pc = 0x1c02b4u;

    // 0x1c02b4: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C02B4u;
    {
        const bool branch_taken_0x1c02b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02B4u;
        // 0x1c02b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02b4) {
            ctx->pc = 0x1C02C0u;
            return;
        }
    }
    ctx->pc = 0x1C02BCu;
    // 0x1c02bc: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1c02bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1c02c0u;
}
