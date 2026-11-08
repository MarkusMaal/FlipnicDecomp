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

// Function: FUN_001188a0
// Address: 0x1188a0 - 0x1188f4
void FUN_001188a0_0x1188a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001188a0_0x1188a0");
#endif

    switch (ctx->pc) {
        case 0x1188b4u: goto label_1188b4;
        case 0x1188bcu: goto label_1188bc;
        case 0x1188c4u: goto label_1188c4;
        case 0x1188ccu: goto label_1188cc;
        case 0x1188d4u: goto label_1188d4;
        default: break;
    }

    ctx->pc = 0x1188a0u;

    // 0x1188a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1188a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1188a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1188a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1188a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1188a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1188ac: 0xc04c2b4  jal         func_130AD0
    ctx->pc = 0x1188ACu;
    SET_GPR_U32(ctx, 31, 0x1188B4u);
    ctx->pc = 0x1188B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1188ACu;
    // 0x1188b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130AD0u, 0x1188ACu, 0x1188B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1188B4u;
label_1188b4:
    // 0x1188b4: 0xc04c2a8  jal         func_130AA0
    ctx->pc = 0x1188B4u;
    SET_GPR_U32(ctx, 31, 0x1188BCu);
    ctx->pc = 0x130AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130AA0u, 0x1188B4u, 0x1188BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1188BCu;
label_1188bc:
    // 0x1188bc: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1188BCu;
    SET_GPR_U32(ctx, 31, 0x1188C4u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1188BCu, 0x1188C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1188C4u;
label_1188c4:
    // 0x1188c4: 0xc04a07c  jal         func_1281F0
    ctx->pc = 0x1188C4u;
    SET_GPR_U32(ctx, 31, 0x1188CCu);
    ctx->pc = 0x1188C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1188C4u;
    // 0x1188c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1281F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1281F0u, 0x1188C4u, 0x1188CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1188CCu;
label_1188cc:
    // 0x1188cc: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x1188CCu;
    SET_GPR_U32(ctx, 31, 0x1188D4u);
    ctx->pc = 0x1188D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1188CCu;
    // 0x1188d0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x1188CCu, 0x1188D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1188D4u;
label_1188d4:
    // 0x1188d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1188d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1188d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1188d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1188dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1188e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1188e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1188e4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1188e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1188e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1188e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1188ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1188F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1188ECu;
        // 0x1188f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1188ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1188F4u;
}
