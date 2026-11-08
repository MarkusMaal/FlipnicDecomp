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

// Function: FUN_0017bae0
// Address: 0x17bae0 - 0x17bb34
void FUN_0017bae0_0x17bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017bae0_0x17bae0");
#endif

    switch (ctx->pc) {
        case 0x17baf4u: goto label_17baf4;
        case 0x17bb18u: goto label_17bb18;
        default: break;
    }

    ctx->pc = 0x17bae0u;

    // 0x17bae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17baec: 0xc05ef54  jal         func_17BD50
    ctx->pc = 0x17BAECu;
    SET_GPR_U32(ctx, 31, 0x17BAF4u);
    ctx->pc = 0x17BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BAECu;
    // 0x17baf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BD50u, 0x17BAECu, 0x17BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BAF4u;
label_17baf4:
    // 0x17baf4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17BAF4u;
    {
        const bool branch_taken_0x17baf4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17baf4) {
            ctx->pc = 0x17BB20u;
            goto label_17bb20;
        }
    }
    ctx->pc = 0x17BAFCu;
    // 0x17bafc: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x17bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x17bb00: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17bb04: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17bb04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17bb08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb0c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17bb10: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17BB10u;
    SET_GPR_U32(ctx, 31, 0x17BB18u);
    ctx->pc = 0x17BB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB10u;
    // 0x17bb14: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17BB10u, 0x17BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB18u;
label_17bb18:
    // 0x17bb18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17BB18u;
    {
        const bool branch_taken_0x17bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB18u;
        // 0x17bb1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb18) {
            ctx->pc = 0x17BB24u;
            goto label_17bb24;
        }
    }
    ctx->pc = 0x17BB20u;
label_17bb20:
    // 0x17bb20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17bb24:
    // 0x17bb24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bb28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB2Cu;
        // 0x17bb30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB34u;
}
