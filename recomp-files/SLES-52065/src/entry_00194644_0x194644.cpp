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

// Function: entry_00194644
// Address: 0x194644 - 0x194678
void entry_00194644_0x194644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194644_0x194644");
#endif

    switch (ctx->pc) {
        case 0x194650u: goto label_194650;
        default: break;
    }

    ctx->pc = 0x194644u;

    // 0x194644: 0x0  nop
    ctx->pc = 0x194644u;
    // NOP
    // 0x194648: 0xc0645ac  jal         func_1916B0
    ctx->pc = 0x194648u;
    SET_GPR_U32(ctx, 31, 0x194650u);
    ctx->pc = 0x19464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194648u;
    // 0x19464c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1916B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1916B0u, 0x194648u, 0x194650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194650u;
label_194650:
    // 0x194650: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x194650u;
    {
        const bool branch_taken_0x194650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194650) {
            ctx->pc = 0x1946C0u;
            return;
        }
    }
    ctx->pc = 0x194658u;
    // 0x194658: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x194658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
    // 0x19465c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19465cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194660: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x194660u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
    // 0x194664: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x194664u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
    // 0x194668: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x194668u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
    // 0x19466c: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x19466cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
    // 0x194670: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x194670u;
    {
        const bool branch_taken_0x194670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194670u;
        // 0x194674: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194670) {
            ctx->pc = 0x1946A8u;
            return;
        }
    }
    ctx->pc = 0x194678u;
}
