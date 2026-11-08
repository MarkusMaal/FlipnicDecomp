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

// Function: entry_001cc408
// Address: 0x1cc408 - 0x1cc458
void entry_001cc408_0x1cc408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc408_0x1cc408");
#endif

    switch (ctx->pc) {
        case 0x1cc428u: goto label_1cc428;
        case 0x1cc434u: goto label_1cc434;
        case 0x1cc43cu: goto label_1cc43c;
        case 0x1cc448u: goto label_1cc448;
        default: break;
    }

    ctx->pc = 0x1cc408u;

label_1cc408:
    // 0x1cc408: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cc408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cc40c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1cc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1cc410: 0x26680001  addiu       $t0, $s3, 0x1
    ctx->pc = 0x1cc410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cc414: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x1cc414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1cc418: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cc418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cc41c: 0x24a529e0  addiu       $a1, $a1, 0x29E0
    ctx->pc = 0x1cc41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
    // 0x1cc420: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1CC420u;
    SET_GPR_U32(ctx, 31, 0x1CC428u);
    ctx->pc = 0x1CC424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC420u;
    // 0x1cc424: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1CC420u, 0x1CC428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC428u;
label_1cc428:
    // 0x1cc428: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cc428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42c: 0xc0714e8  jal         func_1C53A0
    ctx->pc = 0x1CC42Cu;
    SET_GPR_U32(ctx, 31, 0x1CC434u);
    ctx->pc = 0x1CC430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC42Cu;
    // 0x1cc430: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53A0u, 0x1CC42Cu, 0x1CC434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC434u;
label_1cc434:
    // 0x1cc434: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x1CC434u;
    SET_GPR_U32(ctx, 31, 0x1CC43Cu);
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x1CC434u, 0x1CC43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC43Cu;
label_1cc43c:
    // 0x1cc43c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc440: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1CC440u;
    SET_GPR_U32(ctx, 31, 0x1CC448u);
    ctx->pc = 0x1CC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC440u;
    // 0x1cc444: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1CC440u, 0x1CC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC448u;
label_1cc448:
    // 0x1cc448: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cc448u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cc44c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x1cc44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1cc450: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CC450u;
    {
        const bool branch_taken_0x1cc450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC450u;
        // 0x1cc454: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc450) {
            ctx->pc = 0x1CC408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc408;
        }
    }
    ctx->pc = 0x1CC458u;
}
