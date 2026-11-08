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

// Function: entry_00101f20
// Address: 0x101f20 - 0x101f68
void entry_00101f20_0x101f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101f20_0x101f20");
#endif

    switch (ctx->pc) {
        case 0x101f2cu: goto label_101f2c;
        case 0x101f34u: goto label_101f34;
        case 0x101f54u: goto label_101f54;
        default: break;
    }

    ctx->pc = 0x101f20u;

label_101f20:
    // 0x101f20: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x101f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x101f24: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x101F24u;
    SET_GPR_U32(ctx, 31, 0x101F2Cu);
    ctx->pc = 0x101F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F24u;
    // 0x101f28: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x101F24u, 0x101F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F2Cu;
label_101f2c:
    // 0x101f2c: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x101F2Cu;
    SET_GPR_U32(ctx, 31, 0x101F34u);
    ctx->pc = 0x101F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F2Cu;
    // 0x101f30: 0x8e640028  lw          $a0, 0x28($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x101F2Cu, 0x101F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F34u;
label_101f34:
    // 0x101f34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x101f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x101f38: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x101f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x101f3c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x101F3Cu;
    {
        const bool branch_taken_0x101f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F3Cu;
        // 0x101f40: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f3c) {
            ctx->pc = 0x101F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101f20;
        }
    }
    ctx->pc = 0x101F44u;
    // 0x101f44: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x101f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x101f48: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x101f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x101f4c: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x101F4Cu;
    SET_GPR_U32(ctx, 31, 0x101F54u);
    ctx->pc = 0x101F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F4Cu;
    // 0x101f50: 0x24a52980  addiu       $a1, $a1, 0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x101F4Cu, 0x101F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F54u;
label_101f54:
    // 0x101f54: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x101f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x101f58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x101F58u;
    {
        const bool branch_taken_0x101f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x101f58) {
            ctx->pc = 0x101F68u;
            return;
        }
    }
    ctx->pc = 0x101F60u;
    // 0x101f60: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x101F60u;
    SET_GPR_U32(ctx, 31, 0x101F68u);
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x101F60u, 0x101F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F68u;
}
