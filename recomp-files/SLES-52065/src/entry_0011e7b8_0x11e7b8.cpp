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

// Function: entry_0011e7b8
// Address: 0x11e7b8 - 0x11e7cc
void entry_0011e7b8_0x11e7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e7b8_0x11e7b8");
#endif

    ctx->pc = 0x11e7b8u;

    // 0x11e7b8: 0x824203c4  lb          $v0, 0x3C4($s2)
    ctx->pc = 0x11e7b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 964)));
    // 0x11e7bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E7BCu;
    {
        const bool branch_taken_0x11e7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7BCu;
        // 0x11e7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7bc) {
            ctx->pc = 0x11E7CCu;
            return;
        }
    }
    ctx->pc = 0x11E7C4u;
    // 0x11e7c4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x11E7C4u;
    {
        const bool branch_taken_0x11e7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e7c4) {
            ctx->pc = 0x11E8C8u;
            return;
        }
    }
    ctx->pc = 0x11E7CCu;
}
