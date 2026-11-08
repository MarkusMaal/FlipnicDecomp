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

// Function: FUN_0012c720
// Address: 0x12c720 - 0x12c790
void FUN_0012c720_0x12c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012c720_0x12c720");
#endif

    switch (ctx->pc) {
        case 0x12c784u: goto label_12c784;
        default: break;
    }

    ctx->pc = 0x12c720u;

    // 0x12c720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c728: 0x83838484  lb          $v1, -0x7B7C($gp)
    ctx->pc = 0x12c728u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935684)));
    // 0x12c72c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12C72Cu;
    {
        const bool branch_taken_0x12c72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C72Cu;
        // 0x12c730: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c72c) {
            ctx->pc = 0x12C784u;
            goto label_12c784;
        }
    }
    ctx->pc = 0x12C734u;
    // 0x12c734: 0x80e40066  lb          $a0, 0x66($a3)
    ctx->pc = 0x12c734u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 102)));
    // 0x12c738: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x12c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12c73c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C73Cu;
    {
        const bool branch_taken_0x12c73c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C73Cu;
        // 0x12c740: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c73c) {
            ctx->pc = 0x12C748u;
            goto label_12c748;
        }
    }
    ctx->pc = 0x12C744u;
    // 0x12c744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c748:
    // 0x12c748: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C748u;
    {
        const bool branch_taken_0x12c748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C748u;
        // 0x12c74c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c748) {
            ctx->pc = 0x12C758u;
            goto label_12c758;
        }
    }
    ctx->pc = 0x12C750u;
    // 0x12c750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12C750u;
    {
        const bool branch_taken_0x12c750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C750u;
        // 0x12c754: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c750) {
            ctx->pc = 0x12C764u;
            goto label_12c764;
        }
    }
    ctx->pc = 0x12C758u;
label_12c758:
    // 0x12c758: 0x90e30045  lbu         $v1, 0x45($a3)
    ctx->pc = 0x12c758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 69)));
    // 0x12c75c: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x12c75cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
    // 0x12c760: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x12c760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_12c764:
    // 0x12c764: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C764u;
    {
        const bool branch_taken_0x12c764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x12c764) {
            ctx->pc = 0x12C784u;
            goto label_12c784;
        }
    }
    ctx->pc = 0x12C76Cu;
    // 0x12c76c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x12c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x12c770: 0xa046006c  sb          $a2, 0x6C($v0)
    ctx->pc = 0x12c770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 6));
    // 0x12c774: 0x80e40067  lb          $a0, 0x67($a3)
    ctx->pc = 0x12c774u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 103)));
    // 0x12c778: 0x80e50068  lb          $a1, 0x68($a3)
    ctx->pc = 0x12c778u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 104)));
    // 0x12c77c: 0xc07d97a  jal         func_1F65E8
    ctx->pc = 0x12C77Cu;
    SET_GPR_U32(ctx, 31, 0x12C784u);
    ctx->pc = 0x12C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C77Cu;
    // 0x12c780: 0x24e6006c  addiu       $a2, $a3, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F65E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F65E8u, 0x12C77Cu, 0x12C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C784u;
label_12c784:
    // 0x12c784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c788: 0x3e00008  jr          $ra
    ctx->pc = 0x12C788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C788u;
        // 0x12c78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C790u;
}
