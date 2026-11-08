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

// Function: entry_001b14b8
// Address: 0x1b14b8 - 0x1b14d0
void entry_001b14b8_0x1b14b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b14b8_0x1b14b8");
#endif

    ctx->pc = 0x1b14b8u;

    // 0x1b14b8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b14b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b14bc: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1B14BCu;
    {
        const bool branch_taken_0x1b14bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14BCu;
        // 0x1b14c0: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14bc) {
            ctx->pc = 0x1B1394u;
            return;
        }
    }
    ctx->pc = 0x1B14C4u;
    // 0x1b14c4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b14c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b14c8: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x1B14C8u;
    {
        const bool branch_taken_0x1b14c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b14c8) {
            ctx->pc = 0x1B1390u;
            return;
        }
    }
    ctx->pc = 0x1B14D0u;
}
