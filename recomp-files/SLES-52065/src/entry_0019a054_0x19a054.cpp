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

// Function: entry_0019a054
// Address: 0x19a054 - 0x19a074
void entry_0019a054_0x19a054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a054_0x19a054");
#endif

    ctx->pc = 0x19a054u;

    // 0x19a054: 0x8c850328  lw          $a1, 0x328($a0)
    ctx->pc = 0x19a054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x19a058: 0x8c830670  lw          $v1, 0x670($a0)
    ctx->pc = 0x19a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x19a05c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x19a05cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a060: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x19A060u;
    {
        const bool branch_taken_0x19a060 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a060) {
            ctx->pc = 0x19A09Cu;
            return;
        }
    }
    ctx->pc = 0x19A068u;
    // 0x19a068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a06c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A06Cu;
    {
        const bool branch_taken_0x19a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A06Cu;
        // 0x19a070: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a06c) {
            ctx->pc = 0x19A080u;
            return;
        }
    }
    ctx->pc = 0x19A074u;
}
