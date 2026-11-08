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

// Function: FUN_001be2f0
// Address: 0x1be2f0 - 0x1be32c
void FUN_001be2f0_0x1be2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001be2f0_0x1be2f0");
#endif

    switch (ctx->pc) {
        case 0x1be30cu: goto label_1be30c;
        default: break;
    }

    ctx->pc = 0x1be2f0u;

    // 0x1be2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be2f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be2f8: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x1be2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1be2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be300: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1be300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1be304: 0xc06fa08  jal         func_1BE820
    ctx->pc = 0x1BE304u;
    SET_GPR_U32(ctx, 31, 0x1BE30Cu);
    ctx->pc = 0x1BE308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE304u;
    // 0x1be308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE820u, 0x1BE304u, 0x1BE30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE30Cu;
label_1be30c:
    // 0x1be30c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1be30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1be310: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1be310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be314: 0xac30f4e0  sw          $s0, -0xB20($at)
    ctx->pc = 0x1be314u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x36F4E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4E0u, _value); } while (0);
    // 0x1be318: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1be318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1be31c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be324: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE324u;
        // 0x1be328: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE32Cu;
}
