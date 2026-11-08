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

// Function: entry_00134a58
// Address: 0x134a58 - 0x134aac
void entry_00134a58_0x134a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134a58_0x134a58");
#endif

    switch (ctx->pc) {
        case 0x134a64u: goto label_134a64;
        case 0x134a74u: goto label_134a74;
        case 0x134a90u: goto label_134a90;
        case 0x134aa4u: goto label_134aa4;
        default: break;
    }

    ctx->pc = 0x134a58u;

    // 0x134a58: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x134a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x134a5c: 0xc080702  jal         func_201C08
    ctx->pc = 0x134A5Cu;
    SET_GPR_U32(ctx, 31, 0x134A64u);
    ctx->pc = 0x134A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A5Cu;
    // 0x134a60: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134A5Cu, 0x134A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A64u;
label_134a64:
    // 0x134a64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x134a68: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x134a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x134a6c: 0xc080874  jal         func_2021D0
    ctx->pc = 0x134A6Cu;
    SET_GPR_U32(ctx, 31, 0x134A74u);
    ctx->pc = 0x134A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A6Cu;
    // 0x134a70: 0x24a5eec8  addiu       $a1, $a1, -0x1138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134A6Cu, 0x134A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A74u;
label_134a74:
    // 0x134a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a78: 0x12000080  beqz        $s0, . + 4 + (0x80 << 2)
    ctx->pc = 0x134A78u;
    {
        const bool branch_taken_0x134a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A78u;
        // 0x134a7c: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a78) {
            ctx->pc = 0x134C7Cu;
            return;
        }
    }
    ctx->pc = 0x134A80u;
    // 0x134a80: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x134a80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x134a84: 0x2631eed0  addiu       $s1, $s1, -0x1130
    ctx->pc = 0x134a84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962896));
    // 0x134a88: 0xc04ce58  jal         func_133960
    ctx->pc = 0x134A88u;
    SET_GPR_U32(ctx, 31, 0x134A90u);
    ctx->pc = 0x134A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A88u;
    // 0x134a8c: 0x2694eed8  addiu       $s4, $s4, -0x1128 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133960u, 0x134A88u, 0x134A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A90u;
label_134a90:
    // 0x134a90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x134A90u;
    {
        const bool branch_taken_0x134a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A90u;
        // 0x134a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a90) {
            ctx->pc = 0x134AACu;
            return;
        }
    }
    ctx->pc = 0x134A98u;
    // 0x134a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a9c: 0xc080702  jal         func_201C08
    ctx->pc = 0x134A9Cu;
    SET_GPR_U32(ctx, 31, 0x134AA4u);
    ctx->pc = 0x134AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A9Cu;
    // 0x134aa0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134A9Cu, 0x134AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AA4u;
label_134aa4:
    // 0x134aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134AA4u;
    {
        const bool branch_taken_0x134aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AA4u;
        // 0x134aa8: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134aa4) {
            ctx->pc = 0x134AB8u;
            return;
        }
    }
    ctx->pc = 0x134AACu;
}
