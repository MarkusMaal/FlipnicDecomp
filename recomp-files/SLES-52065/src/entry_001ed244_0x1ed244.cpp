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

// Function: entry_001ed244
// Address: 0x1ed244 - 0x1ed258
void entry_001ed244_0x1ed244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed244_0x1ed244");
#endif

    ctx->pc = 0x1ed244u;

    // 0x1ed244: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed248: 0x104000fc  beqz        $v0, . + 4 + (0xFC << 2)
    ctx->pc = 0x1ED248u;
    {
        const bool branch_taken_0x1ed248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED248u;
        // 0x1ed24c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed248) {
            ctx->pc = 0x1ED63Cu;
            return;
        }
    }
    ctx->pc = 0x1ED250u;
    // 0x1ed250: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed250u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1ed254: 0x0  nop
    ctx->pc = 0x1ed254u;
    // NOP
    ctx->pc = 0x1ed258u;
}
