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

// Function: entry_00122e2c
// Address: 0x122e2c - 0x122e68
void entry_00122e2c_0x122e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122e2c_0x122e2c");
#endif

    switch (ctx->pc) {
        case 0x122e40u: goto label_122e40;
        case 0x122e60u: goto label_122e60;
        default: break;
    }

    ctx->pc = 0x122e2cu;

    // 0x122e2c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x122E2Cu;
    {
        const bool branch_taken_0x122e2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x122e2c) {
            ctx->pc = 0x122E8Cu;
            return;
        }
    }
    ctx->pc = 0x122E34u;
    // 0x122e34: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x122e34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x122e38: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122E38u;
    SET_GPR_U32(ctx, 31, 0x122E40u);
    ctx->pc = 0x122E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E38u;
    // 0x122e3c: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122E38u, 0x122E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E40u;
label_122e40:
    // 0x122e40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x122e40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e44: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x122E44u;
    {
        const bool branch_taken_0x122e44 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x122E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E44u;
        // 0x122e48: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e44) {
            ctx->pc = 0x122E68u;
            return;
        }
    }
    ctx->pc = 0x122E4Cu;
    // 0x122e4c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122e50: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122e54: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122e58: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122E58u;
    SET_GPR_U32(ctx, 31, 0x122E60u);
    ctx->pc = 0x122E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E58u;
    // 0x122e5c: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122E58u, 0x122E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E60u;
label_122e60:
    // 0x122e60: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122E60u;
    SET_GPR_U32(ctx, 31, 0x122E68u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122E60u, 0x122E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E68u;
}
