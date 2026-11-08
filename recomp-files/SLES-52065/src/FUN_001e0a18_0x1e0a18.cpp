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

// Function: FUN_001e0a18
// Address: 0x1e0a18 - 0x1e0a90
void FUN_001e0a18_0x1e0a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0a18_0x1e0a18");
#endif

    switch (ctx->pc) {
        case 0x1e0a78u: goto label_1e0a78;
        default: break;
    }

    ctx->pc = 0x1e0a18u;

    // 0x1e0a18: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1e0a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0a20: 0x2ce24000  sltiu       $v0, $a3, 0x4000
    ctx->pc = 0x1e0a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1e0a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0a28: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E0A28u;
    {
        const bool branch_taken_0x1e0a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A28u;
        // 0x1e0a2c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a28) {
            ctx->pc = 0x1E0A80u;
            goto label_1e0a80;
        }
    }
    ctx->pc = 0x1E0A30u;
    // 0x1e0a30: 0x4600013  bltz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E0A30u;
    {
        const bool branch_taken_0x1e0a30 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1E0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A30u;
        // 0x1e0a34: 0x28624000  slti        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a30) {
            ctx->pc = 0x1E0A80u;
            goto label_1e0a80;
        }
    }
    ctx->pc = 0x1E0A38u;
    // 0x1e0a38: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E0A38u;
    {
        const bool branch_taken_0x1e0a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0a38) {
            ctx->pc = 0x1E0A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0A38u;
            // 0x1e0a3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0A84u;
            goto label_1e0a84;
        }
    }
    ctx->pc = 0x1E0A40u;
    // 0x1e0a40: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E0A40u;
    {
        const bool branch_taken_0x1e0a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A40u;
        // 0x1e0a44: 0x4363a  dsrl        $a2, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) >> 24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a40) {
            ctx->pc = 0x1E0A80u;
            goto label_1e0a80;
        }
    }
    ctx->pc = 0x1E0A48u;
    // 0x1e0a48: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x1e0a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x1e0a4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1e0a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1e0a50: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1e0a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1e0a54: 0x852824  and         $a1, $a0, $a1
    ctx->pc = 0x1e0a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e0a58: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1e0a58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1e0a5c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e0a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e0a60: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1e0a60u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1e0a64: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1e0a64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1e0a68: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1e0a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e0a6c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e0a6cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1e0a70: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1E0A70u;
    SET_GPR_U32(ctx, 31, 0x1E0A78u);
    ctx->pc = 0x1E0A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A70u;
    // 0x1e0a74: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1E0A70u, 0x1E0A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A78u;
label_1e0a78:
    // 0x1e0a78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0A78u;
    {
        const bool branch_taken_0x1e0a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A78u;
        // 0x1e0a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a78) {
            ctx->pc = 0x1E0A84u;
            goto label_1e0a84;
        }
    }
    ctx->pc = 0x1E0A80u;
label_1e0a80:
    // 0x1e0a80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e0a84:
    // 0x1e0a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A88u;
        // 0x1e0a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0A90u;
}
