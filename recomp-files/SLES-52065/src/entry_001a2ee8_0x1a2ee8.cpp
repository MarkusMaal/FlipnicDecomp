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

// Function: entry_001a2ee8
// Address: 0x1a2ee8 - 0x1a2f24
void entry_001a2ee8_0x1a2ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2ee8_0x1a2ee8");
#endif

    switch (ctx->pc) {
        case 0x1a2f00u: goto label_1a2f00;
        default: break;
    }

    ctx->pc = 0x1a2ee8u;

label_1a2ee8:
    // 0x1a2ee8: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x1a2eec: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a2eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a2ef0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1a2ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a2ef4: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a2ef8: 0xc05704c  jal         func_15C130
    ctx->pc = 0x1A2EF8u;
    SET_GPR_U32(ctx, 31, 0x1A2F00u);
    ctx->pc = 0x1A2EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2EF8u;
    // 0x1a2efc: 0x24080045  addiu       $t0, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x1A2EF8u, 0x1A2F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F00u;
label_1a2f00:
    // 0x1a2f00: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2F00u;
    {
        const bool branch_taken_0x1a2f00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F00u;
        // 0x1a2f04: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f00) {
            ctx->pc = 0x1A2F24u;
            return;
        }
    }
    ctx->pc = 0x1A2F08u;
    // 0x1a2f08: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x1a2f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2f0c: 0x246376d0  addiu       $v1, $v1, 0x76D0
    ctx->pc = 0x1a2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30416));
    // 0x1a2f10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a2f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a2f14: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a2f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a2f18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a2f1c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1A2F1Cu;
    {
        const bool branch_taken_0x1a2f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F1Cu;
        // 0x1a2f20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f1c) {
            ctx->pc = 0x1A2EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2ee8;
        }
    }
    ctx->pc = 0x1A2F24u;
}
