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

// Function: entry_001e8b04
// Address: 0x1e8b04 - 0x1e8b48
void entry_001e8b04_0x1e8b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8b04_0x1e8b04");
#endif

    switch (ctx->pc) {
        case 0x1e8b10u: goto label_1e8b10;
        case 0x1e8b1cu: goto label_1e8b1c;
        case 0x1e8b34u: goto label_1e8b34;
        case 0x1e8b40u: goto label_1e8b40;
        default: break;
    }

    ctx->pc = 0x1e8b04u;

    // 0x1e8b04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e8b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b08: 0xc07a370  jal         func_1E8DC0
    ctx->pc = 0x1E8B08u;
    SET_GPR_U32(ctx, 31, 0x1E8B10u);
    ctx->pc = 0x1E8B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B08u;
    // 0x1e8b0c: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8DC0u, 0x1E8B08u, 0x1E8B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B10u;
label_1e8b10:
    // 0x1e8b10: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x1e8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x1e8b14: 0xc04814c  jal         func_120530
    ctx->pc = 0x1E8B14u;
    SET_GPR_U32(ctx, 31, 0x1E8B1Cu);
    ctx->pc = 0x1E8B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B14u;
    // 0x1e8b18: 0x27c50050  addiu       $a1, $fp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120530u, 0x1E8B14u, 0x1E8B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B1Cu;
label_1e8b1c:
    // 0x1e8b1c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1e8b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x1e8b20: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e8b20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1e8b24: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x1e8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x1e8b28: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x1e8b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x1e8b2c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1E8B2Cu;
    SET_GPR_U32(ctx, 31, 0x1E8B34u);
    ctx->pc = 0x1E8B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B2Cu;
    // 0x1e8b30: 0x24c6ba38  addiu       $a2, $a2, -0x45C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E8B2Cu, 0x1E8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B34u;
label_1e8b34:
    // 0x1e8b34: 0x27c40050  addiu       $a0, $fp, 0x50
    ctx->pc = 0x1e8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x1e8b38: 0xc0482a4  jal         func_120A90
    ctx->pc = 0x1E8B38u;
    SET_GPR_U32(ctx, 31, 0x1E8B40u);
    ctx->pc = 0x1E8B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B38u;
    // 0x1e8b3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A90u, 0x1E8B38u, 0x1E8B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B40u;
label_1e8b40:
    // 0x1e8b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8b44: 0xa3828770  sb          $v0, -0x7890($gp)
    ctx->pc = 0x1e8b44u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936432), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e8b48u;
}
