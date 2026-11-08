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

// Function: entry_00136c58
// Address: 0x136c58 - 0x136c90
void entry_00136c58_0x136c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136c58_0x136c58");
#endif

    switch (ctx->pc) {
        case 0x136c60u: goto label_136c60;
        case 0x136c68u: goto label_136c68;
        case 0x136c74u: goto label_136c74;
        case 0x136c7cu: goto label_136c7c;
        case 0x136c8cu: goto label_136c8c;
        default: break;
    }

    ctx->pc = 0x136c58u;

    // 0x136c58: 0xc053c54  jal         func_14F150
    ctx->pc = 0x136C58u;
    SET_GPR_U32(ctx, 31, 0x136C60u);
    ctx->pc = 0x136C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C58u;
    // 0x136c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x136C58u, 0x136C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C60u;
label_136c60:
    // 0x136c60: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x136C60u;
    SET_GPR_U32(ctx, 31, 0x136C68u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x136C60u, 0x136C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C68u;
label_136c68:
    // 0x136c68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c6c: 0xc049e48  jal         func_127920
    ctx->pc = 0x136C6Cu;
    SET_GPR_U32(ctx, 31, 0x136C74u);
    ctx->pc = 0x136C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C6Cu;
    // 0x136c70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127920u, 0x136C6Cu, 0x136C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C74u;
label_136c74:
    // 0x136c74: 0xc061918  jal         func_186460
    ctx->pc = 0x136C74u;
    SET_GPR_U32(ctx, 31, 0x136C7Cu);
    ctx->pc = 0x186460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186460u, 0x136C74u, 0x136C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C7Cu;
label_136c7c:
    // 0x136c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c84: 0xc061968  jal         func_1865A0
    ctx->pc = 0x136C84u;
    SET_GPR_U32(ctx, 31, 0x136C8Cu);
    ctx->pc = 0x136C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C84u;
    // 0x136c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1865A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1865A0u, 0x136C84u, 0x136C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C8Cu;
label_136c8c:
    // 0x136c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136c90u;
}
