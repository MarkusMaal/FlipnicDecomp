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

// Function: entry_0017d05c
// Address: 0x17d05c - 0x17d11c
void entry_0017d05c_0x17d05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d05c_0x17d05c");
#endif

    switch (ctx->pc) {
        case 0x17d06cu: goto label_17d06c;
        case 0x17d07cu: goto label_17d07c;
        case 0x17d08cu: goto label_17d08c;
        case 0x17d0a4u: goto label_17d0a4;
        case 0x17d0bcu: goto label_17d0bc;
        case 0x17d0d4u: goto label_17d0d4;
        case 0x17d0ecu: goto label_17d0ec;
        case 0x17d0fcu: goto label_17d0fc;
        case 0x17d118u: goto label_17d118;
        default: break;
    }

    ctx->pc = 0x17d05cu;

    // 0x17d05c: 0x27848634  addiu       $a0, $gp, -0x79CC
    ctx->pc = 0x17d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936116));
    // 0x17d060: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d064: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D064u;
    SET_GPR_U32(ctx, 31, 0x17D06Cu);
    ctx->pc = 0x17D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D064u;
    // 0x17d068: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D064u, 0x17D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D06Cu;
label_17d06c:
    // 0x17d06c: 0x27848638  addiu       $a0, $gp, -0x79C8
    ctx->pc = 0x17d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936120));
    // 0x17d070: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x17d070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x17d074: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D074u;
    SET_GPR_U32(ctx, 31, 0x17D07Cu);
    ctx->pc = 0x17D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D074u;
    // 0x17d078: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D074u, 0x17D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D07Cu;
label_17d07c:
    // 0x17d07c: 0x27a4007f  addiu       $a0, $sp, 0x7F
    ctx->pc = 0x17d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
    // 0x17d080: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x17d080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17d084: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D084u;
    SET_GPR_U32(ctx, 31, 0x17D08Cu);
    ctx->pc = 0x17D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D084u;
    // 0x17d088: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D084u, 0x17D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D08Cu;
label_17d08c:
    // 0x17d08c: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x17d08cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
    // 0x17d090: 0x27a4007f  addiu       $a0, $sp, 0x7F
    ctx->pc = 0x17d090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
    // 0x17d094: 0x26450005  addiu       $a1, $s2, 0x5
    ctx->pc = 0x17d094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x17d098: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17d098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d09c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D09Cu;
    SET_GPR_U32(ctx, 31, 0x17D0A4u);
    ctx->pc = 0x17D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D09Cu;
    // 0x17d0a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D09Cu, 0x17D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0A4u;
label_17d0a4:
    // 0x17d0a4: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x17d0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
    // 0x17d0a8: 0x27a4007f  addiu       $a0, $sp, 0x7F
    ctx->pc = 0x17d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
    // 0x17d0ac: 0x26450006  addiu       $a1, $s2, 0x6
    ctx->pc = 0x17d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x17d0b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17d0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d0b4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D0B4u;
    SET_GPR_U32(ctx, 31, 0x17D0BCu);
    ctx->pc = 0x17D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0B4u;
    // 0x17d0b8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D0B4u, 0x17D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0BCu;
label_17d0bc:
    // 0x17d0bc: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x17d0bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
    // 0x17d0c0: 0x27a4007f  addiu       $a0, $sp, 0x7F
    ctx->pc = 0x17d0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
    // 0x17d0c4: 0x26450007  addiu       $a1, $s2, 0x7
    ctx->pc = 0x17d0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x17d0c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17d0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d0cc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D0CCu;
    SET_GPR_U32(ctx, 31, 0x17D0D4u);
    ctx->pc = 0x17D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0CCu;
    // 0x17d0d0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D0CCu, 0x17D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0D4u;
label_17d0d4:
    // 0x17d0d4: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x17d0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
    // 0x17d0d8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x17d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x17d0dc: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x17d0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x17d0e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17d0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d0e4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D0E4u;
    SET_GPR_U32(ctx, 31, 0x17D0ECu);
    ctx->pc = 0x17D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0E4u;
    // 0x17d0e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D0E4u, 0x17D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0ECu;
label_17d0ec:
    // 0x17d0ec: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x17d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x17d0f0: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x17d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x17d0f4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D0F4u;
    SET_GPR_U32(ctx, 31, 0x17D0FCu);
    ctx->pc = 0x17D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0F4u;
    // 0x17d0f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D0F4u, 0x17D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0FCu;
label_17d0fc:
    // 0x17d0fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17d100: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D100u;
    {
        const bool branch_taken_0x17d100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D100u;
        // 0x17d104: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d100) {
            ctx->pc = 0x17D11Cu;
            return;
        }
    }
    ctx->pc = 0x17D108u;
    // 0x17d108: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x17d108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x17d10c: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x17d10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x17d110: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D110u;
    SET_GPR_U32(ctx, 31, 0x17D118u);
    ctx->pc = 0x17D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D110u;
    // 0x17d114: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D110u, 0x17D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D118u;
label_17d118:
    // 0x17d118: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x17d118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->pc = 0x17d11cu;
}
