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

// Function: entry_00149550
// Address: 0x149550 - 0x149560
void entry_00149550_0x149550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149550_0x149550");
#endif

    ctx->pc = 0x149550u;

    // 0x149550: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x149550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x149554: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x149554u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x149558: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x149558u;
    {
        const bool branch_taken_0x149558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149558u;
        // 0x14955c: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149558) {
            ctx->pc = 0x1495A8u;
            return;
        }
    }
    ctx->pc = 0x149560u;
}
