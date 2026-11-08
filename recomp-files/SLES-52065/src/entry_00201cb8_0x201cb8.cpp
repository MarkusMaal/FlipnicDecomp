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

// Function: entry_00201cb8
// Address: 0x201cb8 - 0x201cd0
void entry_00201cb8_0x201cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201cb8_0x201cb8");
#endif

    ctx->pc = 0x201cb8u;

    // 0x201cb8: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x201cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x201cbc: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x201cbcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x201cc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201cc4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x201cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x201cc8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x201CC8u;
    {
        const bool branch_taken_0x201cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CC8u;
        // 0x201ccc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cc8) {
            ctx->pc = 0x201CF4u;
            return;
        }
    }
    ctx->pc = 0x201CD0u;
}
