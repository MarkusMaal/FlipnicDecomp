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

// Function: entry_0018e3f4
// Address: 0x18e3f4 - 0x18e490
void entry_0018e3f4_0x18e3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e3f4_0x18e3f4");
#endif

    switch (ctx->pc) {
        case 0x18e428u: goto label_18e428;
        case 0x18e438u: goto label_18e438;
        case 0x18e44cu: goto label_18e44c;
        case 0x18e47cu: goto label_18e47c;
        case 0x18e488u: goto label_18e488;
        default: break;
    }

    ctx->pc = 0x18e3f4u;

label_18e3f4:
    // 0x18e3f4: 0x8e430484  lw          $v1, 0x484($s2)
    ctx->pc = 0x18e3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
label_18e3f8:
    // 0x18e3f8: 0x8e452724  lw          $a1, 0x2724($s2)
    ctx->pc = 0x18e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e3fc:
    // 0x18e3fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e400:
    // 0x18e400: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18e400u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e404:
    // 0x18e404: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e408:
    // 0x18e408: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e40c:
    // 0x18e40c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18e410:
    // 0x18e410: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18e410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18e414:
    // 0x18e414: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18e418:
    // 0x18e418: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_18e41c:
    if (ctx->pc == 0x18E41Cu) {
        ctx->pc = 0x18E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E418u;
        // 0x18e41c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E420u;
        goto label_18e420;
    }
    ctx->pc = 0x18E418u;
    {
        const bool branch_taken_0x18e418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E418u;
        // 0x18e41c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e418) {
            ctx->pc = 0x18E490u;
            return;
        }
    }
    ctx->pc = 0x18E420u;
label_18e420:
    // 0x18e420: 0xc05f878  jal         func_17E1E0
label_18e424:
    if (ctx->pc == 0x18E424u) {
        ctx->pc = 0x18E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E420u;
        // 0x18e424: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E428u;
        goto label_18e428;
    }
    ctx->pc = 0x18E420u;
    SET_GPR_U32(ctx, 31, 0x18E428u);
    ctx->pc = 0x18E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E420u;
    // 0x18e424: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E420u, 0x18E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E428u;
label_18e428:
    // 0x18e428: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18e428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e42c:
    // 0x18e42c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18e42cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18e430:
    // 0x18e430: 0x320f809  jalr        $t9
label_18e434:
    if (ctx->pc == 0x18E434u) {
        ctx->pc = 0x18E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E430u;
        // 0x18e434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E438u;
        goto label_18e438;
    }
    ctx->pc = 0x18E430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18E438u);
        ctx->pc = 0x18E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E430u;
        // 0x18e434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E430u, 0x18E438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E438u;
label_18e438:
    // 0x18e438: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
label_18e43c:
    if (ctx->pc == 0x18E43Cu) {
        ctx->pc = 0x18E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E438u;
        // 0x18e43c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E440u;
        goto label_18e440;
    }
    ctx->pc = 0x18E438u;
    {
        const bool branch_taken_0x18e438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E438u;
        // 0x18e43c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e438) {
            ctx->pc = 0x18E6F0u;
            return;
        }
    }
    ctx->pc = 0x18E440u;
label_18e440:
    // 0x18e440: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e444:
    // 0x18e444: 0xc05f878  jal         func_17E1E0
label_18e448:
    if (ctx->pc == 0x18E448u) {
        ctx->pc = 0x18E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E444u;
        // 0x18e448: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E44Cu;
        goto label_18e44c;
    }
    ctx->pc = 0x18E444u;
    SET_GPR_U32(ctx, 31, 0x18E44Cu);
    ctx->pc = 0x18E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E444u;
    // 0x18e448: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E444u, 0x18E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E44Cu;
label_18e44c:
    // 0x18e44c: 0x8e430484  lw          $v1, 0x484($s2)
    ctx->pc = 0x18e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
label_18e450:
    // 0x18e450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e454:
    // 0x18e454: 0x8e452724  lw          $a1, 0x2724($s2)
    ctx->pc = 0x18e454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e458:
    // 0x18e458: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18e458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e45c:
    // 0x18e45c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e460:
    // 0x18e460: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e464:
    // 0x18e464: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e468:
    // 0x18e468: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18e46c:
    // 0x18e46c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18e470:
    // 0x18e470: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x18e470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18e474:
    // 0x18e474: 0xc0532f4  jal         func_14CBD0
label_18e478:
    if (ctx->pc == 0x18E478u) {
        ctx->pc = 0x18E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E474u;
        // 0x18e478: 0x8e460450  lw          $a2, 0x450($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E47Cu;
        goto label_18e47c;
    }
    ctx->pc = 0x18E474u;
    SET_GPR_U32(ctx, 31, 0x18E47Cu);
    ctx->pc = 0x18E478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E474u;
    // 0x18e478: 0x8e460450  lw          $a2, 0x450($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18E474u, 0x18E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E47Cu;
label_18e47c:
    // 0x18e47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e480:
    // 0x18e480: 0xc063e08  jal         func_18F820
label_18e484:
    if (ctx->pc == 0x18E484u) {
        ctx->pc = 0x18E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E480u;
        // 0x18e484: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E488u;
        goto label_18e488;
    }
    ctx->pc = 0x18E480u;
    SET_GPR_U32(ctx, 31, 0x18E488u);
    ctx->pc = 0x18E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E480u;
    // 0x18e484: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E480u, 0x18E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E488u;
label_18e488:
    // 0x18e488: 0x10000099  b           . + 4 + (0x99 << 2)
label_18e48c:
    if (ctx->pc == 0x18E48Cu) {
        ctx->pc = 0x18E490u;
        goto label_fallthrough_0x18e488;
    }
    ctx->pc = 0x18E488u;
    {
        const bool branch_taken_0x18e488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e488) {
            ctx->pc = 0x18E6F0u;
            return;
        }
    }
label_fallthrough_0x18e488:
    ctx->pc = 0x18E490u;
}
