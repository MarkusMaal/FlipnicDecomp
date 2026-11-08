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

// Function: FUN_00192460
// Address: 0x192460 - 0x19254c
void FUN_00192460_0x192460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192460_0x192460");
#endif

    switch (ctx->pc) {
        case 0x192478u: goto label_192478;
        case 0x192518u: goto label_192518;
        case 0x192538u: goto label_192538;
        default: break;
    }

    ctx->pc = 0x192460u;

    // 0x192460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x192460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x192464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19246c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x19246cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x192470: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192470u;
    {
        const bool branch_taken_0x192470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192470u;
        // 0x192474: 0x7fa00010  sq          $zero, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192470) {
            ctx->pc = 0x192494u;
            goto label_192494;
        }
    }
    ctx->pc = 0x192478u;
label_192478:
    // 0x192478: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x192478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19247c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19247Cu;
    {
        const bool branch_taken_0x19247c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19247c) {
            ctx->pc = 0x1924A4u;
            goto label_1924a4;
        }
    }
    ctx->pc = 0x192484u;
    // 0x192484: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x192484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192488: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x192488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x19248c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19248cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x192490: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x192490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_192494:
    // 0x192494: 0x0  nop
    ctx->pc = 0x192494u;
    // NOP
    // 0x192498: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x192498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19249c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19249Cu;
    {
        const bool branch_taken_0x19249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1924A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19249Cu;
        // 0x1924a0: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19249c) {
            ctx->pc = 0x192478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192478;
        }
    }
    ctx->pc = 0x1924A4u;
label_1924a4:
    // 0x1924a4: 0x0  nop
    ctx->pc = 0x1924a4u;
    // NOP
    // 0x1924a8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1924a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1924ac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1924acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1924b0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1924b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1924b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1924b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1924b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1924b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1924bc: 0x7822d6e0  lq          $v0, -0x2920($at)
    ctx->pc = 0x1924bcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x36D6E0u));
    // 0x1924c0: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1924c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1924c4: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x1924c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1924c8: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1924c8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1924cc: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x1924ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1924d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1924d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1924d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1924D4u;
    {
        const bool branch_taken_0x1924d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924D4u;
        // 0x1924d8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924d4) {
            ctx->pc = 0x1924E4u;
            goto label_1924e4;
        }
    }
    ctx->pc = 0x1924DCu;
    // 0x1924dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1924DCu;
    {
        const bool branch_taken_0x1924dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924DCu;
        // 0x1924e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924dc) {
            ctx->pc = 0x192540u;
            goto label_192540;
        }
    }
    ctx->pc = 0x1924E4u;
label_1924e4:
    // 0x1924e4: 0x7822d6f0  lq          $v0, -0x2910($at)
    ctx->pc = 0x1924e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 4294956784)));
    // 0x1924e8: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x1924e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1924ec: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1924ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1924f0: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x1924f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1924f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1924f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1924f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1924F8u;
    {
        const bool branch_taken_0x1924f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924f8) {
            ctx->pc = 0x192520u;
            goto label_192520;
        }
    }
    ctx->pc = 0x192500u;
    // 0x192500: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x192500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x192504: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192508: 0x78820550  lq          $v0, 0x550($a0)
    ctx->pc = 0x192508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x19250c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x19250cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x192510: 0xc063f40  jal         func_18FD00
    ctx->pc = 0x192510u;
    SET_GPR_U32(ctx, 31, 0x192518u);
    ctx->pc = 0x192514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192510u;
    // 0x192514: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x192510u, 0x192518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192518u;
label_192518:
    // 0x192518: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192518u;
    {
        const bool branch_taken_0x192518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192518u;
        // 0x19251c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192518) {
            ctx->pc = 0x19253Cu;
            goto label_19253c;
        }
    }
    ctx->pc = 0x192520u;
label_192520:
    // 0x192520: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192524: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x192524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x192528: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x192528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x19252c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x19252cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x192530: 0xc063f40  jal         func_18FD00
    ctx->pc = 0x192530u;
    SET_GPR_U32(ctx, 31, 0x192538u);
    ctx->pc = 0x192534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192530u;
    // 0x192534: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x192530u, 0x192538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192538u;
label_192538:
    // 0x192538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19253c:
    // 0x19253c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19253cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192540:
    // 0x192540: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x192540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192544: 0x3e00008  jr          $ra
    ctx->pc = 0x192544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192544u;
        // 0x192548: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19254Cu;
}
