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

// Function: entry_0018741c
// Address: 0x18741c - 0x187468
void entry_0018741c_0x18741c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018741c_0x18741c");
#endif

    switch (ctx->pc) {
        case 0x187438u: goto label_187438;
        case 0x18744cu: goto label_18744c;
        case 0x187460u: goto label_187460;
        default: break;
    }

    ctx->pc = 0x18741cu;

    // 0x18741c: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x18741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x187420: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x187420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x187424: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x187424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x187428: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x187428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x18742c: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x18742cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x187430: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x187430u;
    SET_GPR_U32(ctx, 31, 0x187438u);
    ctx->pc = 0x187434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187430u;
    // 0x187434: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x187430u, 0x187438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187438u;
label_187438:
    // 0x187438: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x187438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x18743c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18743cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187440: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x187440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x187444: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x187444u;
    SET_GPR_U32(ctx, 31, 0x18744Cu);
    ctx->pc = 0x187448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187444u;
    // 0x187448: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x187444u, 0x18744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18744Cu;
label_18744c:
    // 0x18744c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x18744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x187450: 0x27a40154  addiu       $a0, $sp, 0x154
    ctx->pc = 0x187450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x187454: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x187458: 0xc048974  jal         func_1225D0
    ctx->pc = 0x187458u;
    SET_GPR_U32(ctx, 31, 0x187460u);
    ctx->pc = 0x18745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187458u;
    // 0x18745c: 0xafa20178  sw          $v0, 0x178($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x187458u, 0x187460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187460u;
label_187460:
    // 0x187460: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x187460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x187464: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x187464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    ctx->pc = 0x187468u;
}
