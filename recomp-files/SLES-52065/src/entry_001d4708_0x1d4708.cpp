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

// Function: entry_001d4708
// Address: 0x1d4708 - 0x1d4758
void entry_001d4708_0x1d4708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4708_0x1d4708");
#endif

    switch (ctx->pc) {
        case 0x1d4720u: goto label_1d4720;
        case 0x1d4744u: goto label_1d4744;
        default: break;
    }

    ctx->pc = 0x1d4708u;

    // 0x1d4708: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D4708u;
    {
        const bool branch_taken_0x1d4708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4708u;
        // 0x1d470c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4708) {
            ctx->pc = 0x1D4758u;
            return;
        }
    }
    ctx->pc = 0x1D4710u;
    // 0x1d4710: 0x54620036  bnel        $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D4710u;
    {
        const bool branch_taken_0x1d4710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4710) {
            ctx->pc = 0x1D4714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4710u;
            // 0x1d4714: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D47ECu;
            return;
        }
    }
    ctx->pc = 0x1D4718u;
    // 0x1d4718: 0xc07512c  jal         func_1D44B0
    ctx->pc = 0x1D4718u;
    SET_GPR_U32(ctx, 31, 0x1D4720u);
    ctx->pc = 0x1D44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B0u, 0x1D4718u, 0x1D4720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4720u;
label_1d4720:
    // 0x1d4720: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d4720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4724: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1d4724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d4728: 0x54600030  bnel        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D4728u;
    {
        const bool branch_taken_0x1d4728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4728) {
            ctx->pc = 0x1D472Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4728u;
            // 0x1d472c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D47ECu;
            return;
        }
    }
    ctx->pc = 0x1D4730u;
    // 0x1d4730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4734: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d4734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d4738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d473c: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D473Cu;
    SET_GPR_U32(ctx, 31, 0x1D4744u);
    ctx->pc = 0x1D4740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D473Cu;
    // 0x1d4740: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D473Cu, 0x1D4744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4744u;
label_1d4744:
    // 0x1d4744: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d4744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4748: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d4748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d474c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1D474Cu;
    {
        const bool branch_taken_0x1d474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D474Cu;
        // 0x1d4750: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d474c) {
            ctx->pc = 0x1D47E8u;
            return;
        }
    }
    ctx->pc = 0x1D4754u;
    // 0x1d4754: 0x0  nop
    ctx->pc = 0x1d4754u;
    // NOP
    ctx->pc = 0x1d4758u;
}
