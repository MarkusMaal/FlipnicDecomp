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

// Function: FUN_001f45e8
// Address: 0x1f45e8 - 0x1f4624
void FUN_001f45e8_0x1f45e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f45e8_0x1f45e8");
#endif

    switch (ctx->pc) {
        case 0x1f45f8u: goto label_1f45f8;
        case 0x1f4600u: goto label_1f4600;
        case 0x1f4608u: goto label_1f4608;
        case 0x1f4610u: goto label_1f4610;
        case 0x1f4618u: goto label_1f4618;
        default: break;
    }

    ctx->pc = 0x1f45e8u;

    // 0x1f45e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f45e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f45ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f45ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f45f0: 0xc07d0f0  jal         func_1F43C0
    ctx->pc = 0x1F45F0u;
    SET_GPR_U32(ctx, 31, 0x1F45F8u);
    ctx->pc = 0x1F43C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43C0u, 0x1F45F0u, 0x1F45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F45F8u;
label_1f45f8:
    // 0x1f45f8: 0xc07d136  jal         func_1F44D8
    ctx->pc = 0x1F45F8u;
    SET_GPR_U32(ctx, 31, 0x1F4600u);
    ctx->pc = 0x1F44D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F44D8u, 0x1F45F8u, 0x1F4600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4600u;
label_1f4600:
    // 0x1f4600: 0xc07d2ac  jal         func_1F4AB0
    ctx->pc = 0x1F4600u;
    SET_GPR_U32(ctx, 31, 0x1F4608u);
    ctx->pc = 0x1F4AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4AB0u, 0x1F4600u, 0x1F4608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4608u;
label_1f4608:
    // 0x1f4608: 0xc07b0fe  jal         func_1EC3F8
    ctx->pc = 0x1F4608u;
    SET_GPR_U32(ctx, 31, 0x1F4610u);
    ctx->pc = 0x1EC3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC3F8u, 0x1F4608u, 0x1F4610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4610u;
label_1f4610:
    // 0x1f4610: 0xc07d1be  jal         func_1F46F8
    ctx->pc = 0x1F4610u;
    SET_GPR_U32(ctx, 31, 0x1F4618u);
    ctx->pc = 0x1F46F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F46F8u, 0x1F4610u, 0x1F4618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4618u;
label_1f4618:
    // 0x1f4618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f461c: 0x807cf0a  j           func_1F3C28
    ctx->pc = 0x1F461Cu;
    ctx->pc = 0x1F4620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F461Cu;
    // 0x1f4620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3C28u;
    FUN_001f3c28_0x1f3c28(rdram, ctx, runtime); return;
    ctx->pc = 0x1F4624u;
}
