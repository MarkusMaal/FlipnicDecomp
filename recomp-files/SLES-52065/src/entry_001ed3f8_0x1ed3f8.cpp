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

// Function: entry_001ed3f8
// Address: 0x1ed3f8 - 0x1ed408
void entry_001ed3f8_0x1ed3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed3f8_0x1ed3f8");
#endif

    ctx->pc = 0x1ed3f8u;

    // 0x1ed3f8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed3f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed3fc: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1ED3FCu;
    {
        const bool branch_taken_0x1ed3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3FCu;
        // 0x1ed400: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3fc) {
            ctx->pc = 0x1ED63Cu;
            return;
        }
    }
    ctx->pc = 0x1ED404u;
    // 0x1ed404: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed404u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x1ed408u;
}
