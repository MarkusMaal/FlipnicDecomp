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

// Function: entry_0014347c
// Address: 0x14347c - 0x143498
void entry_0014347c_0x14347c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014347c_0x14347c");
#endif

    ctx->pc = 0x14347cu;

    // 0x14347c: 0x80e30004  lb          $v1, 0x4($a3)
    ctx->pc = 0x14347cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x143480: 0x0  nop
    ctx->pc = 0x143480u;
    // NOP
    // 0x143484: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x143484u;
    {
        const bool branch_taken_0x143484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x143484) {
            ctx->pc = 0x143498u;
            return;
        }
    }
    ctx->pc = 0x14348Cu;
    // 0x14348c: 0xa0e50004  sb          $a1, 0x4($a3)
    ctx->pc = 0x14348cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x143490: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x143490u;
    {
        const bool branch_taken_0x143490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143490u;
        // 0x143494: 0xa0e60005  sb          $a2, 0x5($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143490) {
            ctx->pc = 0x1434A8u;
            return;
        }
    }
    ctx->pc = 0x143498u;
}
