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

// Function: entry_002030b4
// Address: 0x2030b4 - 0x2030ec
void entry_002030b4_0x2030b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002030b4_0x2030b4");
#endif

    switch (ctx->pc) {
        case 0x2030bcu: goto label_2030bc;
        case 0x2030c8u: goto label_2030c8;
        case 0x2030d4u: goto label_2030d4;
        case 0x2030e0u: goto label_2030e0;
        default: break;
    }

    ctx->pc = 0x2030b4u;

    // 0x2030b4: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x2030B4u;
    SET_GPR_U32(ctx, 31, 0x2030BCu);
    ctx->pc = 0x2030B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030B4u;
    // 0x2030b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x2030B4u, 0x2030BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030BCu;
label_2030bc:
    // 0x2030bc: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x2030bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2030c0: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x2030C0u;
    SET_GPR_U32(ctx, 31, 0x2030C8u);
    ctx->pc = 0x2030C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030C0u;
    // 0x2030c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x2030C0u, 0x2030C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030C8u;
label_2030c8:
    // 0x2030c8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2030c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2030cc: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x2030CCu;
    SET_GPR_U32(ctx, 31, 0x2030D4u);
    ctx->pc = 0x2030D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030CCu;
    // 0x2030d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x2030CCu, 0x2030D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030D4u;
label_2030d4:
    // 0x2030d4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2030d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2030d8: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x2030D8u;
    SET_GPR_U32(ctx, 31, 0x2030E0u);
    ctx->pc = 0x2030DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030D8u;
    // 0x2030dc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x2030D8u, 0x2030E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030E0u;
label_2030e0:
    // 0x2030e0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2030e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2030e4: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x2030E4u;
    SET_GPR_U32(ctx, 31, 0x2030ECu);
    ctx->pc = 0x2030E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030E4u;
    // 0x2030e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x2030E4u, 0x2030ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030ECu;
}
