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

// Function: entry_00137cf0
// Address: 0x137cf0 - 0x137d30
void entry_00137cf0_0x137cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137cf0_0x137cf0");
#endif

    switch (ctx->pc) {
        case 0x137d18u: goto label_137d18;
        default: break;
    }

    ctx->pc = 0x137cf0u;

    // 0x137cf0: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x137cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x137cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137cf8: 0x14620074  bne         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x137CF8u;
    {
        const bool branch_taken_0x137cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x137cf8) {
            ctx->pc = 0x137ECCu;
            return;
        }
    }
    ctx->pc = 0x137D00u;
    // 0x137d00: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x137d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x137d04: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x137D04u;
    {
        const bool branch_taken_0x137d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137d04) {
            ctx->pc = 0x137ECCu;
            return;
        }
    }
    ctx->pc = 0x137D0Cu;
    // 0x137d0c: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x137d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x137d10: 0xc040168  jal         func_1005A0
    ctx->pc = 0x137D10u;
    SET_GPR_U32(ctx, 31, 0x137D18u);
    ctx->pc = 0x137D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D10u;
    // 0x137d14: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x137D10u, 0x137D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D18u;
label_137d18:
    // 0x137d18: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x137d18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
    // 0x137d1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d24: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x137d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x137d28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x137D28u;
    {
        const bool branch_taken_0x137d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D28u;
        // 0x137d2c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d28) {
            ctx->pc = 0x137D68u;
            return;
        }
    }
    ctx->pc = 0x137D30u;
}
