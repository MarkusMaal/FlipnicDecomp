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

// Function: entry_0021b7d0
// Address: 0x21b7d0 - 0x21b7dc
void entry_0021b7d0_0x21b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b7d0_0x21b7d0");
#endif

    ctx->pc = 0x21b7d0u;

    // 0x21b7d0: 0x96426740  lhu         $v0, 0x6740($s2)
    ctx->pc = 0x21b7d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    // 0x21b7d4: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x21B7D4u;
    {
        const bool branch_taken_0x21b7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7D4u;
        // 0x21b7d8: 0x8e226700  lw          $v0, 0x6700($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7d4) {
            ctx->pc = 0x21B8D0u;
            return;
        }
    }
    ctx->pc = 0x21B7DCu;
}
