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

// Function: entry_0010bbb4
// Address: 0x10bbb4 - 0x10bbdc
void entry_0010bbb4_0x10bbb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bbb4_0x10bbb4");
#endif

    switch (ctx->pc) {
        case 0x10bbd0u: goto label_10bbd0;
        case 0x10bbd8u: goto label_10bbd8;
        default: break;
    }

    ctx->pc = 0x10bbb4u;

    // 0x10bbb4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x10bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x10bbb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10bbbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10bbc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10bbc4: 0x24520280  addiu       $s2, $v0, 0x280
    ctx->pc = 0x10bbc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x10bbc8: 0xc05eb40  jal         func_17AD00
    ctx->pc = 0x10BBC8u;
    SET_GPR_U32(ctx, 31, 0x10BBD0u);
    ctx->pc = 0x10BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BBC8u;
    // 0x10bbcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD00u, 0x10BBC8u, 0x10BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BBD0u;
label_10bbd0:
    // 0x10bbd0: 0xc05eb80  jal         func_17AE00
    ctx->pc = 0x10BBD0u;
    SET_GPR_U32(ctx, 31, 0x10BBD8u);
    ctx->pc = 0x10BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BBD0u;
    // 0x10bbd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AE00u, 0x10BBD0u, 0x10BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BBD8u;
label_10bbd8:
    // 0x10bbd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10bbd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x10bbdcu;
}
