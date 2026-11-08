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

// Function: FUN_001bd770
// Address: 0x1bd770 - 0x1bd938
void FUN_001bd770_0x1bd770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bd770_0x1bd770");
#endif

    switch (ctx->pc) {
        case 0x1bd7d8u: goto label_1bd7d8;
        case 0x1bd7ecu: goto label_1bd7ec;
        case 0x1bd818u: goto label_1bd818;
        case 0x1bd838u: goto label_1bd838;
        case 0x1bd840u: goto label_1bd840;
        case 0x1bd86cu: goto label_1bd86c;
        case 0x1bd8acu: goto label_1bd8ac;
        case 0x1bd8bcu: goto label_1bd8bc;
        case 0x1bd8f0u: goto label_1bd8f0;
        case 0x1bd90cu: goto label_1bd90c;
        default: break;
    }

    ctx->pc = 0x1bd770u;

    // 0x1bd770: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bd770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1bd774: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bd774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bd778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bd778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bd77c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd780: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd784: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x1bd784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x1bd788: 0x8c231240  lw          $v1, 0x1240($at)
    ctx->pc = 0x1bd788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x221240u));
    // 0x1bd78c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd790: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bd790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bd794: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd798: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bd798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1bd79c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1bd79cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1bd7a0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1bd7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1bd7a4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1bd7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1bd7a8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd7ac: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1bd7acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1bd7b0: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1bd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1bd7b4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd7b8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1bd7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1bd7bc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1bd7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd7c0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1bd7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1bd7c4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1BD7C4u;
    {
        const bool branch_taken_0x1bd7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7C4u;
        // 0x1bd7c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7c4) {
            ctx->pc = 0x1BD920u;
            goto label_1bd920;
        }
    }
    ctx->pc = 0x1BD7CCu;
    // 0x1bd7cc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1bd7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1bd7d0: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x1BD7D0u;
    SET_GPR_U32(ctx, 31, 0x1BD7D8u);
    ctx->pc = 0x1BD7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD7D0u;
    // 0x1bd7d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x1BD7D0u, 0x1BD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD7D8u;
label_1bd7d8:
    // 0x1bd7d8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd7dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd7e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bd7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7e4: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x1BD7E4u;
    SET_GPR_U32(ctx, 31, 0x1BD7ECu);
    ctx->pc = 0x1BD7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD7E4u;
    // 0x1bd7e8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x1BD7E4u, 0x1BD7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD7ECu;
label_1bd7ec:
    // 0x1bd7ec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1bd7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd7f0: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x1bd7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1bd7f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd7f8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1bd7f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bd7fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD7FCu;
    {
        const bool branch_taken_0x1bd7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7fc) {
            ctx->pc = 0x1BD808u;
            goto label_1bd808;
        }
    }
    ctx->pc = 0x1BD804u;
    // 0x1bd804: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1bd804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1bd808:
    // 0x1bd808: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd80c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd810: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BD810u;
    SET_GPR_U32(ctx, 31, 0x1BD818u);
    ctx->pc = 0x1BD814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD810u;
    // 0x1bd814: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BD810u, 0x1BD818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD818u;
label_1bd818:
    // 0x1bd818: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd81c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD81Cu;
    {
        const bool branch_taken_0x1bd81c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD81Cu;
        // 0x1bd820: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd81c) {
            ctx->pc = 0x1BD840u;
            goto label_1bd840;
        }
    }
    ctx->pc = 0x1BD824u;
    // 0x1bd824: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bd824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bd828: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bd828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1bd82c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bd82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd830: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BD830u;
    SET_GPR_U32(ctx, 31, 0x1BD838u);
    ctx->pc = 0x1BD834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD830u;
    // 0x1bd834: 0x24a51250  addiu       $a1, $a1, 0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BD830u, 0x1BD838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD838u;
label_1bd838:
    // 0x1bd838: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BD838u;
    SET_GPR_U32(ctx, 31, 0x1BD840u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BD838u, 0x1BD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD840u;
label_1bd840:
    // 0x1bd840: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd844: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x1bd844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1bd848: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1bd848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd84c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1bd84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bd850: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd858: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1bd858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1bd85c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd860: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x1bd860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x1bd864: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x1BD864u;
    SET_GPR_U32(ctx, 31, 0x1BD86Cu);
    ctx->pc = 0x1BD868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD864u;
    // 0x1bd868: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x1BD864u, 0x1BD86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD86Cu;
label_1bd86c:
    // 0x1bd86c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1bd86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd870: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bd870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bd874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd878: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1bd878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bd87c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1bd87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1bd880: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1bd880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd884: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1bd884u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1bd888: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x1bd888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x1bd88c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1bd88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd890: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1bd890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1bd894: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1bd894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1bd898: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x1bd898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1bd89c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1bd89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd8a0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1bd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1bd8a4: 0xc06f718  jal         func_1BDC60
    ctx->pc = 0x1BD8A4u;
    SET_GPR_U32(ctx, 31, 0x1BD8ACu);
    ctx->pc = 0x1BD8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD8A4u;
    // 0x1bd8a8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC60u, 0x1BD8A4u, 0x1BD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8ACu;
label_1bd8ac:
    // 0x1bd8ac: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1bd8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1bd8b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1bd8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd8b4: 0xc06f718  jal         func_1BDC60
    ctx->pc = 0x1BD8B4u;
    SET_GPR_U32(ctx, 31, 0x1BD8BCu);
    ctx->pc = 0x1BD8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD8B4u;
    // 0x1bd8b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC60u, 0x1BD8B4u, 0x1BD8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8BCu;
label_1bd8bc:
    // 0x1bd8bc: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1bd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd8c0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1bd8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bd8c4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1bd8c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd8c8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1bd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bd8cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bd8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bd8d0: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x1bd8d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd8d4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1bd8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1bd8d8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1bd8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1bd8dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bd8dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd8e0: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x1bd8e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bd8e4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1bd8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1bd8e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD8E8u;
    {
        const bool branch_taken_0x1bd8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8E8u;
        // 0x1bd8ec: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8e8) {
            ctx->pc = 0x1BD90Cu;
            goto label_1bd90c;
        }
    }
    ctx->pc = 0x1BD8F0u;
label_1bd8f0:
    // 0x1bd8f0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD8F0u;
    {
        const bool branch_taken_0x1bd8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8f0) {
            ctx->pc = 0x1BD900u;
            goto label_1bd900;
        }
    }
    ctx->pc = 0x1BD8F8u;
    // 0x1bd8f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bd8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd8fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bd8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bd900:
    // 0x1bd900: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1bd900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bd904: 0xc06f650  jal         func_1BD940
    ctx->pc = 0x1BD904u;
    SET_GPR_U32(ctx, 31, 0x1BD90Cu);
    ctx->pc = 0x1BD908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD904u;
    // 0x1bd908: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD940u, 0x1BD904u, 0x1BD90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD90Cu;
label_1bd90c:
    // 0x1bd90c: 0x0  nop
    ctx->pc = 0x1bd90cu;
    // NOP
    // 0x1bd910: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1bd910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1bd914: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1bd914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1bd918: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BD918u;
    {
        const bool branch_taken_0x1bd918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd918) {
            ctx->pc = 0x1BD8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd8f0;
        }
    }
    ctx->pc = 0x1BD920u;
label_1bd920:
    // 0x1bd920: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bd924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd92c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd930: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD930u;
        // 0x1bd934: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD938u;
}
