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

// Function: FUN_001e6fd0
// Address: 0x1e6fd0 - 0x1e7010
void FUN_001e6fd0_0x1e6fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6fd0_0x1e6fd0");
#endif

    switch (ctx->pc) {
        case 0x1e6ff0u: goto label_1e6ff0;
        default: break;
    }

    ctx->pc = 0x1e6fd0u;

    // 0x1e6fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6fd4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e6fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e6fd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6fe0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e6fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6fe4: 0xa7a6002e  sh          $a2, 0x2E($sp)
    ctx->pc = 0x1e6fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e6fe8: 0xc07a1d0  jal         func_1E8740
    ctx->pc = 0x1E6FE8u;
    SET_GPR_U32(ctx, 31, 0x1E6FF0u);
    ctx->pc = 0x1E6FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6FE8u;
    // 0x1e6fec: 0x27a5002e  addiu       $a1, $sp, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8740u, 0x1E6FE8u, 0x1E6FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6FF0u;
label_1e6ff0:
    // 0x1e6ff0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1e6ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1e6ff4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e6ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e6ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6ffc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e6ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e7000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7004: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e7004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7008: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7008u;
        // 0x1e700c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7010u;
}
