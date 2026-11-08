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

// Function: caseD_76
// Address: 0x1d8648 - 0x1d86a0
void caseD_76_0x1d8648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_76_0x1d8648");
#endif

    switch (ctx->pc) {
        case 0x1d8698u: goto label_1d8698;
        default: break;
    }

    ctx->pc = 0x1d8648u;

    // 0x1d8648: 0x8c88054c  lw          $t0, 0x54C($a0)
    ctx->pc = 0x1d8648u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d864c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8650: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d8650u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d8654: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1d8654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d8658: 0x91090004  lbu         $t1, 0x4($t0)
    ctx->pc = 0x1d8658u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1d865c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d865cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8660: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x1d8660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x1d8664: 0x91060005  lbu         $a2, 0x5($t0)
    ctx->pc = 0x1d8664u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x1d8668: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d8668u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1d866c: 0x91030006  lbu         $v1, 0x6($t0)
    ctx->pc = 0x1d866cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x1d8670: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x1d8670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x1d8674: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1d8674u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d8678: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x1d8678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1d867c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1d867cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1d8680: 0x30c600f0  andi        $a2, $a2, 0xF0
    ctx->pc = 0x1d8680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)240);
    // 0x1d8684: 0x31290f00  andi        $t1, $t1, 0xF00
    ctx->pc = 0x1d8684u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3840);
    // 0x1d8688: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d8688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d868c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x1d868cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x1d8690: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D8690u;
    SET_GPR_U32(ctx, 31, 0x1D8698u);
    ctx->pc = 0x1D8694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8690u;
    // 0x1d8694: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D8690u, 0x1D8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8698u;
label_1d8698:
    // 0x1d8698: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1D8698u;
    {
        const bool branch_taken_0x1d8698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8698u;
        // 0x1d869c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8698) {
            ctx->pc = 0x1D8A88u;
            return;
        }
    }
    ctx->pc = 0x1D86A0u;
}
