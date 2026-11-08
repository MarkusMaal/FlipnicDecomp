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

// Function: FUN_001e0af8
// Address: 0x1e0af8 - 0x1e0b48
void FUN_001e0af8_0x1e0af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0af8_0x1e0af8");
#endif

    switch (ctx->pc) {
        case 0x1e0b38u: goto label_1e0b38;
        default: break;
    }

    ctx->pc = 0x1e0af8u;

    // 0x1e0af8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e0af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0afc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1e0afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1e0b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0b04: 0x5163a  dsrl        $v0, $a1, 24
    ctx->pc = 0x1e0b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 24);
    // 0x1e0b08: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0B08u;
    {
        const bool branch_taken_0x1e0b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B08u;
        // 0x1e0b0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b08) {
            ctx->pc = 0x1E0B38u;
            goto label_1e0b38;
        }
    }
    ctx->pc = 0x1E0B10u;
    // 0x1e0b10: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x1e0b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x1e0b14: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1e0b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1e0b18: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1e0b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1e0b1c: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x1e0b1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1e0b20: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e0b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e0b24: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1e0b24u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1e0b28: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1e0b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e0b2c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e0b2cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1e0b30: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1E0B30u;
    SET_GPR_U32(ctx, 31, 0x1E0B38u);
    ctx->pc = 0x1E0B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0B30u;
    // 0x1e0b34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1E0B30u, 0x1E0B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B38u;
label_1e0b38:
    // 0x1e0b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b40: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B40u;
        // 0x1e0b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0B48u;
}
