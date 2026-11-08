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

// Function: caseD_14
// Address: 0x1158a0 - 0x11592c
void caseD_14_0x1158a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x1158a0");
#endif

    switch (ctx->pc) {
        case 0x1158a0u: goto label_1158a0;
        case 0x1158a4u: goto label_1158a4;
        case 0x1158a8u: goto label_1158a8;
        case 0x1158acu: goto label_1158ac;
        case 0x1158b0u: goto label_1158b0;
        case 0x1158b4u: goto label_1158b4;
        case 0x1158b8u: goto label_1158b8;
        case 0x1158bcu: goto label_1158bc;
        case 0x1158c0u: goto label_1158c0;
        case 0x1158c4u: goto label_1158c4;
        case 0x1158c8u: goto label_1158c8;
        case 0x1158ccu: goto label_1158cc;
        case 0x1158d0u: goto label_1158d0;
        case 0x1158d4u: goto label_1158d4;
        case 0x1158d8u: goto label_1158d8;
        case 0x1158dcu: goto label_1158dc;
        case 0x1158e0u: goto label_1158e0;
        case 0x1158e4u: goto label_1158e4;
        case 0x1158e8u: goto label_1158e8;
        case 0x1158ecu: goto label_1158ec;
        case 0x1158f0u: goto label_1158f0;
        case 0x1158f4u: goto label_1158f4;
        case 0x1158f8u: goto label_1158f8;
        case 0x1158fcu: goto label_1158fc;
        case 0x115900u: goto label_115900;
        case 0x115904u: goto label_115904;
        case 0x115908u: goto label_115908;
        case 0x11590cu: goto label_11590c;
        case 0x115910u: goto label_115910;
        case 0x115914u: goto label_115914;
        case 0x115918u: goto label_115918;
        case 0x11591cu: goto label_11591c;
        case 0x115920u: goto label_115920;
        case 0x115924u: goto label_115924;
        case 0x115928u: goto label_115928;
        default: break;
    }

    ctx->pc = 0x1158a0u;

label_1158a0:
    // 0x1158a0: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x1158a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1158a4:
    // 0x1158a4: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x1158a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
label_1158a8:
    // 0x1158a8: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1158a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_1158ac:
    // 0x1158ac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1158b0:
    if (ctx->pc == 0x1158B0u) {
        ctx->pc = 0x1158B4u;
        goto label_1158b4;
    }
    ctx->pc = 0x1158ACu;
    {
        const bool branch_taken_0x1158ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1158ac) {
            ctx->pc = 0x11592Cu;
            return;
        }
    }
    ctx->pc = 0x1158B4u;
label_1158b4:
    // 0x1158b4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1158b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1158b8:
    // 0x1158b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1158b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1158bc:
    // 0x1158bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1158bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1158c0:
    // 0x1158c0: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1158c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1158c4:
    // 0x1158c4: 0x320f809  jalr        $t9
label_1158c8:
    if (ctx->pc == 0x1158C8u) {
        ctx->pc = 0x1158C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158C4u;
        // 0x1158c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1158CCu;
        goto label_1158cc;
    }
    ctx->pc = 0x1158C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1158CCu);
        ctx->pc = 0x1158C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158C4u;
        // 0x1158c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1158C4u, 0x1158CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1158CCu;
label_1158cc:
    // 0x1158cc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1158ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1158d0:
    // 0x1158d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1158d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1158d4:
    // 0x1158d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1158d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1158d8:
    // 0x1158d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1158d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1158dc:
    // 0x1158dc: 0x320f809  jalr        $t9
label_1158e0:
    if (ctx->pc == 0x1158E0u) {
        ctx->pc = 0x1158E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158DCu;
        // 0x1158e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1158E4u;
        goto label_1158e4;
    }
    ctx->pc = 0x1158DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1158E4u);
        ctx->pc = 0x1158E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158DCu;
        // 0x1158e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1158DCu, 0x1158E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1158E4u;
label_1158e4:
    // 0x1158e4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1158e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1158e8:
    // 0x1158e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1158e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1158ec:
    // 0x1158ec: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1158ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1158f0:
    // 0x1158f0: 0x320f809  jalr        $t9
label_1158f4:
    if (ctx->pc == 0x1158F4u) {
        ctx->pc = 0x1158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158F0u;
        // 0x1158f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1158F8u;
        goto label_1158f8;
    }
    ctx->pc = 0x1158F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1158F8u);
        ctx->pc = 0x1158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158F0u;
        // 0x1158f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1158F0u, 0x1158F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1158F8u;
label_1158f8:
    // 0x1158f8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1158f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1158fc:
    // 0x1158fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1158fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115900:
    // 0x115900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115904:
    // 0x115904: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115908:
    // 0x115908: 0x320f809  jalr        $t9
label_11590c:
    if (ctx->pc == 0x11590Cu) {
        ctx->pc = 0x11590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115908u;
        // 0x11590c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115910u;
        goto label_115910;
    }
    ctx->pc = 0x115908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115910u);
        ctx->pc = 0x11590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115908u;
        // 0x11590c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115908u, 0x115910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115910u;
label_115910:
    // 0x115910: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x115910u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_115914:
    // 0x115914: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x115914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_115918:
    // 0x115918: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x115918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11591c:
    // 0x11591c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x11591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_115920:
    // 0x115920: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_115924:
    // 0x115924: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_115928:
    // 0x115928: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x115928u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x11592cu;
}
