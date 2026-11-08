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

// Function: entry_001346e0
// Address: 0x1346e0 - 0x134700
void entry_001346e0_0x1346e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001346e0_0x1346e0");
#endif

    switch (ctx->pc) {
        case 0x1346f0u: goto label_1346f0;
        default: break;
    }

    ctx->pc = 0x1346e0u;

    // 0x1346e0: 0xae4200a8  sw          $v0, 0xA8($s2)
    ctx->pc = 0x1346e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
    // 0x1346e4: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x1346e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x1346e8: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x1346E8u;
    SET_GPR_U32(ctx, 31, 0x1346F0u);
    ctx->pc = 0x1346ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346E8u;
    // 0x1346ec: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x1346E8u, 0x1346F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346F0u;
label_1346f0:
    // 0x1346f0: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1346f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1346f4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1346f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1346f8: 0xc04f344  jal         func_13CD10
    ctx->pc = 0x1346F8u;
    SET_GPR_U32(ctx, 31, 0x134700u);
    ctx->pc = 0x1346FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346F8u;
    // 0x1346fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CD10u, 0x1346F8u, 0x134700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134700u;
}
