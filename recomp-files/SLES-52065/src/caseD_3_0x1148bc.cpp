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

// Function: caseD_3
// Address: 0x1148bc - 0x114914
void caseD_3_0x1148bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1148bc");
#endif

    switch (ctx->pc) {
        case 0x1148bcu: goto label_1148bc;
        case 0x1148c0u: goto label_1148c0;
        case 0x1148c4u: goto label_1148c4;
        case 0x1148c8u: goto label_1148c8;
        case 0x1148ccu: goto label_1148cc;
        case 0x1148d0u: goto label_1148d0;
        case 0x1148d4u: goto label_1148d4;
        case 0x1148d8u: goto label_1148d8;
        case 0x1148dcu: goto label_1148dc;
        case 0x1148e0u: goto label_1148e0;
        case 0x1148e4u: goto label_1148e4;
        case 0x1148e8u: goto label_1148e8;
        case 0x1148ecu: goto label_1148ec;
        case 0x1148f0u: goto label_1148f0;
        case 0x1148f4u: goto label_1148f4;
        case 0x1148f8u: goto label_1148f8;
        case 0x1148fcu: goto label_1148fc;
        case 0x114900u: goto label_114900;
        case 0x114904u: goto label_114904;
        case 0x114908u: goto label_114908;
        case 0x11490cu: goto label_11490c;
        case 0x114910u: goto label_114910;
        default: break;
    }

    ctx->pc = 0x1148bcu;

label_1148bc:
    // 0x1148bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1148bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1148c0:
    // 0x1148c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1148c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1148c4:
    // 0x1148c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1148c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1148c8:
    // 0x1148c8: 0x320f809  jalr        $t9
label_1148cc:
    if (ctx->pc == 0x1148CCu) {
        ctx->pc = 0x1148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148C8u;
        // 0x1148cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148D0u;
        goto label_1148d0;
    }
    ctx->pc = 0x1148C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1148D0u);
        ctx->pc = 0x1148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148C8u;
        // 0x1148cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1148C8u, 0x1148D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1148D0u;
label_1148d0:
    // 0x1148d0: 0x93828258  lbu         $v0, -0x7DA8($gp)
    ctx->pc = 0x1148d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935128)));
label_1148d4:
    // 0x1148d4: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x1148d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1148d8:
    // 0x1148d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1148d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1148dc:
    // 0x1148dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1148dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1148e0:
    // 0x1148e0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1148e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1148e4:
    // 0x1148e4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1148e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1148e8:
    // 0x1148e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1148e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1148ec:
    // 0x1148ec: 0x320f809  jalr        $t9
label_1148f0:
    if (ctx->pc == 0x1148F0u) {
        ctx->pc = 0x1148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148ECu;
        // 0x1148f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148F4u;
        goto label_1148f4;
    }
    ctx->pc = 0x1148ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1148F4u);
        ctx->pc = 0x1148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148ECu;
        // 0x1148f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1148ECu, 0x1148F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1148F4u;
label_1148f4:
    // 0x1148f4: 0x8e420274  lw          $v0, 0x274($s2)
    ctx->pc = 0x1148f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_1148f8:
    // 0x1148f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1148fc:
    if (ctx->pc == 0x1148FCu) {
        ctx->pc = 0x1148FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148F8u;
        // 0x1148fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114900u;
        goto label_114900;
    }
    ctx->pc = 0x1148F8u;
    {
        const bool branch_taken_0x1148f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1148FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148F8u;
        // 0x1148fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148f8) {
            ctx->pc = 0x114914u;
            return;
        }
    }
    ctx->pc = 0x114900u;
label_114900:
    // 0x114900: 0x8e420230  lw          $v0, 0x230($s2)
    ctx->pc = 0x114900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
label_114904:
    // 0x114904: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x114904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_114908:
    // 0x114908: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_11490c:
    if (ctx->pc == 0x11490Cu) {
        ctx->pc = 0x114910u;
        goto label_114910;
    }
    ctx->pc = 0x114908u;
    {
        const bool branch_taken_0x114908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114908) {
            ctx->pc = 0x114914u;
            return;
        }
    }
    ctx->pc = 0x114910u;
label_114910:
    // 0x114910: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x114910u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x114914u;
}
