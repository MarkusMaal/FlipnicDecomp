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

// Function: entry_00134c1c
// Address: 0x134c1c - 0x134c60
void entry_00134c1c_0x134c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c1c_0x134c1c");
#endif

    switch (ctx->pc) {
        case 0x134c28u: goto label_134c28;
        case 0x134c3cu: goto label_134c3c;
        case 0x134c58u: goto label_134c58;
        default: break;
    }

    ctx->pc = 0x134c1cu;

    // 0x134c1c: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x134c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x134c20: 0xc080874  jal         func_2021D0
    ctx->pc = 0x134C20u;
    SET_GPR_U32(ctx, 31, 0x134C28u);
    ctx->pc = 0x134C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C20u;
    // 0x134c24: 0x24a5eee8  addiu       $a1, $a1, -0x1118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134C20u, 0x134C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C28u;
label_134c28:
    // 0x134c28: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x134c2c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x134c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x134c30: 0x24a5eea8  addiu       $a1, $a1, -0x1158
    ctx->pc = 0x134c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
    // 0x134c34: 0xc0805e6  jal         func_201798
    ctx->pc = 0x134C34u;
    SET_GPR_U32(ctx, 31, 0x134C3Cu);
    ctx->pc = 0x134C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C34u;
    // 0x134c38: 0x27a60408  addiu       $a2, $sp, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x134C34u, 0x134C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C3Cu;
label_134c3c:
    // 0x134c3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134c40: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x134C40u;
    {
        const bool branch_taken_0x134c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x134c40) {
            ctx->pc = 0x134C60u;
            return;
        }
    }
    ctx->pc = 0x134C48u;
    // 0x134c48: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x134c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x134c4c: 0x8fa60408  lw          $a2, 0x408($sp)
    ctx->pc = 0x134c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x134c50: 0xc04f75c  jal         func_13DD70
    ctx->pc = 0x134C50u;
    SET_GPR_U32(ctx, 31, 0x134C58u);
    ctx->pc = 0x134C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C50u;
    // 0x134c54: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD70u, 0x134C50u, 0x134C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C58u;
label_134c58:
    // 0x134c58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x134C58u;
    {
        const bool branch_taken_0x134c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c58) {
            ctx->pc = 0x134C7Cu;
            return;
        }
    }
    ctx->pc = 0x134C60u;
}
