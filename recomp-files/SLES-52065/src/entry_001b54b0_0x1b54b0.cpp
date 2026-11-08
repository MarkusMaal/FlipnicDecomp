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

// Function: entry_001b54b0
// Address: 0x1b54b0 - 0x1b5514
void entry_001b54b0_0x1b54b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b54b0_0x1b54b0");
#endif

    switch (ctx->pc) {
        case 0x1b54b8u: goto label_1b54b8;
        case 0x1b54c0u: goto label_1b54c0;
        case 0x1b54ccu: goto label_1b54cc;
        case 0x1b54d8u: goto label_1b54d8;
        case 0x1b54e4u: goto label_1b54e4;
        case 0x1b54f0u: goto label_1b54f0;
        case 0x1b5510u: goto label_1b5510;
        default: break;
    }

    ctx->pc = 0x1b54b0u;

    // 0x1b54b0: 0xc04860c  jal         func_121830
    ctx->pc = 0x1B54B0u;
    SET_GPR_U32(ctx, 31, 0x1B54B8u);
    ctx->pc = 0x121830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121830u, 0x1B54B0u, 0x1B54B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54B8u;
label_1b54b8:
    // 0x1b54b8: 0xc04d988  jal         func_136620
    ctx->pc = 0x1B54B8u;
    SET_GPR_U32(ctx, 31, 0x1B54C0u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1B54B8u, 0x1B54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54C0u;
label_1b54c0:
    // 0x1b54c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b54c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54c4: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1B54C4u;
    SET_GPR_U32(ctx, 31, 0x1B54CCu);
    ctx->pc = 0x1B54C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54C4u;
    // 0x1b54c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1B54C4u, 0x1B54CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54CCu;
label_1b54cc:
    // 0x1b54cc: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x1b54ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x1b54d0: 0xc06f8cc  jal         func_1BE330
    ctx->pc = 0x1B54D0u;
    SET_GPR_U32(ctx, 31, 0x1B54D8u);
    ctx->pc = 0x1B54D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54D0u;
    // 0x1b54d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE330u, 0x1B54D0u, 0x1B54D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54D8u;
label_1b54d8:
    // 0x1b54d8: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x1b54d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x1b54dc: 0xc06d7a0  jal         func_1B5E80
    ctx->pc = 0x1B54DCu;
    SET_GPR_U32(ctx, 31, 0x1B54E4u);
    ctx->pc = 0x1B54E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54DCu;
    // 0x1b54e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5E80u, 0x1B54DCu, 0x1B54E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54E4u;
label_1b54e4:
    // 0x1b54e4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1b54e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1b54e8: 0xc06e080  jal         func_1B8200
    ctx->pc = 0x1B54E8u;
    SET_GPR_U32(ctx, 31, 0x1B54F0u);
    ctx->pc = 0x1B54ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54E8u;
    // 0x1b54ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8200u, 0x1B54E8u, 0x1B54F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54F0u;
label_1b54f0:
    // 0x1b54f0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B54F0u;
    {
        const bool branch_taken_0x1b54f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B54F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54F0u;
        // 0x1b54f4: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54f0) {
            ctx->pc = 0x1B5514u;
            return;
        }
    }
    ctx->pc = 0x1B54F8u;
    // 0x1b54f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1b54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1b54fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b54fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5500: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1b5500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1b5504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5508: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1B5508u;
    SET_GPR_U32(ctx, 31, 0x1B5510u);
    ctx->pc = 0x1B550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5508u;
    // 0x1b550c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1B5508u, 0x1B5510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5510u;
label_1b5510:
    // 0x1b5510: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1b5510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    ctx->pc = 0x1b5514u;
}
