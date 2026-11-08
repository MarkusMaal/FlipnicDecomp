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

// Function: entry_0011b960
// Address: 0x11b960 - 0x11b990
void entry_0011b960_0x11b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b960_0x11b960");
#endif

    switch (ctx->pc) {
        case 0x11b970u: goto label_11b970;
        case 0x11b984u: goto label_11b984;
        default: break;
    }

    ctx->pc = 0x11b960u;

    // 0x11b960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b968: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11B968u;
    SET_GPR_U32(ctx, 31, 0x11B970u);
    ctx->pc = 0x11B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B968u;
    // 0x11b96c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11B968u, 0x11B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B970u;
label_11b970:
    // 0x11b970: 0x26530040  addiu       $s3, $s2, 0x40
    ctx->pc = 0x11b970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x11b974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b978: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11b978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b97c: 0xc07bf80  jal         func_1EFE00
    ctx->pc = 0x11B97Cu;
    SET_GPR_U32(ctx, 31, 0x11B984u);
    ctx->pc = 0x11B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B97Cu;
    // 0x11b980: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE00u, 0x11B97Cu, 0x11B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B984u;
label_11b984:
    // 0x11b984: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x11b984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11b988: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x11B988u;
    {
        const bool branch_taken_0x11b988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b988) {
            ctx->pc = 0x11B9BCu;
            return;
        }
    }
    ctx->pc = 0x11B990u;
}
