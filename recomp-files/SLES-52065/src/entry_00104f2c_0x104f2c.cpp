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

// Function: entry_00104f2c
// Address: 0x104f2c - 0x104f5c
void entry_00104f2c_0x104f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104f2c_0x104f2c");
#endif

    switch (ctx->pc) {
        case 0x104f34u: goto label_104f34;
        case 0x104f54u: goto label_104f54;
        default: break;
    }

    ctx->pc = 0x104f2cu;

label_104f2c:
    // 0x104f2c: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x104F2Cu;
    SET_GPR_U32(ctx, 31, 0x104F34u);
    ctx->pc = 0x104F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F2Cu;
    // 0x104f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x104F2Cu, 0x104F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F34u;
label_104f34:
    // 0x104f34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x104f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104f38: 0x26100410  addiu       $s0, $s0, 0x410
    ctx->pc = 0x104f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x104f3c: 0x244443c0  addiu       $a0, $v0, 0x43C0
    ctx->pc = 0x104f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17344));
    // 0x104f40: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x104f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x104f44: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x104F44u;
    {
        const bool branch_taken_0x104f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104f44) {
            ctx->pc = 0x104F2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104f2c;
        }
    }
    ctx->pc = 0x104F4Cu;
    // 0x104f4c: 0xc042914  jal         func_10A450
    ctx->pc = 0x104F4Cu;
    SET_GPR_U32(ctx, 31, 0x104F54u);
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x104F4Cu, 0x104F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F54u;
label_104f54:
    // 0x104f54: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x104f54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104f58: 0x0  nop
    ctx->pc = 0x104f58u;
    // NOP
    ctx->pc = 0x104f5cu;
}
