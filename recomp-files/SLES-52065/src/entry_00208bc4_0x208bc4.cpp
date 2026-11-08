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

// Function: entry_00208bc4
// Address: 0x208bc4 - 0x208bdc
void entry_00208bc4_0x208bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208bc4_0x208bc4");
#endif

    ctx->pc = 0x208bc4u;

    // 0x208bc4: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x208bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x208bc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208BC8u;
    {
        const bool branch_taken_0x208bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BC8u;
        // 0x208bcc: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bc8) {
            ctx->pc = 0x208BDCu;
            return;
        }
    }
    ctx->pc = 0x208BD0u;
    // 0x208bd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x208bd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208bd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x208BD4u;
    {
        const bool branch_taken_0x208bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BD4u;
        // 0x208bd8: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bd4) {
            ctx->pc = 0x208BE8u;
            return;
        }
    }
    ctx->pc = 0x208BDCu;
}
