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

// Function: entry_0015f668
// Address: 0x15f668 - 0x15f728
void entry_0015f668_0x15f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f668_0x15f668");
#endif

    switch (ctx->pc) {
        case 0x15f6a8u: goto label_15f6a8;
        case 0x15f6f0u: goto label_15f6f0;
        default: break;
    }

    ctx->pc = 0x15f668u;

label_15f668:
    // 0x15f668: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f66c:
    // 0x15f66c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f670:
    // 0x15f670: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f674:
    // 0x15f674: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f678:
    // 0x15f678: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_15f67c:
    if (ctx->pc == 0x15F67Cu) {
        ctx->pc = 0x15F680u;
        goto label_15f680;
    }
    ctx->pc = 0x15F678u;
    {
        const bool branch_taken_0x15f678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f678) {
            ctx->pc = 0x15F744u;
            return;
        }
    }
    ctx->pc = 0x15F680u;
label_15f680:
    // 0x15f680: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f684:
    // 0x15f684: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f688:
    // 0x15f688: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f68c:
    // 0x15f68c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f690:
    // 0x15f690: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f694:
    // 0x15f694: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f698:
    // 0x15f698: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f69c:
    // 0x15f69c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f69cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15f6a0:
    // 0x15f6a0: 0x320f809  jalr        $t9
label_15f6a4:
    if (ctx->pc == 0x15F6A4u) {
        ctx->pc = 0x15F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6A0u;
        // 0x15f6a4: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6A8u;
        goto label_15f6a8;
    }
    ctx->pc = 0x15F6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F6A8u);
        ctx->pc = 0x15F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6A0u;
        // 0x15f6a4: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6A0u, 0x15F6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F6A8u;
label_15f6a8:
    // 0x15f6a8: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15f6a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15f6ac:
    // 0x15f6ac: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
label_15f6b0:
    if (ctx->pc == 0x15F6B0u) {
        ctx->pc = 0x15F6B4u;
        goto label_15f6b4;
    }
    ctx->pc = 0x15F6ACu;
    {
        const bool branch_taken_0x15f6ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f6ac) {
            ctx->pc = 0x15F744u;
            return;
        }
    }
    ctx->pc = 0x15F6B4u;
label_15f6b4:
    // 0x15f6b4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f6b8:
    // 0x15f6b8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15f6bc:
    // 0x15f6bc: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f6c0:
    // 0x15f6c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f6c4:
    // 0x15f6c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f6c8:
    // 0x15f6c8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f6cc:
    // 0x15f6cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f6d0:
    // 0x15f6d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f6d4:
    // 0x15f6d4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f6d8:
    // 0x15f6d8: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15f6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15f6dc:
    // 0x15f6dc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15f6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f6e0:
    // 0x15f6e0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f6e4:
    // 0x15f6e4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15f6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15f6e8:
    // 0x15f6e8: 0x320f809  jalr        $t9
label_15f6ec:
    if (ctx->pc == 0x15F6ECu) {
        ctx->pc = 0x15F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6E8u;
        // 0x15f6ec: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6F0u;
        goto label_15f6f0;
    }
    ctx->pc = 0x15F6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F6F0u);
        ctx->pc = 0x15F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6E8u;
        // 0x15f6ec: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6E8u, 0x15F6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F6F0u;
label_15f6f0:
    // 0x15f6f0: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f6f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f6f4:
    // 0x15f6f4: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_15f6f8:
    if (ctx->pc == 0x15F6F8u) {
        ctx->pc = 0x15F6FCu;
        goto label_15f6fc;
    }
    ctx->pc = 0x15F6F4u;
    {
        const bool branch_taken_0x15f6f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f6f4) {
            ctx->pc = 0x15F744u;
            return;
        }
    }
    ctx->pc = 0x15F6FCu;
label_15f6fc:
    // 0x15f6fc: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15f700:
    if (ctx->pc == 0x15F700u) {
        ctx->pc = 0x15F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6FCu;
        // 0x15f700: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F704u;
        goto label_15f704;
    }
    ctx->pc = 0x15F6FCu;
    {
        const bool branch_taken_0x15f6fc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6FCu;
        // 0x15f700: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6fc) {
            ctx->pc = 0x15F728u;
            return;
        }
    }
    ctx->pc = 0x15F704u;
label_15f704:
    // 0x15f704: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f708:
    // 0x15f708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f70c:
    // 0x15f70c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f710:
    // 0x15f710: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f714:
    // 0x15f714: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15f714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f718:
    // 0x15f718: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15f718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15f71c:
    // 0x15f71c: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15f720:
    if (ctx->pc == 0x15F720u) {
        ctx->pc = 0x15F724u;
        goto label_15f724;
    }
    ctx->pc = 0x15F71Cu;
    {
        const bool branch_taken_0x15f71c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15f71c) {
            ctx->pc = 0x15F728u;
            return;
        }
    }
    ctx->pc = 0x15F724u;
label_15f724:
    // 0x15f724: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15f724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15f728u;
}
