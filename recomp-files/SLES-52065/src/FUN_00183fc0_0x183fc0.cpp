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

// Function: FUN_00183fc0
// Address: 0x183fc0 - 0x184004
void FUN_00183fc0_0x183fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00183fc0_0x183fc0");
#endif

    switch (ctx->pc) {
        case 0x183ff0u: goto label_183ff0;
        default: break;
    }

    ctx->pc = 0x183fc0u;

    // 0x183fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183fc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183fd0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183FD0u;
    {
        const bool branch_taken_0x183fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FD0u;
        // 0x183fd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fd0) {
            ctx->pc = 0x183FF4u;
            goto label_183ff4;
        }
    }
    ctx->pc = 0x183FD8u;
    // 0x183fd8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x183fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x183fdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x183fdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x183fe0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183FE0u;
    {
        const bool branch_taken_0x183fe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x183fe0) {
            ctx->pc = 0x183FF0u;
            goto label_183ff0;
        }
    }
    ctx->pc = 0x183FE8u;
    // 0x183fe8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x183FE8u;
    SET_GPR_U32(ctx, 31, 0x183FF0u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x183FE8u, 0x183FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183FF0u;
label_183ff0:
    // 0x183ff0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x183ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183ff4:
    // 0x183ff4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183ff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x183FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FFCu;
        // 0x184000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184004u;
}
