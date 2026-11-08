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

// Function: entry_00160ba8
// Address: 0x160ba8 - 0x160bc4
void entry_00160ba8_0x160ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160ba8_0x160ba8");
#endif

    ctx->pc = 0x160ba8u;

    // 0x160ba8: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x160ba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160bac: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x160BACu;
    {
        const bool branch_taken_0x160bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BACu;
        // 0x160bb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bac) {
            ctx->pc = 0x160CF8u;
            return;
        }
    }
    ctx->pc = 0x160BB4u;
    // 0x160bb4: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x160bb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x160bb8: 0x1420003e  bnez        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x160BB8u;
    {
        const bool branch_taken_0x160bb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BB8u;
        // 0x160bbc: 0x2684fff8  addiu       $a0, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bb8) {
            ctx->pc = 0x160CB4u;
            return;
        }
    }
    ctx->pc = 0x160BC0u;
    // 0x160bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160bc4u;
}
