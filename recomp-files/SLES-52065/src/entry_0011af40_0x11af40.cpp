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

// Function: entry_0011af40
// Address: 0x11af40 - 0x11af54
void entry_0011af40_0x11af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011af40_0x11af40");
#endif

    ctx->pc = 0x11af40u;

    // 0x11af40: 0x826203c4  lb          $v0, 0x3C4($s3)
    ctx->pc = 0x11af40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 964)));
    // 0x11af44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AF44u;
    {
        const bool branch_taken_0x11af44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF44u;
        // 0x11af48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af44) {
            ctx->pc = 0x11AF54u;
            return;
        }
    }
    ctx->pc = 0x11AF4Cu;
    // 0x11af4c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x11AF4Cu;
    {
        const bool branch_taken_0x11af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11af4c) {
            ctx->pc = 0x11B02Cu;
            return;
        }
    }
    ctx->pc = 0x11AF54u;
}
