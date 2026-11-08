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

// Function: entry_001c30ac
// Address: 0x1c30ac - 0x1c30dc
void entry_001c30ac_0x1c30ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c30ac_0x1c30ac");
#endif

    switch (ctx->pc) {
        case 0x1c30d8u: goto label_1c30d8;
        default: break;
    }

    ctx->pc = 0x1c30acu;

    // 0x1c30ac: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C30ACu;
    {
        const bool branch_taken_0x1c30ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30ACu;
        // 0x1c30b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30ac) {
            ctx->pc = 0x1C30DCu;
            return;
        }
    }
    ctx->pc = 0x1C30B4u;
    // 0x1c30b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c30b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30b8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c30b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c30bc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c30bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c30c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c30c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c30c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c30c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c30c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30cc: 0x260a0068  addiu       $t2, $s0, 0x68
    ctx->pc = 0x1c30ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1c30d0: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C30D0u;
    SET_GPR_U32(ctx, 31, 0x1C30D8u);
    ctx->pc = 0x1C30D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30D0u;
    // 0x1c30d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C30D0u, 0x1C30D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30D8u;
label_1c30d8:
    // 0x1c30d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c30d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1c30dcu;
}
