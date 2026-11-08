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

// Function: entry_0010cff0
// Address: 0x10cff0 - 0x10d018
void entry_0010cff0_0x10cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cff0_0x10cff0");
#endif

    switch (ctx->pc) {
        case 0x10d00cu: goto label_10d00c;
        case 0x10d014u: goto label_10d014;
        default: break;
    }

    ctx->pc = 0x10cff0u;

    // 0x10cff0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x10cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x10cff4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10cff8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10cffc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10d000: 0x24520280  addiu       $s2, $v0, 0x280
    ctx->pc = 0x10d000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x10d004: 0xc05eb40  jal         func_17AD00
    ctx->pc = 0x10D004u;
    SET_GPR_U32(ctx, 31, 0x10D00Cu);
    ctx->pc = 0x10D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D004u;
    // 0x10d008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD00u, 0x10D004u, 0x10D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D00Cu;
label_10d00c:
    // 0x10d00c: 0xc05eb80  jal         func_17AE00
    ctx->pc = 0x10D00Cu;
    SET_GPR_U32(ctx, 31, 0x10D014u);
    ctx->pc = 0x10D010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D00Cu;
    // 0x10d010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AE00u, 0x10D00Cu, 0x10D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D014u;
label_10d014:
    // 0x10d014: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10d014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x10d018u;
}
