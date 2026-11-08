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

// Function: FUN_001e6a50
// Address: 0x1e6a50 - 0x1e6ab0
void FUN_001e6a50_0x1e6a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6a50_0x1e6a50");
#endif

    switch (ctx->pc) {
        case 0x1e6a9cu: goto label_1e6a9c;
        default: break;
    }

    ctx->pc = 0x1e6a50u;

    // 0x1e6a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a60: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E6A60u;
    {
        const bool branch_taken_0x1e6a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A60u;
        // 0x1e6a64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a60) {
            ctx->pc = 0x1E6AA0u;
            goto label_1e6aa0;
        }
    }
    ctx->pc = 0x1E6A68u;
    // 0x1e6a68: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e6a6c: 0x2442c2a0  addiu       $v0, $v0, -0x3D60
    ctx->pc = 0x1e6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951584));
    // 0x1e6a70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6A70u;
    {
        const bool branch_taken_0x1e6a70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A70u;
        // 0x1e6a74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a70) {
            ctx->pc = 0x1E6A84u;
            goto label_1e6a84;
        }
    }
    ctx->pc = 0x1E6A78u;
    // 0x1e6a78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e6a7c: 0x24428850  addiu       $v0, $v0, -0x77B0
    ctx->pc = 0x1e6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936656));
    // 0x1e6a80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e6a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e6a84:
    // 0x1e6a84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e6a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e6a88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e6a88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e6a8c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6A8Cu;
    {
        const bool branch_taken_0x1e6a8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A8Cu;
        // 0x1e6a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a8c) {
            ctx->pc = 0x1E6A9Cu;
            goto label_1e6a9c;
        }
    }
    ctx->pc = 0x1E6A94u;
    // 0x1e6a94: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E6A94u;
    SET_GPR_U32(ctx, 31, 0x1E6A9Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E6A94u, 0x1E6A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6A9Cu;
label_1e6a9c:
    // 0x1e6a9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e6a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6aa0:
    // 0x1e6aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AA8u;
        // 0x1e6aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6AB0u;
}
