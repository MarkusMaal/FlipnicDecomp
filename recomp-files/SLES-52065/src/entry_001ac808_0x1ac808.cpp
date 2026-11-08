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

// Function: entry_001ac808
// Address: 0x1ac808 - 0x1ac840
void entry_001ac808_0x1ac808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac808_0x1ac808");
#endif

    switch (ctx->pc) {
        case 0x1ac810u: goto label_1ac810;
        case 0x1ac820u: goto label_1ac820;
        case 0x1ac828u: goto label_1ac828;
        case 0x1ac838u: goto label_1ac838;
        default: break;
    }

    ctx->pc = 0x1ac808u;

    // 0x1ac808: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AC808u;
    SET_GPR_U32(ctx, 31, 0x1AC810u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AC808u, 0x1AC810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC810u;
label_1ac810:
    // 0x1ac810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac814: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x1ac814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x1ac818: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AC818u;
    SET_GPR_U32(ctx, 31, 0x1AC820u);
    ctx->pc = 0x1AC81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC818u;
    // 0x1ac81c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AC818u, 0x1AC820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC820u;
label_1ac820:
    // 0x1ac820: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AC820u;
    SET_GPR_U32(ctx, 31, 0x1AC828u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AC820u, 0x1AC828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC828u;
label_1ac828:
    // 0x1ac828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac82c: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1ac82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1ac830: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AC830u;
    SET_GPR_U32(ctx, 31, 0x1AC838u);
    ctx->pc = 0x1AC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC830u;
    // 0x1ac834: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AC830u, 0x1AC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC838u;
label_1ac838:
    // 0x1ac838: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AC838u;
    SET_GPR_U32(ctx, 31, 0x1AC840u);
    ctx->pc = 0x1AC83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC838u;
    // 0x1ac83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC838u, 0x1AC840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC840u;
}
