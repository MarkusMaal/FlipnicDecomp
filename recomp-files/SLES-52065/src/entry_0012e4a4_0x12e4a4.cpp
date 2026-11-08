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

// Function: entry_0012e4a4
// Address: 0x12e4a4 - 0x12e4c0
void entry_0012e4a4_0x12e4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e4a4_0x12e4a4");
#endif

    ctx->pc = 0x12e4a4u;

    // 0x12e4a4: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x12e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x12e4a8: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x12e4a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12e4ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E4ACu;
    {
        const bool branch_taken_0x12e4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e4ac) {
            ctx->pc = 0x12E4C0u;
            return;
        }
    }
    ctx->pc = 0x12E4B4u;
    // 0x12e4b4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x12e4b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E4B8u;
    {
        const bool branch_taken_0x12e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4B8u;
        // 0x12e4bc: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4b8) {
            ctx->pc = 0x12E4C8u;
            return;
        }
    }
    ctx->pc = 0x12E4C0u;
}
