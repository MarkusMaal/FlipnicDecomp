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

// Function: entry_001ebaf0
// Address: 0x1ebaf0 - 0x1ebb38
void entry_001ebaf0_0x1ebaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebaf0_0x1ebaf0");
#endif

    switch (ctx->pc) {
        case 0x1ebb14u: goto label_1ebb14;
        default: break;
    }

    ctx->pc = 0x1ebaf0u;

label_1ebaf0:
    // 0x1ebaf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ebaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ebaf4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ebaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ebaf8: 0x0  nop
    ctx->pc = 0x1ebaf8u;
    // NOP
    // 0x1ebafc: 0x0  nop
    ctx->pc = 0x1ebafcu;
    // NOP
    // 0x1ebb00: 0x0  nop
    ctx->pc = 0x1ebb00u;
    // NOP
    // 0x1ebb04: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EBB04u;
    {
        const bool branch_taken_0x1ebb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb04) {
            ctx->pc = 0x1EBAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebaf0;
        }
    }
    ctx->pc = 0x1EBB0Cu;
    // 0x1ebb0c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EBB0Cu;
    SET_GPR_U32(ctx, 31, 0x1EBB14u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EBB0Cu, 0x1EBB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB14u;
label_1ebb14:
    // 0x1ebb14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ebb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ebb18: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ebb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ebb1c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1ebb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1ebb20: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ebb20u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4));
    // 0x1ebb24: 0xf  sync
    ctx->pc = 0x1ebb24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebb28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBB28u;
    {
        const bool branch_taken_0x1ebb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB28u;
        // 0x1ebb2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb28) {
            ctx->pc = 0x1EBB38u;
            return;
        }
    }
    ctx->pc = 0x1EBB30u;
    // 0x1ebb30: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1EBB30u;
    ctx->pc = 0x1EBB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB30u;
    // 0x1ebb34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1EBB38u;
}
