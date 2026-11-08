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

// Function: entry_0019ff50
// Address: 0x19ff50 - 0x19ffa8
void entry_0019ff50_0x19ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ff50_0x19ff50");
#endif

    switch (ctx->pc) {
        case 0x19ff64u: goto label_19ff64;
        default: break;
    }

    ctx->pc = 0x19ff50u;

    // 0x19ff50: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x19ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x19ff54: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x19ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19ff58: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x19ff58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x19ff5c: 0xc057040  jal         func_15C100
    ctx->pc = 0x19FF5Cu;
    SET_GPR_U32(ctx, 31, 0x19FF64u);
    ctx->pc = 0x19FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF5Cu;
    // 0x19ff60: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19FF5Cu, 0x19FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF64u;
label_19ff64:
    // 0x19ff64: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x19ff64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19ff68: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x19ff68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19ff6c: 0x8e490664  lw          $t1, 0x664($s2)
    ctx->pc = 0x19ff6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x19ff70: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19ff74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19ff78: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x19ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x19ff7c: 0x8d26002c  lw          $a2, 0x2C($t1)
    ctx->pc = 0x19ff7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x19ff80: 0x10c30029  beq         $a2, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x19FF80u;
    {
        const bool branch_taken_0x19ff80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x19FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF80u;
        // 0x19ff84: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff80) {
            ctx->pc = 0x1A0028u;
            return;
        }
    }
    ctx->pc = 0x19FF88u;
    // 0x19ff88: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19ff8c: 0x10c30011  beq         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19FF8Cu;
    {
        const bool branch_taken_0x19ff8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ff8c) {
            ctx->pc = 0x19FFD4u;
            return;
        }
    }
    ctx->pc = 0x19FF94u;
    // 0x19ff94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19ff98: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FF98u;
    {
        const bool branch_taken_0x19ff98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ff98) {
            ctx->pc = 0x19FFA8u;
            return;
        }
    }
    ctx->pc = 0x19FFA0u;
    // 0x19ffa0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x19FFA0u;
    {
        const bool branch_taken_0x19ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFA0u;
        // 0x19ffa4: 0x8d270030  lw          $a3, 0x30($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ffa0) {
            ctx->pc = 0x1A0074u;
            return;
        }
    }
    ctx->pc = 0x19FFA8u;
}
