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

// Function: FUN_001d4c50
// Address: 0x1d4c50 - 0x1d4cac
void FUN_001d4c50_0x1d4c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4c50_0x1d4c50");
#endif

    switch (ctx->pc) {
        case 0x1d4c6cu: goto label_1d4c6c;
        case 0x1d4c74u: goto label_1d4c74;
        default: break;
    }

    ctx->pc = 0x1d4c50u;

    // 0x1d4c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d4c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d4c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d4c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d4c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d4c64: 0xc0751fe  jal         func_1D47F8
    ctx->pc = 0x1D4C64u;
    SET_GPR_U32(ctx, 31, 0x1D4C6Cu);
    ctx->pc = 0x1D4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C64u;
    // 0x1d4c68: 0x8e11022c  lw          $s1, 0x22C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D47F8u, 0x1D4C64u, 0x1D4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C6Cu;
label_1d4c6c:
    // 0x1d4c6c: 0xc075270  jal         func_1D49C0
    ctx->pc = 0x1D4C6Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C74u);
    ctx->pc = 0x1D4C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C6Cu;
    // 0x1d4c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C0u, 0x1D4C6Cu, 0x1D4C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C74u;
label_1d4c74:
    // 0x1d4c74: 0x8e02022c  lw          $v0, 0x22C($s0)
    ctx->pc = 0x1d4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1d4c78: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4C78u;
    {
        const bool branch_taken_0x1d4c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D4C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C78u;
        // 0x1d4c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c78) {
            ctx->pc = 0x1D4C98u;
            goto label_1d4c98;
        }
    }
    ctx->pc = 0x1D4C80u;
    // 0x1d4c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4c84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4c88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4c8c: 0x80751fe  j           func_1D47F8
    ctx->pc = 0x1D4C8Cu;
    ctx->pc = 0x1D4C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C8Cu;
    // 0x1d4c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D47F8u;
    FUN_001d47f8_0x1d47f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D4C94u;
    // 0x1d4c94: 0x0  nop
    ctx->pc = 0x1d4c94u;
    // NOP
label_1d4c98:
    // 0x1d4c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4c9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CA4u;
        // 0x1d4ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4CACu;
}
