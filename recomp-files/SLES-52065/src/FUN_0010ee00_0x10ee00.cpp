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

// Function: FUN_0010ee00
// Address: 0x10ee00 - 0x10ee44
void FUN_0010ee00_0x10ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010ee00_0x10ee00");
#endif

    switch (ctx->pc) {
        case 0x10ee20u: goto label_10ee20;
        default: break;
    }

    ctx->pc = 0x10ee00u;

    // 0x10ee00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ee04: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x10ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x10ee08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ee0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10ee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10ee10: 0xac800228  sw          $zero, 0x228($a0)
    ctx->pc = 0x10ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 0));
    // 0x10ee14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ee14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee18: 0xc059720  jal         func_165C80
    ctx->pc = 0x10EE18u;
    SET_GPR_U32(ctx, 31, 0x10EE20u);
    ctx->pc = 0x10EE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE18u;
    // 0x10ee1c: 0xac820230  sw          $v0, 0x230($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C80u, 0x10EE18u, 0x10EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE20u;
label_10ee20:
    // 0x10ee20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ee24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10ee24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ee28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ee2c: 0xa085002b  sb          $a1, 0x2B($a0)
    ctx->pc = 0x10ee2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 5));
    // 0x10ee30: 0xa203007a  sb          $v1, 0x7A($s0)
    ctx->pc = 0x10ee30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 3));
    // 0x10ee34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ee34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ee38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ee38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ee3c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE3Cu;
        // 0x10ee40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EE44u;
}
