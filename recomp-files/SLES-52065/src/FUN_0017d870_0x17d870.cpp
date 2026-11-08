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

// Function: FUN_0017d870
// Address: 0x17d870 - 0x17d978
void FUN_0017d870_0x17d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017d870_0x17d870");
#endif

    switch (ctx->pc) {
        case 0x17d8acu: goto label_17d8ac;
        case 0x17d8bcu: goto label_17d8bc;
        case 0x17d8e0u: goto label_17d8e0;
        case 0x17d8f4u: goto label_17d8f4;
        case 0x17d900u: goto label_17d900;
        case 0x17d920u: goto label_17d920;
        case 0x17d94cu: goto label_17d94c;
        default: break;
    }

    ctx->pc = 0x17d870u;

    // 0x17d870: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17d874: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x17d874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x17d878: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17d878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17d87c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17d87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17d880: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17d884: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d888: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17d888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d88c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d890: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17d890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d894: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d898: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17d898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d89c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x17d89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8a0: 0x51a025  or          $s4, $v0, $s1
    ctx->pc = 0x17d8a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x17d8a4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x17D8A4u;
    SET_GPR_U32(ctx, 31, 0x17D8ACu);
    ctx->pc = 0x17D8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8A4u;
    // 0x17d8a8: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x17D8A4u, 0x17D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8ACu;
label_17d8ac:
    // 0x17d8ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D8ACu;
    {
        const bool branch_taken_0x17d8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8ACu;
        // 0x17d8b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8ac) {
            ctx->pc = 0x17D8BCu;
            goto label_17d8bc;
        }
    }
    ctx->pc = 0x17D8B4u;
    // 0x17d8b4: 0xc05f734  jal         func_17DCD0
    ctx->pc = 0x17D8B4u;
    SET_GPR_U32(ctx, 31, 0x17D8BCu);
    ctx->pc = 0x17DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DCD0u, 0x17D8B4u, 0x17D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8BCu;
label_17d8bc:
    // 0x17d8bc: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x17d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x17d8c0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x17d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x17d8c4: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x17d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
    // 0x17d8c8: 0x2665000c  addiu       $a1, $s3, 0xC
    ctx->pc = 0x17d8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x17d8cc: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x17d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
    // 0x17d8d0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x17d8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17d8d4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x17d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x17d8d8: 0xc05fda0  jal         func_17F680
    ctx->pc = 0x17D8D8u;
    SET_GPR_U32(ctx, 31, 0x17D8E0u);
    ctx->pc = 0x17D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8D8u;
    // 0x17d8dc: 0xafb40060  sw          $s4, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F680u, 0x17D8D8u, 0x17D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8E0u;
label_17d8e0:
    // 0x17d8e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17d8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17d8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8ec: 0xc05fb00  jal         func_17EC00
    ctx->pc = 0x17D8ECu;
    SET_GPR_U32(ctx, 31, 0x17D8F4u);
    ctx->pc = 0x17D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8ECu;
    // 0x17d8f0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC00u, 0x17D8ECu, 0x17D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8F4u;
label_17d8f4:
    // 0x17d8f4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x17d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x17d8f8: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x17D8F8u;
    SET_GPR_U32(ctx, 31, 0x17D900u);
    ctx->pc = 0x17D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8F8u;
    // 0x17d8fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x17D8F8u, 0x17D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D900u;
label_17d900:
    // 0x17d900: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x17d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17d904: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17d904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d908: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d90c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17d90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d910: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x17d910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x17d914: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17d914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17d918: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x17D918u;
    SET_GPR_U32(ctx, 31, 0x17D920u);
    ctx->pc = 0x17D91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D918u;
    // 0x17d91c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x17D918u, 0x17D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D920u;
label_17d920:
    // 0x17d920: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17d920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17d924: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D924u;
    {
        const bool branch_taken_0x17d924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D924u;
        // 0x17d928: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d924) {
            ctx->pc = 0x17D954u;
            goto label_17d954;
        }
    }
    ctx->pc = 0x17D92Cu;
    // 0x17d92c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d930: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x17d930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x17d934: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17d934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d938: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17d938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17d93c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x17d93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x17d940: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17d940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17d944: 0xc05f660  jal         func_17D980
    ctx->pc = 0x17D944u;
    SET_GPR_U32(ctx, 31, 0x17D94Cu);
    ctx->pc = 0x17D948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D944u;
    // 0x17d948: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D980u, 0x17D944u, 0x17D94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D94Cu;
label_17d94c:
    // 0x17d94c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17D94Cu;
    {
        const bool branch_taken_0x17d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D94Cu;
        // 0x17d950: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d94c) {
            ctx->pc = 0x17D95Cu;
            goto label_17d95c;
        }
    }
    ctx->pc = 0x17D954u;
label_17d954:
    // 0x17d954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17d954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d958: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17d958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17d95c:
    // 0x17d95c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17d95cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d960: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d970: 0x3e00008  jr          $ra
    ctx->pc = 0x17D970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D970u;
        // 0x17d974: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D978u;
}
