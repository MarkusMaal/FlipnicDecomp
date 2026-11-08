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

// Function: entry_00199060
// Address: 0x199060 - 0x19909c
void entry_00199060_0x199060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199060_0x199060");
#endif

    switch (ctx->pc) {
        case 0x199088u: goto label_199088;
        case 0x199090u: goto label_199090;
        default: break;
    }

    ctx->pc = 0x199060u;

    // 0x199060: 0x8e850670  lw          $a1, 0x670($s4)
    ctx->pc = 0x199060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x199064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199068: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x199068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19906c: 0xac6528e8  sw          $a1, 0x28E8($v1)
    ctx->pc = 0x19906cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10472), GPR_U32(ctx, 5));
    // 0x199070: 0xae820674  sw          $v0, 0x674($s4)
    ctx->pc = 0x199070u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 2));
    // 0x199074: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x199074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x199078: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x199078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19907c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x19907cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x199080: 0xc064a9c  jal         func_192A70
    ctx->pc = 0x199080u;
    SET_GPR_U32(ctx, 31, 0x199088u);
    ctx->pc = 0x199084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199080u;
    // 0x199084: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A70u, 0x199080u, 0x199088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199088u;
label_199088:
    // 0x199088: 0xc063e14  jal         func_18F850
    ctx->pc = 0x199088u;
    SET_GPR_U32(ctx, 31, 0x199090u);
    ctx->pc = 0x19908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199088u;
    // 0x19908c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x199088u, 0x199090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199090u;
label_199090:
    // 0x199090: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x199090u;
    {
        const bool branch_taken_0x199090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199090) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x199098u;
    // 0x199098: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x199098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19909cu;
}
