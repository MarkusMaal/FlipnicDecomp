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

// Function: FUN_001e0b48
// Address: 0x1e0b48 - 0x1e0b98
void FUN_001e0b48_0x1e0b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0b48_0x1e0b48");
#endif

    switch (ctx->pc) {
        case 0x1e0b88u: goto label_1e0b88;
        default: break;
    }

    ctx->pc = 0x1e0b48u;

    // 0x1e0b48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e0b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b4c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x1e0b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1e0b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0b54: 0x5163a  dsrl        $v0, $a1, 24
    ctx->pc = 0x1e0b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 24);
    // 0x1e0b58: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0B58u;
    {
        const bool branch_taken_0x1e0b58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B58u;
        // 0x1e0b5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b58) {
            ctx->pc = 0x1E0B88u;
            goto label_1e0b88;
        }
    }
    ctx->pc = 0x1E0B60u;
    // 0x1e0b60: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x1e0b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x1e0b64: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1e0b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1e0b68: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1e0b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1e0b6c: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x1e0b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1e0b70: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e0b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e0b74: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1e0b74u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1e0b78: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1e0b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e0b7c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e0b7cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1e0b80: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1E0B80u;
    SET_GPR_U32(ctx, 31, 0x1E0B88u);
    ctx->pc = 0x1E0B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0B80u;
    // 0x1e0b84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1E0B80u, 0x1E0B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B88u;
label_1e0b88:
    // 0x1e0b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B90u;
        // 0x1e0b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0B98u;
}
