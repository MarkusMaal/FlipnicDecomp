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

// Function: entry_0012ee18
// Address: 0x12ee18 - 0x12ee34
void entry_0012ee18_0x12ee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ee18_0x12ee18");
#endif

    switch (ctx->pc) {
        case 0x12ee20u: goto label_12ee20;
        case 0x12ee28u: goto label_12ee28;
        case 0x12ee30u: goto label_12ee30;
        default: break;
    }

    ctx->pc = 0x12ee18u;

    // 0x12ee18: 0xc04bba0  jal         func_12EE80
    ctx->pc = 0x12EE18u;
    SET_GPR_U32(ctx, 31, 0x12EE20u);
    ctx->pc = 0x12EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE80u, 0x12EE18u, 0x12EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE20u;
label_12ee20:
    // 0x12ee20: 0xc04bb9c  jal         func_12EE70
    ctx->pc = 0x12EE20u;
    SET_GPR_U32(ctx, 31, 0x12EE28u);
    ctx->pc = 0x12EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE20u;
    // 0x12ee24: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE70u, 0x12EE20u, 0x12EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE28u;
label_12ee28:
    // 0x12ee28: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EE28u;
    SET_GPR_U32(ctx, 31, 0x12EE30u);
    ctx->pc = 0x12EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE28u;
    // 0x12ee2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EE28u, 0x12EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE30u;
label_12ee30:
    // 0x12ee30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12ee34u;
}
