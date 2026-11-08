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

// Function: entry_0018e2b0
// Address: 0x18e2b0 - 0x18e2f8
void entry_0018e2b0_0x18e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e2b0_0x18e2b0");
#endif

    switch (ctx->pc) {
        case 0x18e2c0u: goto label_18e2c0;
        case 0x18e2d4u: goto label_18e2d4;
        case 0x18e2dcu: goto label_18e2dc;
        default: break;
    }

    ctx->pc = 0x18e2b0u;

label_18e2b0:
    // 0x18e2b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18e2b4:
    // 0x18e2b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e2b8:
    // 0x18e2b8: 0xc05f878  jal         func_17E1E0
label_18e2bc:
    if (ctx->pc == 0x18E2BCu) {
        ctx->pc = 0x18E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2B8u;
        // 0x18e2bc: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2C0u;
        goto label_18e2c0;
    }
    ctx->pc = 0x18E2B8u;
    SET_GPR_U32(ctx, 31, 0x18E2C0u);
    ctx->pc = 0x18E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2B8u;
    // 0x18e2bc: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E2B8u, 0x18E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2C0u;
label_18e2c0:
    // 0x18e2c0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18e2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e2c4:
    // 0x18e2c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e2c8:
    // 0x18e2c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x18e2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_18e2cc:
    // 0x18e2cc: 0x320f809  jalr        $t9
label_18e2d0:
    if (ctx->pc == 0x18E2D0u) {
        ctx->pc = 0x18E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2CCu;
        // 0x18e2d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2D4u;
        goto label_18e2d4;
    }
    ctx->pc = 0x18E2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18E2D4u);
        ctx->pc = 0x18E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2CCu;
        // 0x18e2d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E2CCu, 0x18E2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E2D4u;
label_18e2d4:
    // 0x18e2d4: 0xc067f08  jal         func_19FC20
label_18e2d8:
    if (ctx->pc == 0x18E2D8u) {
        ctx->pc = 0x18E2DCu;
        goto label_18e2dc;
    }
    ctx->pc = 0x18E2D4u;
    SET_GPR_U32(ctx, 31, 0x18E2DCu);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18E2D4u, 0x18E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2DCu;
label_18e2dc:
    // 0x18e2dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18e2e0:
    if (ctx->pc == 0x18E2E0u) {
        ctx->pc = 0x18E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2DCu;
        // 0x18e2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2E4u;
        goto label_18e2e4;
    }
    ctx->pc = 0x18E2DCu;
    {
        const bool branch_taken_0x18e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2DCu;
        // 0x18e2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2dc) {
            ctx->pc = 0x18E2F8u;
            return;
        }
    }
    ctx->pc = 0x18E2E4u;
label_18e2e4:
    // 0x18e2e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e2e8:
    // 0x18e2e8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x18e2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_18e2ec:
    // 0x18e2ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18e2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e2f0:
    // 0x18e2f0: 0xc064f00  jal         func_193C00
label_18e2f4:
    if (ctx->pc == 0x18E2F4u) {
        ctx->pc = 0x18E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2F0u;
        // 0x18e2f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2F8u;
        goto label_fallthrough_0x18e2f0;
    }
    ctx->pc = 0x18E2F0u;
    SET_GPR_U32(ctx, 31, 0x18E2F8u);
    ctx->pc = 0x18E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2F0u;
    // 0x18e2f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x18E2F0u, 0x18E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x18e2f0:
    ctx->pc = 0x18E2F8u;
}
