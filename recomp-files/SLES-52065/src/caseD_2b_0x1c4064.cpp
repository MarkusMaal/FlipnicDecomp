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

// Function: caseD_2b
// Address: 0x1c4064 - 0x1c40a4
void caseD_2b_0x1c4064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2b_0x1c4064");
#endif

    switch (ctx->pc) {
        case 0x1c4070u: goto label_1c4070;
        case 0x1c407cu: goto label_1c407c;
        case 0x1c4088u: goto label_1c4088;
        case 0x1c4090u: goto label_1c4090;
        default: break;
    }

    ctx->pc = 0x1c4064u;

    // 0x1c4064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4068: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4068u;
    SET_GPR_U32(ctx, 31, 0x1C4070u);
    ctx->pc = 0x1C406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4068u;
    // 0x1c406c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4068u, 0x1C4070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4070u;
label_1c4070:
    // 0x1c4070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4074: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4074u;
    SET_GPR_U32(ctx, 31, 0x1C407Cu);
    ctx->pc = 0x1C4078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4074u;
    // 0x1c4078: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4074u, 0x1C407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C407Cu;
label_1c407c:
    // 0x1c407c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c407cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4080: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4080u;
    SET_GPR_U32(ctx, 31, 0x1C4088u);
    ctx->pc = 0x1C4084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4080u;
    // 0x1c4084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4080u, 0x1C4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4088u;
label_1c4088:
    // 0x1c4088: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C4088u;
    SET_GPR_U32(ctx, 31, 0x1C4090u);
    ctx->pc = 0x1C408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4088u;
    // 0x1c408c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C4088u, 0x1C4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4090u;
label_1c4090:
    // 0x1c4090: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x1C4090u;
    {
        const bool branch_taken_0x1c4090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4090) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C4098u;
    // 0x1c4098: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1c4098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1c409c: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x1C409Cu;
    {
        const bool branch_taken_0x1c409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C409Cu;
        // 0x1c40a0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c409c) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C40A4u;
}
