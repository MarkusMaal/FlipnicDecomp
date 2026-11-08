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

// Function: StringEqualsIgnoreCase
// Address: 0x11b640 - 0x11b700
void StringEqualsIgnoreCase_0x11b640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StringEqualsIgnoreCase_0x11b640");
#endif

    switch (ctx->pc) {
        case 0x11b64cu: goto label_11b64c;
        default: break;
    }

    ctx->pc = 0x11b640u;

    // 0x11b640: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b644: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b648: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b64c:
    // 0x11b64c: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x11b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x11b650: 0x80690000  lb          $t1, 0x0($v1)
    ctx->pc = 0x11b650u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b654: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B654u;
    {
        const bool branch_taken_0x11b654 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B654u;
        // 0x11b658: 0x29230061  slti        $v1, $t1, 0x61 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)97) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b654) {
            ctx->pc = 0x11B664u;
            goto label_11b664;
        }
    }
    ctx->pc = 0x11B65Cu;
    // 0x11b65c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11B65Cu;
    {
        const bool branch_taken_0x11b65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B65Cu;
        // 0x11b660: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b65c) {
            ctx->pc = 0x11B6F8u;
            goto label_11b6f8;
        }
    }
    ctx->pc = 0x11B664u;
label_11b664:
    // 0x11b664: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B664u;
    {
        const bool branch_taken_0x11b664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B664u;
        // 0x11b668: 0x2921007b  slti        $at, $t1, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b664) {
            ctx->pc = 0x11B67Cu;
            goto label_11b67c;
        }
    }
    ctx->pc = 0x11B66Cu;
    // 0x11b66c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B66Cu;
    {
        const bool branch_taken_0x11b66c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B66Cu;
        // 0x11b670: 0x2523ffe0  addiu       $v1, $t1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b66c) {
            ctx->pc = 0x11B67Cu;
            goto label_11b67c;
        }
    }
    ctx->pc = 0x11B674u;
    // 0x11b674: 0x34e3c  dsll32      $t1, $v1, 24
    ctx->pc = 0x11b674u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 24));
    // 0x11b678: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x11b678u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_11b67c:
    // 0x11b67c: 0x0  nop
    ctx->pc = 0x11b67cu;
    // NOP
    // 0x11b680: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x11b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11b684: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x11b684u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b688: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B688u;
    {
        const bool branch_taken_0x11b688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B688u;
        // 0x11b68c: 0x28830061  slti        $v1, $a0, 0x61 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)97) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b688) {
            ctx->pc = 0x11B698u;
            goto label_11b698;
        }
    }
    ctx->pc = 0x11B690u;
    // 0x11b690: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11B690u;
    {
        const bool branch_taken_0x11b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B690u;
        // 0x11b694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b690) {
            ctx->pc = 0x11B6F8u;
            goto label_11b6f8;
        }
    }
    ctx->pc = 0x11B698u;
label_11b698:
    // 0x11b698: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B698u;
    {
        const bool branch_taken_0x11b698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B698u;
        // 0x11b69c: 0x2881007b  slti        $at, $a0, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b698) {
            ctx->pc = 0x11B6B0u;
            goto label_11b6b0;
        }
    }
    ctx->pc = 0x11B6A0u;
    // 0x11b6a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B6A0u;
    {
        const bool branch_taken_0x11b6a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6A0u;
        // 0x11b6a4: 0x2483ffe0  addiu       $v1, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6a0) {
            ctx->pc = 0x11B6B0u;
            goto label_11b6b0;
        }
    }
    ctx->pc = 0x11B6A8u;
    // 0x11b6a8: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x11b6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x11b6ac: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x11b6acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_11b6b0:
    // 0x11b6b0: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x11b6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x11b6b4: 0x91e3c  dsll32      $v1, $t1, 24
    ctx->pc = 0x11b6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 24));
    // 0x11b6b8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x11b6b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x11b6bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x11b6bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x11b6c0: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B6C0u;
    {
        const bool branch_taken_0x11b6c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b6c0) {
            ctx->pc = 0x11B6E4u;
            goto label_11b6e4;
        }
    }
    ctx->pc = 0x11B6C8u;
    // 0x11b6c8: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B6C8u;
    {
        const bool branch_taken_0x11b6c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b6c8) {
            ctx->pc = 0x11B6D4u;
            goto label_11b6d4;
        }
    }
    ctx->pc = 0x11B6D0u;
    // 0x11b6d0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x11b6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11b6d4:
    // 0x11b6d4: 0x0  nop
    ctx->pc = 0x11b6d4u;
    // NOP
    // 0x11b6d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11b6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x11b6dc: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x11B6DCu;
    {
        const bool branch_taken_0x11b6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6DCu;
        // 0x11b6e0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6dc) {
            ctx->pc = 0x11B64Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b64c;
        }
    }
    ctx->pc = 0x11B6E4u;
label_11b6e4:
    // 0x11b6e4: 0x0  nop
    ctx->pc = 0x11b6e4u;
    // NOP
    // 0x11b6e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b6ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b6ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6f0: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x11B6F0u;
    {
        const bool branch_taken_0x11b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6F0u;
        // 0x11b6f4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6f0) {
            ctx->pc = 0x11B64Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b64c;
        }
    }
    ctx->pc = 0x11B6F8u;
label_11b6f8:
    // 0x11b6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B700u;
}
