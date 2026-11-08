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

// Function: FUN_001e8d90
// Address: 0x1e8d90 - 0x1e8dc0
void FUN_001e8d90_0x1e8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8d90_0x1e8d90");
#endif

    switch (ctx->pc) {
        case 0x1e8dacu: goto label_1e8dac;
        default: break;
    }

    ctx->pc = 0x1e8d90u;

    // 0x1e8d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8d94: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1e8d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8da0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e8da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8da4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1E8DA4u;
    SET_GPR_U32(ctx, 31, 0x1E8DACu);
    ctx->pc = 0x1E8DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8DA4u;
    // 0x1e8da8: 0x2053023  subu        $a2, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E8DA4u, 0x1E8DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DACu;
label_1e8dac:
    // 0x1e8dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e8dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8db8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DB8u;
        // 0x1e8dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8DC0u;
}
