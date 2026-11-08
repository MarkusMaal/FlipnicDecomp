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

// Function: FUN_0013e5f0
// Address: 0x13e5f0 - 0x13e630
void FUN_0013e5f0_0x13e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013e5f0_0x13e5f0");
#endif

    switch (ctx->pc) {
        case 0x13e624u: goto label_13e624;
        default: break;
    }

    ctx->pc = 0x13e5f0u;

    // 0x13e5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e5f8: 0x8c860124  lw          $a2, 0x124($a0)
    ctx->pc = 0x13e5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13e5fc: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E5FCu;
    {
        const bool branch_taken_0x13e5fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e5fc) {
            ctx->pc = 0x13E624u;
            goto label_13e624;
        }
    }
    ctx->pc = 0x13E604u;
    // 0x13e604: 0x8c85017c  lw          $a1, 0x17C($a0)
    ctx->pc = 0x13e604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13e608: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13e608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e60c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E60Cu;
    {
        const bool branch_taken_0x13e60c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E60Cu;
        // 0x13e610: 0x24850010  addiu       $a1, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e60c) {
            ctx->pc = 0x13E624u;
            goto label_13e624;
        }
    }
    ctx->pc = 0x13E614u;
    // 0x13e614: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13e614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13e618: 0xc4cc0004  lwc1        $f12, 0x4($a2)
    ctx->pc = 0x13e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e61c: 0xc05ff20  jal         func_17FC80
    ctx->pc = 0x13E61Cu;
    SET_GPR_U32(ctx, 31, 0x13E624u);
    ctx->pc = 0x13E620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E61Cu;
    // 0x13e620: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC80u, 0x13E61Cu, 0x13E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E624u;
label_13e624:
    // 0x13e624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e628: 0x3e00008  jr          $ra
    ctx->pc = 0x13E628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E628u;
        // 0x13e62c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E630u;
}
