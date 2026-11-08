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

// Function: entry_001bb480
// Address: 0x1bb480 - 0x1bb49c
void entry_001bb480_0x1bb480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb480_0x1bb480");
#endif

    ctx->pc = 0x1bb480u;

    // 0x1bb480: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1bb480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bb484: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1bb484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bb488: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB488u;
    {
        const bool branch_taken_0x1bb488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB488u;
        // 0x1bb48c: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb488) {
            ctx->pc = 0x1BB49Cu;
            return;
        }
    }
    ctx->pc = 0x1BB490u;
    // 0x1bb490: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1bb490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bb494: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB494u;
    {
        const bool branch_taken_0x1bb494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB494u;
        // 0x1bb498: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb494) {
            ctx->pc = 0x1BB4ACu;
            return;
        }
    }
    ctx->pc = 0x1BB49Cu;
}
