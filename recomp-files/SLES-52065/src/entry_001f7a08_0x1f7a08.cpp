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

// Function: entry_001f7a08
// Address: 0x1f7a08 - 0x1f7a44
void entry_001f7a08_0x1f7a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7a08_0x1f7a08");
#endif

    switch (ctx->pc) {
        case 0x1f7a1cu: goto label_1f7a1c;
        case 0x1f7a40u: goto label_1f7a40;
        default: break;
    }

    ctx->pc = 0x1f7a08u;

    // 0x1f7a08: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f7a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a10: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x1f7a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x1f7a14: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F7A14u;
    SET_GPR_U32(ctx, 31, 0x1F7A1Cu);
    ctx->pc = 0x1F7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7A14u;
    // 0x1f7a18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F7A14u, 0x1F7A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A1Cu;
label_1f7a1c:
    // 0x1f7a1c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F7A1Cu;
    {
        const bool branch_taken_0x1f7a1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f7a1c) {
            ctx->pc = 0x1F7A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A1Cu;
            // 0x1f7a20: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A6Cu;
            return;
        }
    }
    ctx->pc = 0x1F7A24u;
    // 0x1f7a24: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7a28: 0x8c43bb10  lw          $v1, -0x44F0($v0)
    ctx->pc = 0x1f7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BB10u));
    // 0x1f7a2c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7A2Cu;
    {
        const bool branch_taken_0x1f7a2c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F7A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A2Cu;
        // 0x1f7a30: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a2c) {
            ctx->pc = 0x1F7A44u;
            return;
        }
    }
    ctx->pc = 0x1F7A34u;
    // 0x1f7a34: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7a38: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7A38u;
    SET_GPR_U32(ctx, 31, 0x1F7A40u);
    ctx->pc = 0x1F7A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7A38u;
    // 0x1f7a3c: 0x24844780  addiu       $a0, $a0, 0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7A38u, 0x1F7A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A40u;
label_1f7a40:
    // 0x1f7a40: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x1f7a44u;
}
