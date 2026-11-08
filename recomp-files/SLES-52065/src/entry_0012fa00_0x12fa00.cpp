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

// Function: entry_0012fa00
// Address: 0x12fa00 - 0x12fa40
void entry_0012fa00_0x12fa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fa00_0x12fa00");
#endif

    switch (ctx->pc) {
        case 0x12fa28u: goto label_12fa28;
        default: break;
    }

    ctx->pc = 0x12fa00u;

    // 0x12fa00: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x12fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x12fa04: 0x24423670  addiu       $v0, $v0, 0x3670
    ctx->pc = 0x12fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13936));
    // 0x12fa08: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x12fa08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12fa0c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x12fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12fa10: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x12fa10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12fa14: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x12FA14u;
    {
        const bool branch_taken_0x12fa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA14u;
        // 0x12fa18: 0x26950004  addiu       $s5, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa14) {
            ctx->pc = 0x12F9E4u;
            return;
        }
    }
    ctx->pc = 0x12FA1Cu;
    // 0x12fa1c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x12fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12fa20: 0xc04018c  jal         func_100630
    ctx->pc = 0x12FA20u;
    SET_GPR_U32(ctx, 31, 0x12FA28u);
    ctx->pc = 0x12FA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA20u;
    // 0x12fa24: 0x26910008  addiu       $s1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x12FA20u, 0x12FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA28u;
label_12fa28:
    // 0x12fa28: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x12fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x12fa2c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x12fa2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x12fa30: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x12fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x12fa34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12fa34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12fa38: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x12fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x12fa3c: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x12fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x12fa40u;
}
