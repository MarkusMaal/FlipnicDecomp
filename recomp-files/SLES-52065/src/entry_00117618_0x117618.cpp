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

// Function: entry_00117618
// Address: 0x117618 - 0x1176fc
void entry_00117618_0x117618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117618_0x117618");
#endif

    switch (ctx->pc) {
        case 0x117620u: goto label_117620;
        case 0x11765cu: goto label_11765c;
        case 0x117664u: goto label_117664;
        case 0x1176a8u: goto label_1176a8;
        default: break;
    }

    ctx->pc = 0x117618u;

    // 0x117618: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x117618u;
    SET_GPR_U32(ctx, 31, 0x117620u);
    ctx->pc = 0x11761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117618u;
    // 0x11761c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x117618u, 0x117620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117620u;
label_117620:
    // 0x117620: 0x8f83833c  lw          $v1, -0x7CC4($gp)
    ctx->pc = 0x117620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935356)));
    // 0x117624: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x117624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x117628: 0x8f848334  lw          $a0, -0x7CCC($gp)
    ctx->pc = 0x117628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935348)));
    // 0x11762c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x117630: 0xaf83833c  sw          $v1, -0x7CC4($gp)
    ctx->pc = 0x117630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935356), GPR_U32(ctx, 3));
    // 0x117634: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x117634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x117638: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x117638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x11763c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x11763cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x117640: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x117640u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x117644: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x117644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x117648: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x117648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x11764c: 0x8f828334  lw          $v0, -0x7CCC($gp)
    ctx->pc = 0x11764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935348)));
    // 0x117650: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x117650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x117654: 0xc045f24  jal         func_117C90
    ctx->pc = 0x117654u;
    SET_GPR_U32(ctx, 31, 0x11765Cu);
    ctx->pc = 0x117658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117654u;
    // 0x117658: 0xaf828334  sw          $v0, -0x7CCC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C90u, 0x117654u, 0x11765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11765Cu;
label_11765c:
    // 0x11765c: 0xc045f34  jal         func_117CD0
    ctx->pc = 0x11765Cu;
    SET_GPR_U32(ctx, 31, 0x117664u);
    ctx->pc = 0x117660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11765Cu;
    // 0x117660: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117CD0u, 0x11765Cu, 0x117664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117664u;
label_117664:
    // 0x117664: 0xaf918338  sw          $s1, -0x7CC8($gp)
    ctx->pc = 0x117664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935352), GPR_U32(ctx, 17));
    // 0x117668: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x117668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11766c: 0xac209020  sw          $zero, -0x6FE0($at)
    ctx->pc = 0x11766cu;
    runtime->Store32(rdram, ctx, 0x10009020u, GPR_U32(ctx, 0));
    // 0x117670: 0x27838328  addiu       $v1, $gp, -0x7CD8
    ctx->pc = 0x117670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935336));
    // 0x117674: 0x8f858330  lw          $a1, -0x7CD0($gp)
    ctx->pc = 0x117674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
    // 0x117678: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x117678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11767c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x117680: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x117680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117684: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x117684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x117688: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x117688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11768c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11768cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117690: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x117690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x117694: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x117694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x117698: 0xac239030  sw          $v1, -0x6FD0($at)
    ctx->pc = 0x117698u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938672), GPR_U32(ctx, 3));
    // 0x11769c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11769cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1176a0: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1176A0u;
    SET_GPR_U32(ctx, 31, 0x1176A8u);
    ctx->pc = 0x1176A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176A0u;
    // 0x1176a4: 0xac22e010  sw          $v0, -0x1FF0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1176A0u, 0x1176A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176A8u;
label_1176a8:
    // 0x1176a8: 0x240301c5  addiu       $v1, $zero, 0x1C5
    ctx->pc = 0x1176a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
    // 0x1176ac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1176acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1176b0: 0xac239000  sw          $v1, -0x7000($at)
    ctx->pc = 0x1176b0u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 3));
    // 0x1176b4: 0x27858328  addiu       $a1, $gp, -0x7CD8
    ctx->pc = 0x1176b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935336));
    // 0x1176b8: 0x8f868330  lw          $a2, -0x7CD0($gp)
    ctx->pc = 0x1176b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
    // 0x1176bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1176bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1176c0: 0x8f848348  lw          $a0, -0x7CB8($gp)
    ctx->pc = 0x1176c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935368)));
    // 0x1176c4: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x1176c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1176c8: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x1176c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x1176cc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1176ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1176d0: 0xaf868330  sw          $a2, -0x7CD0($gp)
    ctx->pc = 0x1176d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935344), GPR_U32(ctx, 6));
    // 0x1176d4: 0x8f868330  lw          $a2, -0x7CD0($gp)
    ctx->pc = 0x1176d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
    // 0x1176d8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1176d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1176dc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1176dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1176e0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1176e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1176e4: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1176E4u;
    {
        const bool branch_taken_0x1176e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1176E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176E4u;
        // 0x1176e8: 0xaf858334  sw          $a1, -0x7CCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176e4) {
            ctx->pc = 0x11771Cu;
            return;
        }
    }
    ctx->pc = 0x1176ECu;
    // 0x1176ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1176ECu;
    {
        const bool branch_taken_0x1176ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1176ec) {
            ctx->pc = 0x1176FCu;
            return;
        }
    }
    ctx->pc = 0x1176F4u;
    // 0x1176f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1176F4u;
    {
        const bool branch_taken_0x1176f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1176F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176F4u;
        // 0x1176f8: 0x8f83831c  lw          $v1, -0x7CE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176f4) {
            ctx->pc = 0x117738u;
            return;
        }
    }
    ctx->pc = 0x1176FCu;
}
