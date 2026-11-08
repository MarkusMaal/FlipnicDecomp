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

// Function: entry_00101968
// Address: 0x101968 - 0x1019d0
void entry_00101968_0x101968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101968_0x101968");
#endif

    switch (ctx->pc) {
        case 0x101978u: goto label_101978;
        case 0x101994u: goto label_101994;
        case 0x1019a0u: goto label_1019a0;
        case 0x1019b0u: goto label_1019b0;
        default: break;
    }

    ctx->pc = 0x101968u;

    // 0x101968: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x101968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x10196c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101970: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x101970u;
    SET_GPR_U32(ctx, 31, 0x101978u);
    ctx->pc = 0x101974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101970u;
    // 0x101974: 0x24a5dfe0  addiu       $a1, $a1, -0x2020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x101970u, 0x101978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101978u;
label_101978:
    // 0x101978: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x101978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x10197c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x101980: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x101984: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101988: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x101988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10198c: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x10198Cu;
    SET_GPR_U32(ctx, 31, 0x101994u);
    ctx->pc = 0x101990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10198Cu;
    // 0x101990: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x10198Cu, 0x101994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101994u;
label_101994:
    // 0x101994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101998: 0xc051244  jal         func_144910
    ctx->pc = 0x101998u;
    SET_GPR_U32(ctx, 31, 0x1019A0u);
    ctx->pc = 0x10199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101998u;
    // 0x10199c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x101998u, 0x1019A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019A0u;
label_1019a0:
    // 0x1019a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1019a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1019a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1019a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019a8: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1019A8u;
    SET_GPR_U32(ctx, 31, 0x1019B0u);
    ctx->pc = 0x1019ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1019A8u;
    // 0x1019ac: 0x24a5dfe8  addiu       $a1, $a1, -0x2018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1019A8u, 0x1019B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019B0u;
label_1019b0:
    // 0x1019b0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1019b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1019b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1019b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1019b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1019b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1019bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1019bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1019c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1019c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1019c8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1019c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1019cc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1019ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1019d0u;
}
