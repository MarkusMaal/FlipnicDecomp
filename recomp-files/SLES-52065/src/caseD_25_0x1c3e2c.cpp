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

// Function: caseD_25
// Address: 0x1c3e2c - 0x1c3e64
void caseD_25_0x1c3e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_25_0x1c3e2c");
#endif

    switch (ctx->pc) {
        case 0x1c3e38u: goto label_1c3e38;
        case 0x1c3e44u: goto label_1c3e44;
        case 0x1c3e50u: goto label_1c3e50;
        default: break;
    }

    ctx->pc = 0x1c3e2cu;

    // 0x1c3e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e30: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E30u;
    SET_GPR_U32(ctx, 31, 0x1C3E38u);
    ctx->pc = 0x1C3E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E30u;
    // 0x1c3e34: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E30u, 0x1C3E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E38u;
label_1c3e38:
    // 0x1c3e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e3c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E44u);
    ctx->pc = 0x1C3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E3Cu;
    // 0x1c3e40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E3Cu, 0x1C3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E44u;
label_1c3e44:
    // 0x1c3e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e48: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E48u;
    SET_GPR_U32(ctx, 31, 0x1C3E50u);
    ctx->pc = 0x1C3E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E48u;
    // 0x1c3e4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E48u, 0x1C3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E50u;
label_1c3e50:
    // 0x1c3e50: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x1c3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1c3e54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3e58: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3E58u;
    {
        const bool branch_taken_0x1c3e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E58u;
        // 0x1c3e5c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e58) {
            ctx->pc = 0x1C3E64u;
            return;
        }
    }
    ctx->pc = 0x1C3E60u;
    // 0x1c3e60: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->pc = 0x1c3e64u;
}
