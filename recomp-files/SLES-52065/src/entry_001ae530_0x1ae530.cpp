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

// Function: entry_001ae530
// Address: 0x1ae530 - 0x1ae564
void entry_001ae530_0x1ae530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae530_0x1ae530");
#endif

    switch (ctx->pc) {
        case 0x1ae558u: goto label_1ae558;
        default: break;
    }

    ctx->pc = 0x1ae530u;

    // 0x1ae530: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x1ae530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x1ae534: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1ae534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1ae538: 0x24080049  addiu       $t0, $zero, 0x49
    ctx->pc = 0x1ae538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1ae53c: 0x24440670  addiu       $a0, $v0, 0x670
    ctx->pc = 0x1ae53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    // 0x1ae540: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ae540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ae544: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1ae544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1ae548: 0x26070005  addiu       $a3, $s0, 0x5
    ctx->pc = 0x1ae548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x1ae54c: 0x56400a  movz        $t0, $v0, $s6
    ctx->pc = 0x1ae54cu;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x1ae550: 0xc06bbc4  jal         func_1AEF10
    ctx->pc = 0x1AE550u;
    SET_GPR_U32(ctx, 31, 0x1AE558u);
    ctx->pc = 0x1AE554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE550u;
    // 0x1ae554: 0x24650028  addiu       $a1, $v1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF10u, 0x1AE550u, 0x1AE558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE558u;
label_1ae558:
    // 0x1ae558: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x1ae558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1ae55c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE55Cu;
    {
        const bool branch_taken_0x1ae55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE55Cu;
        // 0x1ae560: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae55c) {
            ctx->pc = 0x1AE578u;
            return;
        }
    }
    ctx->pc = 0x1AE564u;
}
