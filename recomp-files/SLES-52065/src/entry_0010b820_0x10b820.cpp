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

// Function: entry_0010b820
// Address: 0x10b820 - 0x10b848
void entry_0010b820_0x10b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b820_0x10b820");
#endif

    switch (ctx->pc) {
        case 0x10b83cu: goto label_10b83c;
        case 0x10b844u: goto label_10b844;
        default: break;
    }

    ctx->pc = 0x10b820u;

    // 0x10b820: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x10b820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x10b824: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10b824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10b828: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10b828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10b82c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b830: 0x24522340  addiu       $s2, $v0, 0x2340
    ctx->pc = 0x10b830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 9024));
    // 0x10b834: 0xc05eb40  jal         func_17AD00
    ctx->pc = 0x10B834u;
    SET_GPR_U32(ctx, 31, 0x10B83Cu);
    ctx->pc = 0x10B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B834u;
    // 0x10b838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD00u, 0x10B834u, 0x10B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B83Cu;
label_10b83c:
    // 0x10b83c: 0xc05eb80  jal         func_17AE00
    ctx->pc = 0x10B83Cu;
    SET_GPR_U32(ctx, 31, 0x10B844u);
    ctx->pc = 0x10B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B83Cu;
    // 0x10b840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AE00u, 0x10B83Cu, 0x10B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B844u;
label_10b844:
    // 0x10b844: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10b844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x10b848u;
}
