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

// Function: entry_00204710
// Address: 0x204710 - 0x204778
void entry_00204710_0x204710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204710_0x204710");
#endif

    switch (ctx->pc) {
        case 0x204724u: goto label_204724;
        case 0x204770u: goto label_204770;
        default: break;
    }

    ctx->pc = 0x204710u;

    // 0x204710: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x204710u;
    {
        const bool branch_taken_0x204710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204710u;
        // 0x204714: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204710) {
            ctx->pc = 0x204C4Cu;
            return;
        }
    }
    ctx->pc = 0x204718u;
    // 0x204718: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x204718u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x20471c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x20471Cu;
    SET_GPR_U32(ctx, 31, 0x204724u);
    ctx->pc = 0x204720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20471Cu;
    // 0x204720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x20471Cu, 0x204724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204724u;
label_204724:
    // 0x204724: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x204724u;
    {
        const bool branch_taken_0x204724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204724u;
        // 0x204728: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204724) {
            ctx->pc = 0x204888u;
            return;
        }
    }
    ctx->pc = 0x20472Cu;
    // 0x20472c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x20472cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x204730: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x204730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204734: 0x24425208  addiu       $v0, $v0, 0x5208
    ctx->pc = 0x204734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21000));
    // 0x204738: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x204738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x20473c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20473cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204740: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204744: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204748: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20474c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204750: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204754: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204754u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204758: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x20475c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20475Cu;
    {
        const bool branch_taken_0x20475c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20475Cu;
        // 0x204760: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20475c) {
            ctx->pc = 0x204778u;
            return;
        }
    }
    ctx->pc = 0x204764u;
    // 0x204764: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204768: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204768u;
    SET_GPR_U32(ctx, 31, 0x204770u);
    ctx->pc = 0x20476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204768u;
    // 0x20476c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204768u, 0x204770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204770u;
label_204770:
    // 0x204770: 0x14400201  bnez        $v0, . + 4 + (0x201 << 2)
    ctx->pc = 0x204770u;
    {
        const bool branch_taken_0x204770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204770u;
        // 0x204774: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204770) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204778u;
}
