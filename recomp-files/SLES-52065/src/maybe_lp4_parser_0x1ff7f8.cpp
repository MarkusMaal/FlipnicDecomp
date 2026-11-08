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

// Function: maybe_lp4_parser
// Address: 0x1ff7f8 - 0x1ff8a8
void maybe_lp4_parser_0x1ff7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("maybe_lp4_parser_0x1ff7f8");
#endif

    switch (ctx->pc) {
        case 0x1ff81cu: goto label_1ff81c;
        case 0x1ff854u: goto label_1ff854;
        case 0x1ff884u: goto label_1ff884;
        default: break;
    }

    ctx->pc = 0x1ff7f8u;

    // 0x1ff7f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1ff7f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff7fc: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x1ff7fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff800: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FF800u;
    {
        const bool branch_taken_0x1ff800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF800u;
        // 0x1ff804: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff800) {
            ctx->pc = 0x1FF874u;
            goto label_1ff874;
        }
    }
    ctx->pc = 0x1FF808u;
    // 0x1ff808: 0xa81025  or          $v0, $a1, $t0
    ctx->pc = 0x1ff808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1ff80c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1ff80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1ff810: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FF810u;
    {
        const bool branch_taken_0x1ff810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff810) {
            ctx->pc = 0x1FF814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF810u;
            // 0x1ff814: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF878u;
            goto label_1ff878;
        }
    }
    ctx->pc = 0x1FF818u;
    // 0x1ff818: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1ff818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ff81c:
    // 0x1ff81c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1ff81cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff820: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1ff820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1ff824: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1ff824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ff828: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x1ff828u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff82c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1ff82cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1ff830: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1ff830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1ff834: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ff834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff838: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1ff838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ff83c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1ff83cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1ff840: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FF840u;
    {
        const bool branch_taken_0x1ff840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF840u;
        // 0x1ff844: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff840) {
            ctx->pc = 0x1FF81Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff81c;
        }
    }
    ctx->pc = 0x1FF848u;
    // 0x1ff848: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1ff848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ff84c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF84Cu;
    {
        const bool branch_taken_0x1ff84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF84Cu;
        // 0x1ff850: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff84c) {
            ctx->pc = 0x1FF874u;
            goto label_1ff874;
        }
    }
    ctx->pc = 0x1FF854u;
label_1ff854:
    // 0x1ff854: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1ff854u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff858: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x1ff858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1ff85c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ff85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ff860: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1ff860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ff864: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1ff864u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1ff868: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF868u;
    {
        const bool branch_taken_0x1ff868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF868u;
        // 0x1ff86c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff868) {
            ctx->pc = 0x1FF854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff854;
        }
    }
    ctx->pc = 0x1FF870u;
    // 0x1ff870: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1ff870u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ff874:
    // 0x1ff874: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1ff878:
    // 0x1ff878: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff87c: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF87Cu;
    {
        const bool branch_taken_0x1ff87c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF87Cu;
        // 0x1ff880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff87c) {
            ctx->pc = 0x1FF8A0u;
            goto label_1ff8a0;
        }
    }
    ctx->pc = 0x1FF884u;
label_1ff884:
    // 0x1ff884: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1ff884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff888: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ff88c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ff88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ff890: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1ff890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ff894: 0x0  nop
    ctx->pc = 0x1ff894u;
    // NOP
    // 0x1ff898: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF898u;
    {
        const bool branch_taken_0x1ff898 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF898u;
        // 0x1ff89c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff898) {
            ctx->pc = 0x1FF884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff884;
        }
    }
    ctx->pc = 0x1FF8A0u;
label_1ff8a0:
    // 0x1ff8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8A0u;
        // 0x1ff8a4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF8A8u;
}
