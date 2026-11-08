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

// Function: entry_00100f30
// Address: 0x100f30 - 0x100f70
void entry_00100f30_0x100f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100f30_0x100f30");
#endif

    switch (ctx->pc) {
        case 0x100f38u: goto label_100f38;
        case 0x100f40u: goto label_100f40;
        case 0x100f60u: goto label_100f60;
        default: break;
    }

    ctx->pc = 0x100f30u;

    // 0x100f30: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x100F30u;
    SET_GPR_U32(ctx, 31, 0x100F38u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x100F30u, 0x100F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F38u;
label_100f38:
    // 0x100f38: 0xc04a054  jal         func_128150
    ctx->pc = 0x100F38u;
    SET_GPR_U32(ctx, 31, 0x100F40u);
    ctx->pc = 0x100F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F38u;
    // 0x100f3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128150u, 0x100F38u, 0x100F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F40u;
label_100f40:
    // 0x100f40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x100f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f44: 0x6400044  bltz        $s2, . + 4 + (0x44 << 2)
    ctx->pc = 0x100F44u;
    {
        const bool branch_taken_0x100f44 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x100f44) {
            ctx->pc = 0x101058u;
            return;
        }
    }
    ctx->pc = 0x100F4Cu;
    // 0x100f4c: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x100f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x100f50: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x100f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x100f54: 0x24a5dfb8  addiu       $a1, $a1, -0x2048
    ctx->pc = 0x100f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959032));
    // 0x100f58: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x100F58u;
    SET_GPR_U32(ctx, 31, 0x100F60u);
    ctx->pc = 0x100F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F58u;
    // 0x100f5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x100F58u, 0x100F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F60u;
label_100f60:
    // 0x100f60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100F60u;
    {
        const bool branch_taken_0x100f60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x100F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F60u;
        // 0x100f64: 0x8f838388  lw          $v1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f60) {
            ctx->pc = 0x100F70u;
            return;
        }
    }
    ctx->pc = 0x100F68u;
    // 0x100f68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100F68u;
    {
        const bool branch_taken_0x100f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F68u;
        // 0x100f6c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f68) {
            ctx->pc = 0x100F88u;
            return;
        }
    }
    ctx->pc = 0x100F70u;
}
