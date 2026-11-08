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

// Function: entry_001b68f4
// Address: 0x1b68f4 - 0x1b6910
void entry_001b68f4_0x1b68f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b68f4_0x1b68f4");
#endif

    ctx->pc = 0x1b68f4u;

    // 0x1b68f4: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1b68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1b68f8: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x1b68f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1b68fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B68FCu;
    {
        const bool branch_taken_0x1b68fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b68fc) {
            ctx->pc = 0x1B6910u;
            return;
        }
    }
    ctx->pc = 0x1B6904u;
    // 0x1b6904: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1b6904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6908: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6908u;
    {
        const bool branch_taken_0x1b6908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6908u;
        // 0x1b690c: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6908) {
            ctx->pc = 0x1B6918u;
            return;
        }
    }
    ctx->pc = 0x1B6910u;
}
