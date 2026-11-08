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

// Function: entry_00202630
// Address: 0x202630 - 0x202644
void entry_00202630_0x202630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202630_0x202630");
#endif

    ctx->pc = 0x202630u;

    // 0x202630: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x202630u;
    {
        const bool branch_taken_0x202630 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x202634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202630u;
        // 0x202634: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202630) {
            ctx->pc = 0x202644u;
            return;
        }
    }
    ctx->pc = 0x202638u;
    // 0x202638: 0x2aa280b  movn        $a1, $s5, $t2
    ctx->pc = 0x202638u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x20263c: 0x100002ab  b           . + 4 + (0x2AB << 2)
    ctx->pc = 0x20263Cu;
    {
        const bool branch_taken_0x20263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20263Cu;
        // 0x202640: 0xa8a80a  movz        $s5, $a1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20263c) {
            ctx->pc = 0x2030ECu;
            return;
        }
    }
    ctx->pc = 0x202644u;
}
