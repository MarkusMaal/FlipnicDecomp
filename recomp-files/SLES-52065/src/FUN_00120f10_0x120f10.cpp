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

// Function: FUN_00120f10
// Address: 0x120f10 - 0x120f5c
void FUN_00120f10_0x120f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120f10_0x120f10");
#endif

    switch (ctx->pc) {
        case 0x120f48u: goto label_120f48;
        default: break;
    }

    ctx->pc = 0x120f10u;

    // 0x120f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x120f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x120f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x120f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x120f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x120f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x120f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f20: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x120F20u;
    {
        const bool branch_taken_0x120f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x120F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F20u;
        // 0x120f24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f20) {
            ctx->pc = 0x120F4Cu;
            goto label_120f4c;
        }
    }
    ctx->pc = 0x120F28u;
    // 0x120f28: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x120f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x120f2c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x120f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x120f30: 0x24638850  addiu       $v1, $v1, -0x77B0
    ctx->pc = 0x120f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936656));
    // 0x120f34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x120f34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x120f38: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120F38u;
    {
        const bool branch_taken_0x120f38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x120F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F38u;
        // 0x120f3c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f38) {
            ctx->pc = 0x120F48u;
            goto label_120f48;
        }
    }
    ctx->pc = 0x120F40u;
    // 0x120f40: 0xc0401a4  jal         func_100690
    ctx->pc = 0x120F40u;
    SET_GPR_U32(ctx, 31, 0x120F48u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x120F40u, 0x120F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F48u;
label_120f48:
    // 0x120f48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x120f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120f4c:
    // 0x120f4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x120f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x120f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120f54: 0x3e00008  jr          $ra
    ctx->pc = 0x120F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F54u;
        // 0x120f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120F5Cu;
}
