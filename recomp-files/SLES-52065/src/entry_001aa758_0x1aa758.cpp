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

// Function: entry_001aa758
// Address: 0x1aa758 - 0x1aa81c
void entry_001aa758_0x1aa758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa758_0x1aa758");
#endif

    switch (ctx->pc) {
        case 0x1aa764u: goto label_1aa764;
        case 0x1aa780u: goto label_1aa780;
        case 0x1aa7c4u: goto label_1aa7c4;
        case 0x1aa7e0u: goto label_1aa7e0;
        case 0x1aa800u: goto label_1aa800;
        default: break;
    }

    ctx->pc = 0x1aa758u;

label_1aa758:
    // 0x1aa758: 0x50b023  subu        $s6, $v0, $s0
    ctx->pc = 0x1aa758u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1aa75c:
    // 0x1aa75c: 0xc045ae8  jal         func_116BA0
label_1aa760:
    if (ctx->pc == 0x1AA760u) {
        ctx->pc = 0x1AA760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA75Cu;
        // 0x1aa760: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA764u;
        goto label_1aa764;
    }
    ctx->pc = 0x1AA75Cu;
    SET_GPR_U32(ctx, 31, 0x1AA764u);
    ctx->pc = 0x1AA760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA75Cu;
    // 0x1aa760: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1AA75Cu, 0x1AA764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA764u;
label_1aa764:
    // 0x1aa764: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aa764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa768:
    // 0x1aa768: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x1aa768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1aa76c:
    // 0x1aa76c: 0x8c440670  lw          $a0, 0x670($v0)
    ctx->pc = 0x1aa76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
label_1aa770:
    // 0x1aa770: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1aa770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1aa774:
    // 0x1aa774: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1aa774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1aa778:
    // 0x1aa778: 0x320f809  jalr        $t9
label_1aa77c:
    if (ctx->pc == 0x1AA77Cu) {
        ctx->pc = 0x1AA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA778u;
        // 0x1aa77c: 0x24540670  addiu       $s4, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA780u;
        goto label_1aa780;
    }
    ctx->pc = 0x1AA778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA780u);
        ctx->pc = 0x1AA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA778u;
        // 0x1aa77c: 0x24540670  addiu       $s4, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA778u, 0x1AA780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA780u;
label_1aa780:
    // 0x1aa780: 0x8ea4070c  lw          $a0, 0x70C($s5)
    ctx->pc = 0x1aa780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1804)));
label_1aa784:
    // 0x1aa784: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1aa784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1aa788:
    // 0x1aa788: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1aa788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1aa78c:
    // 0x1aa78c: 0x24630870  addiu       $v1, $v1, 0x870
    ctx->pc = 0x1aa78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2160));
label_1aa790:
    // 0x1aa790: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1aa790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1aa794:
    // 0x1aa794: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x1aa794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1aa798:
    // 0x1aa798: 0x24440260  addiu       $a0, $v0, 0x260
    ctx->pc = 0x1aa798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_1aa79c:
    // 0x1aa79c: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x1aa79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1aa7a0:
    // 0x1aa7a0: 0x8c510680  lw          $s1, 0x680($v0)
    ctx->pc = 0x1aa7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_1aa7a4:
    // 0x1aa7a4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1aa7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1aa7a8:
    // 0x1aa7a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1aa7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1aa7ac:
    // 0x1aa7ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aa7b0:
    // 0x1aa7b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1aa7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1aa7b4:
    // 0x1aa7b4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1aa7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1aa7b8:
    // 0x1aa7b8: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1aa7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1aa7bc:
    // 0x1aa7bc: 0xc042c0c  jal         func_10B030
label_1aa7c0:
    if (ctx->pc == 0x1AA7C0u) {
        ctx->pc = 0x1AA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7BCu;
        // 0x1aa7c0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7C4u;
        goto label_1aa7c4;
    }
    ctx->pc = 0x1AA7BCu;
    SET_GPR_U32(ctx, 31, 0x1AA7C4u);
    ctx->pc = 0x1AA7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7BCu;
    // 0x1aa7c0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B030u, 0x1AA7BCu, 0x1AA7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7C4u;
label_1aa7c4:
    // 0x1aa7c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aa7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aa7c8:
    // 0x1aa7c8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1aa7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1aa7cc:
    // 0x1aa7cc: 0x2442e090  addiu       $v0, $v0, -0x1F70
    ctx->pc = 0x1aa7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959248));
label_1aa7d0:
    // 0x1aa7d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa7d4:
    // 0x1aa7d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1aa7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa7d8:
    // 0x1aa7d8: 0xc0432f0  jal         func_10CBC0
label_1aa7dc:
    if (ctx->pc == 0x1AA7DCu) {
        ctx->pc = 0x1AA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7D8u;
        // 0x1aa7dc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7E0u;
        goto label_1aa7e0;
    }
    ctx->pc = 0x1AA7D8u;
    SET_GPR_U32(ctx, 31, 0x1AA7E0u);
    ctx->pc = 0x1AA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7D8u;
    // 0x1aa7dc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CBC0u, 0x1AA7D8u, 0x1AA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7E0u;
label_1aa7e0:
    // 0x1aa7e0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1aa7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1aa7e4:
    // 0x1aa7e4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1aa7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1aa7e8:
    // 0x1aa7e8: 0x244208a0  addiu       $v0, $v0, 0x8A0
    ctx->pc = 0x1aa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
label_1aa7ec:
    // 0x1aa7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa7f0:
    // 0x1aa7f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1aa7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1aa7f4:
    // 0x1aa7f4: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x1aa7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1aa7f8:
    // 0x1aa7f8: 0xc043288  jal         func_10CA20
label_1aa7fc:
    if (ctx->pc == 0x1AA7FCu) {
        ctx->pc = 0x1AA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7F8u;
        // 0x1aa7fc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA800u;
        goto label_1aa800;
    }
    ctx->pc = 0x1AA7F8u;
    SET_GPR_U32(ctx, 31, 0x1AA800u);
    ctx->pc = 0x1AA7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7F8u;
    // 0x1aa7fc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA20u, 0x1AA7F8u, 0x1AA800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA800u;
label_1aa800:
    // 0x1aa800: 0x26c5ffff  addiu       $a1, $s6, -0x1
    ctx->pc = 0x1aa800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_1aa804:
    // 0x1aa804: 0x245082a  slt         $at, $s2, $a1
    ctx->pc = 0x1aa804u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1aa808:
    // 0x1aa808: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1aa80c:
    if (ctx->pc == 0x1AA80Cu) {
        ctx->pc = 0x1AA810u;
        goto label_1aa810;
    }
    ctx->pc = 0x1AA808u;
    {
        const bool branch_taken_0x1aa808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa808) {
            ctx->pc = 0x1AA83Cu;
            return;
        }
    }
    ctx->pc = 0x1AA810u;
label_1aa810:
    // 0x1aa810: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x1aa810u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1aa814:
    // 0x1aa814: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aa814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aa818:
    // 0x1aa818: 0x2484e090  addiu       $a0, $a0, -0x1F70
    ctx->pc = 0x1aa818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959248));
    ctx->pc = 0x1aa81cu;
}
