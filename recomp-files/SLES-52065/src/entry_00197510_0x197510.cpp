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

// Function: entry_00197510
// Address: 0x197510 - 0x197528
void entry_00197510_0x197510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197510_0x197510");
#endif

    ctx->pc = 0x197510u;

    // 0x197510: 0x8ea206a4  lw          $v0, 0x6A4($s5)
    ctx->pc = 0x197510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
    // 0x197514: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x197514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197518: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x197518u;
    {
        const bool branch_taken_0x197518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197518u;
        // 0x19751c: 0x2b09021  addu        $s2, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197518) {
            ctx->pc = 0x1973B8u;
            return;
        }
    }
    ctx->pc = 0x197520u;
    // 0x197520: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x197520u;
    {
        const bool branch_taken_0x197520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197520) {
            ctx->pc = 0x197660u;
            return;
        }
    }
    ctx->pc = 0x197528u;
}
