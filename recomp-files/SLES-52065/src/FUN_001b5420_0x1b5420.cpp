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

// Function: FUN_001b5420
// Address: 0x1b5420 - 0x1b5544
void FUN_001b5420_0x1b5420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5420_0x1b5420");
#endif

    switch (ctx->pc) {
        case 0x1b5458u: goto label_1b5458;
        case 0x1b5460u: goto label_1b5460;
        case 0x1b5468u: goto label_1b5468;
        case 0x1b5484u: goto label_1b5484;
        case 0x1b5498u: goto label_1b5498;
        case 0x1b54a4u: goto label_1b54a4;
        case 0x1b54b0u: goto label_1b54b0;
        case 0x1b54b8u: goto label_1b54b8;
        case 0x1b54c0u: goto label_1b54c0;
        case 0x1b54ccu: goto label_1b54cc;
        case 0x1b54d8u: goto label_1b54d8;
        case 0x1b54e4u: goto label_1b54e4;
        case 0x1b54f0u: goto label_1b54f0;
        case 0x1b5510u: goto label_1b5510;
        case 0x1b5528u: goto label_1b5528;
        default: break;
    }

    ctx->pc = 0x1b5420u;

    // 0x1b5420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b5420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b5424: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b5424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b5428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b5428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b542c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b542cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5430: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b5430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5434: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b5438: 0x1240003b  beqz        $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x1B5438u;
    {
        const bool branch_taken_0x1b5438 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5438u;
        // 0x1b543c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5438) {
            ctx->pc = 0x1B5528u;
            goto label_1b5528;
        }
    }
    ctx->pc = 0x1B5440u;
    // 0x1b5440: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1b5440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1b5444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b5444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5448: 0x2442b900  addiu       $v0, $v0, -0x4700
    ctx->pc = 0x1b5448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949120));
    // 0x1b544c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b544cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5450: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x1B5450u;
    SET_GPR_U32(ctx, 31, 0x1B5458u);
    ctx->pc = 0x1B5454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5450u;
    // 0x1b5454: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x1B5450u, 0x1B5458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5458u;
label_1b5458:
    // 0x1b5458: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1B5458u;
    SET_GPR_U32(ctx, 31, 0x1B5460u);
    ctx->pc = 0x1B545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5458u;
    // 0x1b545c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1B5458u, 0x1B5460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5460u;
label_1b5460:
    // 0x1b5460: 0xc0485d0  jal         func_121740
    ctx->pc = 0x1B5460u;
    SET_GPR_U32(ctx, 31, 0x1B5468u);
    ctx->pc = 0x121740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121740u, 0x1B5460u, 0x1B5468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5468u;
label_1b5468:
    // 0x1b5468: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x1b5468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1b546c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B546Cu;
    {
        const bool branch_taken_0x1b546c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b546c) {
            ctx->pc = 0x1B547Cu;
            goto label_1b547c;
        }
    }
    ctx->pc = 0x1B5474u;
    // 0x1b5474: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B5474u;
    {
        const bool branch_taken_0x1b5474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5474) {
            ctx->pc = 0x1B54B0u;
            goto label_1b54b0;
        }
    }
    ctx->pc = 0x1B547Cu;
label_1b547c:
    // 0x1b547c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B547Cu;
    SET_GPR_U32(ctx, 31, 0x1B5484u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B547Cu, 0x1B5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5484u;
label_1b5484:
    // 0x1b5484: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b5484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b5488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b5488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b548c: 0x8c252e98  lw          $a1, 0x2E98($at)
    ctx->pc = 0x1b548cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x212E98u));
    // 0x1b5490: 0xc062cb4  jal         func_18B2D0
    ctx->pc = 0x1B5490u;
    SET_GPR_U32(ctx, 31, 0x1B5498u);
    ctx->pc = 0x1B5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5490u;
    // 0x1b5494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2D0u, 0x1B5490u, 0x1B5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5498u;
label_1b5498:
    // 0x1b5498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b549c: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x1B549Cu;
    SET_GPR_U32(ctx, 31, 0x1B54A4u);
    ctx->pc = 0x1B54A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B549Cu;
    // 0x1b54a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AC80u, 0x1B549Cu, 0x1B54A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54A4u;
label_1b54a4:
    // 0x1b54a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b54a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54a8: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x1B54A8u;
    SET_GPR_U32(ctx, 31, 0x1B54B0u);
    ctx->pc = 0x1B54ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54A8u;
    // 0x1b54ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AC80u, 0x1B54A8u, 0x1B54B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54B0u;
label_1b54b0:
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
            goto label_1b5514;
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
label_1b5514:
    // 0x1b5514: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b5514u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b5518: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5518u;
    {
        const bool branch_taken_0x1b5518 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5518u;
        // 0x1b551c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5518) {
            ctx->pc = 0x1B552Cu;
            goto label_1b552c;
        }
    }
    ctx->pc = 0x1B5520u;
    // 0x1b5520: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B5520u;
    SET_GPR_U32(ctx, 31, 0x1B5528u);
    ctx->pc = 0x1B5524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5520u;
    // 0x1b5524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B5520u, 0x1B5528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5528u;
label_1b5528:
    // 0x1b5528: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b5528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b552c:
    // 0x1b552c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b552cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5530: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b5530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b553c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B553Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B553Cu;
        // 0x1b5540: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B553Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5544u;
}
