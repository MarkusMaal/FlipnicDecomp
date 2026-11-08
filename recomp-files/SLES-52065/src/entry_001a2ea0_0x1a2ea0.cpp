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

// Function: entry_001a2ea0
// Address: 0x1a2ea0 - 0x1a2edc
void entry_001a2ea0_0x1a2ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2ea0_0x1a2ea0");
#endif

    switch (ctx->pc) {
        case 0x1a2eb8u: goto label_1a2eb8;
        default: break;
    }

    ctx->pc = 0x1a2ea0u;

label_1a2ea0:
    // 0x1a2ea0: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x1a2ea4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a2ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a2ea8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1a2ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a2eac: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a2eb0: 0xc05704c  jal         func_15C130
    ctx->pc = 0x1A2EB0u;
    SET_GPR_U32(ctx, 31, 0x1A2EB8u);
    ctx->pc = 0x1A2EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2EB0u;
    // 0x1a2eb4: 0x24080042  addiu       $t0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x1A2EB0u, 0x1A2EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2EB8u;
label_1a2eb8:
    // 0x1a2eb8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2EB8u;
    {
        const bool branch_taken_0x1a2eb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EB8u;
        // 0x1a2ebc: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2eb8) {
            ctx->pc = 0x1A2EDCu;
            return;
        }
    }
    ctx->pc = 0x1A2EC0u;
    // 0x1a2ec0: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x1a2ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2ec4: 0x246376d0  addiu       $v1, $v1, 0x76D0
    ctx->pc = 0x1a2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30416));
    // 0x1a2ec8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a2ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a2ecc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a2eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a2ed0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a2ed4: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1A2ED4u;
    {
        const bool branch_taken_0x1a2ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2ED4u;
        // 0x1a2ed8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ed4) {
            ctx->pc = 0x1A2EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2ea0;
        }
    }
    ctx->pc = 0x1A2EDCu;
}
