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

// Function: FUN_00105ae0
// Address: 0x105ae0 - 0x105b14
void FUN_00105ae0_0x105ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105ae0_0x105ae0");
#endif

    switch (ctx->pc) {
        case 0x105af4u: goto label_105af4;
        default: break;
    }

    ctx->pc = 0x105ae0u;

    // 0x105ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105aec: 0xc056360  jal         func_158D80
    ctx->pc = 0x105AECu;
    SET_GPR_U32(ctx, 31, 0x105AF4u);
    ctx->pc = 0x105AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105AECu;
    // 0x105af0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x105AECu, 0x105AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105AF4u;
label_105af4:
    // 0x105af4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x105af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x105af8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105afc: 0x24637cf0  addiu       $v1, $v1, 0x7CF0
    ctx->pc = 0x105afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31984));
    // 0x105b00: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x105b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x105B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B0Cu;
        // 0x105b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105B14u;
}
