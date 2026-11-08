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

// Function: entry_0015f790
// Address: 0x15f790 - 0x15f89c
void entry_0015f790_0x15f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f790_0x15f790");
#endif

    switch (ctx->pc) {
        case 0x15f7e4u: goto label_15f7e4;
        case 0x15f81cu: goto label_15f81c;
        case 0x15f864u: goto label_15f864;
        default: break;
    }

    ctx->pc = 0x15f790u;

label_15f790:
    // 0x15f790: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f794:
    // 0x15f794: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f798:
    // 0x15f798: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f79c:
    // 0x15f79c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15f7a0:
    // 0x15f7a0: 0x84630020  lh          $v1, 0x20($v1)
    ctx->pc = 0x15f7a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_15f7a4:
    // 0x15f7a4: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x15f7a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_15f7a8:
    // 0x15f7a8: 0x1460006b  bnez        $v1, . + 4 + (0x6B << 2)
label_15f7ac:
    if (ctx->pc == 0x15F7ACu) {
        ctx->pc = 0x15F7B0u;
        goto label_15f7b0;
    }
    ctx->pc = 0x15F7A8u;
    {
        const bool branch_taken_0x15f7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f7a8) {
            ctx->pc = 0x15F958u;
            return;
        }
    }
    ctx->pc = 0x15F7B0u;
label_15f7b0:
    // 0x15f7b0: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f7b4:
    // 0x15f7b4: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
label_15f7b8:
    if (ctx->pc == 0x15F7B8u) {
        ctx->pc = 0x15F7BCu;
        goto label_15f7bc;
    }
    ctx->pc = 0x15F7B4u;
    {
        const bool branch_taken_0x15f7b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f7b4) {
            ctx->pc = 0x15F958u;
            return;
        }
    }
    ctx->pc = 0x15F7BCu;
label_15f7bc:
    // 0x15f7bc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f7bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f7c0:
    // 0x15f7c0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f7c4:
    // 0x15f7c4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f7c8:
    // 0x15f7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f7cc:
    // 0x15f7cc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f7d0:
    // 0x15f7d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f7d4:
    // 0x15f7d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f7d8:
    // 0x15f7d8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x15f7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_15f7dc:
    // 0x15f7dc: 0x320f809  jalr        $t9
label_15f7e0:
    if (ctx->pc == 0x15F7E0u) {
        ctx->pc = 0x15F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7DCu;
        // 0x15f7e0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F7E4u;
        goto label_15f7e4;
    }
    ctx->pc = 0x15F7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F7E4u);
        ctx->pc = 0x15F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7DCu;
        // 0x15f7e0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F7DCu, 0x15F7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F7E4u;
label_15f7e4:
    // 0x15f7e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f7e8:
    // 0x15f7e8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15f7e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f7ec:
    // 0x15f7ec: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f7f0:
    // 0x15f7f0: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f7f4:
    // 0x15f7f4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f7f8:
    // 0x15f7f8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f7fc:
    // 0x15f7fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f800:
    // 0x15f800: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f804:
    // 0x15f804: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f808:
    // 0x15f808: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f80c:
    // 0x15f80c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f80cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f810:
    // 0x15f810: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15f814:
    // 0x15f814: 0x320f809  jalr        $t9
label_15f818:
    if (ctx->pc == 0x15F818u) {
        ctx->pc = 0x15F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F814u;
        // 0x15f818: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F81Cu;
        goto label_15f81c;
    }
    ctx->pc = 0x15F814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F81Cu);
        ctx->pc = 0x15F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F814u;
        // 0x15f818: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F814u, 0x15F81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F81Cu;
label_15f81c:
    // 0x15f81c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15f81cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15f820:
    // 0x15f820: 0x14200034  bnez        $at, . + 4 + (0x34 << 2)
label_15f824:
    if (ctx->pc == 0x15F824u) {
        ctx->pc = 0x15F828u;
        goto label_15f828;
    }
    ctx->pc = 0x15F820u;
    {
        const bool branch_taken_0x15f820 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f820) {
            ctx->pc = 0x15F8F4u;
            return;
        }
    }
    ctx->pc = 0x15F828u;
label_15f828:
    // 0x15f828: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f82c:
    // 0x15f82c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15f830:
    // 0x15f830: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15f830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f834:
    // 0x15f834: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f838:
    // 0x15f838: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f83c:
    // 0x15f83c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f840:
    // 0x15f840: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f844:
    // 0x15f844: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f848:
    // 0x15f848: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f84c:
    // 0x15f84c: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15f84cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15f850:
    // 0x15f850: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15f850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f854:
    // 0x15f854: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f858:
    // 0x15f858: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15f858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15f85c:
    // 0x15f85c: 0x320f809  jalr        $t9
label_15f860:
    if (ctx->pc == 0x15F860u) {
        ctx->pc = 0x15F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F85Cu;
        // 0x15f860: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F864u;
        goto label_15f864;
    }
    ctx->pc = 0x15F85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F864u);
        ctx->pc = 0x15F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F85Cu;
        // 0x15f860: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F85Cu, 0x15F864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F864u;
label_15f864:
    // 0x15f864: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f868:
    // 0x15f868: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_15f86c:
    if (ctx->pc == 0x15F86Cu) {
        ctx->pc = 0x15F870u;
        goto label_15f870;
    }
    ctx->pc = 0x15F868u;
    {
        const bool branch_taken_0x15f868 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f868) {
            ctx->pc = 0x15F8F4u;
            return;
        }
    }
    ctx->pc = 0x15F870u;
label_15f870:
    // 0x15f870: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15f874:
    if (ctx->pc == 0x15F874u) {
        ctx->pc = 0x15F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F870u;
        // 0x15f874: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F878u;
        goto label_15f878;
    }
    ctx->pc = 0x15F870u;
    {
        const bool branch_taken_0x15f870 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F870u;
        // 0x15f874: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f870) {
            ctx->pc = 0x15F89Cu;
            return;
        }
    }
    ctx->pc = 0x15F878u;
label_15f878:
    // 0x15f878: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f87c:
    // 0x15f87c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f880:
    // 0x15f880: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f884:
    // 0x15f884: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f888:
    // 0x15f888: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15f888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f88c:
    // 0x15f88c: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15f88cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15f890:
    // 0x15f890: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15f894:
    if (ctx->pc == 0x15F894u) {
        ctx->pc = 0x15F898u;
        goto label_15f898;
    }
    ctx->pc = 0x15F890u;
    {
        const bool branch_taken_0x15f890 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15f890) {
            ctx->pc = 0x15F89Cu;
            return;
        }
    }
    ctx->pc = 0x15F898u;
label_15f898:
    // 0x15f898: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15f898u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15f89cu;
}
