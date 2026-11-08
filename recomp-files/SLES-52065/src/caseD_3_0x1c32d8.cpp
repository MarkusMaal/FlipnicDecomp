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

// Function: caseD_3
// Address: 0x1c32d8 - 0x1c32fc
void caseD_3_0x1c32d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1c32d8");
#endif

    switch (ctx->pc) {
        case 0x1c32f0u: goto label_1c32f0;
        default: break;
    }

    ctx->pc = 0x1c32d8u;

    // 0x1c32d8: 0x92020264  lbu         $v0, 0x264($s0)
    ctx->pc = 0x1c32d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c32dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C32DCu;
    {
        const bool branch_taken_0x1c32dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32DCu;
        // 0x1c32e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32dc) {
            ctx->pc = 0x1C32FCu;
            return;
        }
    }
    ctx->pc = 0x1C32E4u;
    // 0x1c32e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c32e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32e8: 0xc071160  jal         func_1C4580
    ctx->pc = 0x1C32E8u;
    SET_GPR_U32(ctx, 31, 0x1C32F0u);
    ctx->pc = 0x1C32ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32E8u;
    // 0x1c32ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4580u, 0x1C32E8u, 0x1C32F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32F0u;
label_1c32f0:
    // 0x1c32f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c32f4: 0xa2020264  sb          $v0, 0x264($s0)
    ctx->pc = 0x1c32f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 612), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c32f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c32f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c32fcu;
}
