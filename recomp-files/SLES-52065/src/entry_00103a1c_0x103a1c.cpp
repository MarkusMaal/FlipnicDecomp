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

// Function: entry_00103a1c
// Address: 0x103a1c - 0x103a64
void entry_00103a1c_0x103a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103a1c_0x103a1c");
#endif

    switch (ctx->pc) {
        case 0x103a24u: goto label_103a24;
        case 0x103a34u: goto label_103a34;
        case 0x103a54u: goto label_103a54;
        default: break;
    }

    ctx->pc = 0x103a1cu;

    // 0x103a1c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103A1Cu;
    SET_GPR_U32(ctx, 31, 0x103A24u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103A1Cu, 0x103A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A24u;
label_103a24:
    // 0x103a24: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x103A24u;
    {
        const bool branch_taken_0x103a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A24u;
        // 0x103a28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a24) {
            ctx->pc = 0x103A64u;
            return;
        }
    }
    ctx->pc = 0x103A2Cu;
    // 0x103a2c: 0xc041860  jal         func_106180
    ctx->pc = 0x103A2Cu;
    SET_GPR_U32(ctx, 31, 0x103A34u);
    ctx->pc = 0x103A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A2Cu;
    // 0x103a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103A2Cu, 0x103A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A34u;
label_103a34:
    // 0x103a34: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103a38: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103a3c: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x103a40: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x103a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x103a44: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103a48: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x103a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x103a4c: 0xc041858  jal         func_106160
    ctx->pc = 0x103A4Cu;
    SET_GPR_U32(ctx, 31, 0x103A54u);
    ctx->pc = 0x103A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A4Cu;
    // 0x103a50: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106160u, 0x103A4Cu, 0x103A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A54u;
label_103a54:
    // 0x103a54: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103a58: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x103a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x103a5c: 0x2442aee0  addiu       $v0, $v0, -0x5120
    ctx->pc = 0x103a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946528));
    // 0x103a60: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103a64u;
}
