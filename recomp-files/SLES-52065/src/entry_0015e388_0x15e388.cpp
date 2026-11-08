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

// Function: entry_0015e388
// Address: 0x15e388 - 0x15e3b0
void entry_0015e388_0x15e388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e388_0x15e388");
#endif

    ctx->pc = 0x15e388u;

    // 0x15e388: 0x8483022a  lh          $v1, 0x22A($a0)
    ctx->pc = 0x15e388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 554)));
    // 0x15e38c: 0x2861ffff  slti        $at, $v1, -0x1
    ctx->pc = 0x15e38cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x15e390: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x15E390u;
    {
        const bool branch_taken_0x15e390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E390u;
        // 0x15e394: 0x2486022a  addiu       $a2, $a0, 0x22A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 554));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e390) {
            ctx->pc = 0x15E418u;
            return;
        }
    }
    ctx->pc = 0x15E398u;
    // 0x15e398: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x15e398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x15e39c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E39Cu;
    {
        const bool branch_taken_0x15e39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E39Cu;
        // 0x15e3a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e39c) {
            ctx->pc = 0x15E3B0u;
            return;
        }
    }
    ctx->pc = 0x15E3A4u;
    // 0x15e3a4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x15e3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e3a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15E3A8u;
    {
        const bool branch_taken_0x15e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3A8u;
        // 0x15e3ac: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3a8) {
            ctx->pc = 0x15E3B8u;
            return;
        }
    }
    ctx->pc = 0x15E3B0u;
}
