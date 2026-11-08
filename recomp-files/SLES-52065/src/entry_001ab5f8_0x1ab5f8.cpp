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

// Function: entry_001ab5f8
// Address: 0x1ab5f8 - 0x1ab630
void entry_001ab5f8_0x1ab5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab5f8_0x1ab5f8");
#endif

    switch (ctx->pc) {
        case 0x1ab600u: goto label_1ab600;
        case 0x1ab610u: goto label_1ab610;
        case 0x1ab618u: goto label_1ab618;
        case 0x1ab628u: goto label_1ab628;
        default: break;
    }

    ctx->pc = 0x1ab5f8u;

    // 0x1ab5f8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AB5F8u;
    SET_GPR_U32(ctx, 31, 0x1AB600u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AB5F8u, 0x1AB600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB600u;
label_1ab600:
    // 0x1ab600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab604: 0x240500c5  addiu       $a1, $zero, 0xC5
    ctx->pc = 0x1ab604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    // 0x1ab608: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AB608u;
    SET_GPR_U32(ctx, 31, 0x1AB610u);
    ctx->pc = 0x1AB60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB608u;
    // 0x1ab60c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AB608u, 0x1AB610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB610u;
label_1ab610:
    // 0x1ab610: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AB610u;
    SET_GPR_U32(ctx, 31, 0x1AB618u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AB610u, 0x1AB618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB618u;
label_1ab618:
    // 0x1ab618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab61c: 0x240500c3  addiu       $a1, $zero, 0xC3
    ctx->pc = 0x1ab61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    // 0x1ab620: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AB620u;
    SET_GPR_U32(ctx, 31, 0x1AB628u);
    ctx->pc = 0x1AB624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB620u;
    // 0x1ab624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AB620u, 0x1AB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB628u;
label_1ab628:
    // 0x1ab628: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AB628u;
    SET_GPR_U32(ctx, 31, 0x1AB630u);
    ctx->pc = 0x1AB62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB628u;
    // 0x1ab62c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB628u, 0x1AB630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB630u;
}
