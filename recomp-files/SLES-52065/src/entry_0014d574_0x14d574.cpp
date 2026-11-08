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

// Function: entry_0014d574
// Address: 0x14d574 - 0x14d5a8
void entry_0014d574_0x14d574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d574_0x14d574");
#endif

    ctx->pc = 0x14d574u;

    // 0x14d574: 0x0  nop
    ctx->pc = 0x14d574u;
    // NOP
    // 0x14d578: 0x2f32023  subu        $a0, $s7, $s3
    ctx->pc = 0x14d578u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x14d57c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14d580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14d580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d584: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x14d584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d588: 0x2c41823  subu        $v1, $s6, $a0
    ctx->pc = 0x14d588u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x14d58c: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x14d58cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14d590: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D590u;
    {
        const bool branch_taken_0x14d590 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D590u;
        // 0x14d594: 0x2848021  addu        $s0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d590) {
            ctx->pc = 0x14D5ACu;
            return;
        }
    }
    ctx->pc = 0x14D598u;
    // 0x14d598: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x14d598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x14d59c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14D59Cu;
    {
        const bool branch_taken_0x14d59c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d59c) {
            ctx->pc = 0x14D5A8u;
            return;
        }
    }
    ctx->pc = 0x14D5A4u;
    // 0x14d5a4: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x14d5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    ctx->pc = 0x14d5a8u;
}
