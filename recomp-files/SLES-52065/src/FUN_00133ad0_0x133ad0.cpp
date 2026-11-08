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

// Function: FUN_00133ad0
// Address: 0x133ad0 - 0x133b10
void FUN_00133ad0_0x133ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133ad0_0x133ad0");
#endif

    switch (ctx->pc) {
        case 0x133ae4u: goto label_133ae4;
        default: break;
    }

    ctx->pc = 0x133ad0u;

    // 0x133ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133ad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133adc: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x133ADCu;
    SET_GPR_U32(ctx, 31, 0x133AE4u);
    ctx->pc = 0x133AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133ADCu;
    // 0x133ae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x133ADCu, 0x133AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AE4u;
label_133ae4:
    // 0x133ae4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x133ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x133ae8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x133ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133aec: 0x24638cd0  addiu       $v1, $v1, -0x7330
    ctx->pc = 0x133aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937808));
    // 0x133af0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x133af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x133af4: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x133af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x133af8: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x133af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x133afc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x133afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x133b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133b08: 0x3e00008  jr          $ra
    ctx->pc = 0x133B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B08u;
        // 0x133b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133B10u;
}
