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

// Function: caseD_2
// Address: 0x1ea090 - 0x1ea0e8
void caseD_2_0x1ea090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ea090");
#endif

    switch (ctx->pc) {
        case 0x1ea090u: goto label_1ea090;
        case 0x1ea094u: goto label_1ea094;
        case 0x1ea098u: goto label_1ea098;
        case 0x1ea09cu: goto label_1ea09c;
        case 0x1ea0a0u: goto label_1ea0a0;
        case 0x1ea0a4u: goto label_1ea0a4;
        case 0x1ea0a8u: goto label_1ea0a8;
        case 0x1ea0acu: goto label_1ea0ac;
        case 0x1ea0b0u: goto label_1ea0b0;
        case 0x1ea0b4u: goto label_1ea0b4;
        case 0x1ea0b8u: goto label_1ea0b8;
        case 0x1ea0bcu: goto label_1ea0bc;
        case 0x1ea0c0u: goto label_1ea0c0;
        case 0x1ea0c4u: goto label_1ea0c4;
        case 0x1ea0c8u: goto label_1ea0c8;
        case 0x1ea0ccu: goto label_1ea0cc;
        case 0x1ea0d0u: goto label_1ea0d0;
        case 0x1ea0d4u: goto label_1ea0d4;
        case 0x1ea0d8u: goto label_1ea0d8;
        case 0x1ea0dcu: goto label_1ea0dc;
        case 0x1ea0e0u: goto label_1ea0e0;
        case 0x1ea0e4u: goto label_1ea0e4;
        default: break;
    }

    ctx->pc = 0x1ea090u;

label_1ea090:
    // 0x1ea090: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea094:
    // 0x1ea094: 0xc07a59c  jal         func_1E9670
label_1ea098:
    if (ctx->pc == 0x1EA098u) {
        ctx->pc = 0x1EA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA094u;
        // 0x1ea098: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA09Cu;
        goto label_1ea09c;
    }
    ctx->pc = 0x1EA094u;
    SET_GPR_U32(ctx, 31, 0x1EA09Cu);
    ctx->pc = 0x1EA098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA094u;
    // 0x1ea098: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA094u, 0x1EA09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA09Cu;
label_1ea09c:
    // 0x1ea09c: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x1ea09cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ea0a0:
    // 0x1ea0a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ea0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0a4:
    // 0x1ea0a4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1ea0a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ea0a8:
    // 0x1ea0a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea0ac:
    // 0x1ea0ac: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1ea0acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea0b0:
    // 0x1ea0b0: 0x8e880018  lw          $t0, 0x18($s4)
    ctx->pc = 0x1ea0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea0b4:
    // 0x1ea0b4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ea0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ea0b8:
    // 0x1ea0b8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1ea0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1ea0bc:
    // 0x1ea0bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ea0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1ea0c0:
    // 0x1ea0c0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1ea0c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ea0c4:
    // 0x1ea0c4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1ea0c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1ea0c8:
    // 0x1ea0c8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ea0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1ea0cc:
    // 0x1ea0cc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ea0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ea0d0:
    // 0x1ea0d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ea0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ea0d4:
    // 0x1ea0d4: 0x40f809  jalr        $v0
label_1ea0d8:
    if (ctx->pc == 0x1EA0D8u) {
        ctx->pc = 0x1EA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0D4u;
        // 0x1ea0d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0DCu;
        goto label_1ea0dc;
    }
    ctx->pc = 0x1EA0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA0DCu);
        ctx->pc = 0x1EA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0D4u;
        // 0x1ea0d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA0D4u, 0x1EA0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA0DCu;
label_1ea0dc:
    // 0x1ea0dc: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1ea0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ea0e0:
    // 0x1ea0e0: 0x100001bf  b           . + 4 + (0x1BF << 2)
label_1ea0e4:
    if (ctx->pc == 0x1EA0E4u) {
        ctx->pc = 0x1EA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0E0u;
        // 0x1ea0e4: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0E8u;
        goto label_fallthrough_0x1ea0e0;
    }
    ctx->pc = 0x1EA0E0u;
    {
        const bool branch_taken_0x1ea0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0E0u;
        // 0x1ea0e4: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0e0) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
label_fallthrough_0x1ea0e0:
    ctx->pc = 0x1EA0E8u;
}
