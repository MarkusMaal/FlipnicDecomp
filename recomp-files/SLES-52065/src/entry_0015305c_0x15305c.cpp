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

// Function: entry_0015305c
// Address: 0x15305c - 0x153070
void entry_0015305c_0x15305c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015305c_0x15305c");
#endif

    ctx->pc = 0x15305cu;

    // 0x15305c: 0x0  nop
    ctx->pc = 0x15305cu;
    // NOP
    // 0x153060: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x153064: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x153064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x153068: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x153068u;
    {
        const bool branch_taken_0x153068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153068u;
        // 0x15306c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153068) {
            ctx->pc = 0x152F98u;
            return;
        }
    }
    ctx->pc = 0x153070u;
}
