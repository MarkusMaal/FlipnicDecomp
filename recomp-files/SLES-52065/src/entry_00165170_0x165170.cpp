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

// Function: entry_00165170
// Address: 0x165170 - 0x16519c
void entry_00165170_0x165170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165170_0x165170");
#endif

    ctx->pc = 0x165170u;

    // 0x165170: 0x86830218  lh          $v1, 0x218($s4)
    ctx->pc = 0x165170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x165174: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x165174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x165178: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x165178u;
    {
        const bool branch_taken_0x165178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165178u;
        // 0x16517c: 0x2861000d  slti        $at, $v1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165178) {
            ctx->pc = 0x16519Cu;
            return;
        }
    }
    ctx->pc = 0x165180u;
    // 0x165180: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x165180u;
    {
        const bool branch_taken_0x165180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x165180) {
            ctx->pc = 0x16519Cu;
            return;
        }
    }
    ctx->pc = 0x165188u;
    // 0x165188: 0x8e630350  lw          $v1, 0x350($s3)
    ctx->pc = 0x165188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
    // 0x16518c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165190: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x165190u;
    {
        const bool branch_taken_0x165190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x165194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165190u;
        // 0x165194: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165190) {
            ctx->pc = 0x16519Cu;
            return;
        }
    }
    ctx->pc = 0x165198u;
    // 0x165198: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x165198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x16519cu;
}
