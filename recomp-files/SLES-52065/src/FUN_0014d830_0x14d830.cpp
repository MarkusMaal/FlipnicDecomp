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

// Function: FUN_0014d830
// Address: 0x14d830 - 0x14d8ec
void FUN_0014d830_0x14d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014d830_0x14d830");
#endif

    switch (ctx->pc) {
        case 0x14d860u: goto label_14d860;
        case 0x14d890u: goto label_14d890;
        case 0x14d89cu: goto label_14d89c;
        case 0x14d8d8u: goto label_14d8d8;
        default: break;
    }

    ctx->pc = 0x14d830u;

    // 0x14d830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14d838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d840: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14d840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d844: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x14d844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14d848: 0xb0082b  sltu        $at, $a1, $s0
    ctx->pc = 0x14d848u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14d84c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x14D84Cu;
    {
        const bool branch_taken_0x14d84c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D84Cu;
        // 0x14d850: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d84c) {
            ctx->pc = 0x14D8A4u;
            goto label_14d8a4;
        }
    }
    ctx->pc = 0x14D854u;
    // 0x14d854: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14d854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14d858: 0xc053654  jal         func_14D950
    ctx->pc = 0x14D858u;
    SET_GPR_U32(ctx, 31, 0x14D860u);
    ctx->pc = 0x14D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D858u;
    // 0x14d85c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D950u, 0x14D858u, 0x14D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D860u;
label_14d860:
    // 0x14d860: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x14d860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x14d864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d868: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x14d868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x14d86c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x14d86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14d870: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x14d870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14d874: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x14d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14d878: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14d878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d87c: 0x2053023  subu        $a2, $s0, $a1
    ctx->pc = 0x14d87cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x14d880: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14d880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14d884: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14d884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d888: 0xc053850  jal         func_14E140
    ctx->pc = 0x14D888u;
    SET_GPR_U32(ctx, 31, 0x14D890u);
    ctx->pc = 0x14D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D888u;
    // 0x14d88c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E140u, 0x14D888u, 0x14D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D890u;
label_14d890:
    // 0x14d890: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14d890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14d894: 0xc053a28  jal         func_14E8A0
    ctx->pc = 0x14D894u;
    SET_GPR_U32(ctx, 31, 0x14D89Cu);
    ctx->pc = 0x14D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D894u;
    // 0x14d898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8A0u, 0x14D894u, 0x14D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D89Cu;
label_14d89c:
    // 0x14d89c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14D89Cu;
    {
        const bool branch_taken_0x14d89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D89Cu;
        // 0x14d8a0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d89c) {
            ctx->pc = 0x14D8DCu;
            goto label_14d8dc;
        }
    }
    ctx->pc = 0x14D8A4u;
label_14d8a4:
    // 0x14d8a4: 0x205082b  sltu        $at, $s0, $a1
    ctx->pc = 0x14d8a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x14d8a8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x14D8A8u;
    {
        const bool branch_taken_0x14d8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d8a8) {
            ctx->pc = 0x14D8D8u;
            goto label_14d8d8;
        }
    }
    ctx->pc = 0x14D8B0u;
    // 0x14d8b0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x14d8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14d8b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14d8b8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x14d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14d8bc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x14d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d8c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d8c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14d8c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d8cc: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14d8d0: 0xc0537e8  jal         func_14DFA0
    ctx->pc = 0x14D8D0u;
    SET_GPR_U32(ctx, 31, 0x14D8D8u);
    ctx->pc = 0x14D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8D0u;
    // 0x14d8d4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DFA0u, 0x14D8D0u, 0x14D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8D8u;
label_14d8d8:
    // 0x14d8d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14d8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14d8dc:
    // 0x14d8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8E4u;
        // 0x14d8e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D8ECu;
}
