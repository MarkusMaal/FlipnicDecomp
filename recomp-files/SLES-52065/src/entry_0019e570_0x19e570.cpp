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

// Function: entry_0019e570
// Address: 0x19e570 - 0x19e5a8
void entry_0019e570_0x19e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e570_0x19e570");
#endif

    switch (ctx->pc) {
        case 0x19e598u: goto label_19e598;
        default: break;
    }

    ctx->pc = 0x19e570u;

    // 0x19e570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e574: 0x8e820974  lw          $v0, 0x974($s4)
    ctx->pc = 0x19e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2420)));
    // 0x19e578: 0x268b0974  addiu       $t3, $s4, 0x974
    ctx->pc = 0x19e578u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 2420));
    // 0x19e57c: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x19e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x19e580: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x19e580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19e584: 0x8c470030  lw          $a3, 0x30($v0)
    ctx->pc = 0x19e584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19e588: 0x8c480034  lw          $t0, 0x34($v0)
    ctx->pc = 0x19e588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19e58c: 0x8c490038  lw          $t1, 0x38($v0)
    ctx->pc = 0x19e58cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x19e590: 0xc064d10  jal         func_193440
    ctx->pc = 0x19E590u;
    SET_GPR_U32(ctx, 31, 0x19E598u);
    ctx->pc = 0x19E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E590u;
    // 0x19e594: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x19E590u, 0x19E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E598u;
label_19e598:
    // 0x19e598: 0xae800774  sw          $zero, 0x774($s4)
    ctx->pc = 0x19e598u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1908), GPR_U32(ctx, 0));
    // 0x19e59c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x19e59cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x19e5a0: 0xae800874  sw          $zero, 0x874($s4)
    ctx->pc = 0x19e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2164), GPR_U32(ctx, 0));
    // 0x19e5a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x19e5a8u;
}
