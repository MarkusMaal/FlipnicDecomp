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

// Function: FUN_001013e0
// Address: 0x1013e0 - 0x101420
void FUN_001013e0_0x1013e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001013e0_0x1013e0");
#endif

    switch (ctx->pc) {
        case 0x1013f4u: goto label_1013f4;
        default: break;
    }

    ctx->pc = 0x1013e0u;

    // 0x1013e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1013e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1013e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1013e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1013e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1013e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1013ec: 0xc045c98  jal         func_117260
    ctx->pc = 0x1013ECu;
    SET_GPR_U32(ctx, 31, 0x1013F4u);
    ctx->pc = 0x1013F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013ECu;
    // 0x1013f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1013ECu, 0x1013F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013F4u;
label_1013f4:
    // 0x1013f4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1013f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1013f8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1013f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1013fc: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1013fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x101400: 0x246378b0  addiu       $v1, $v1, 0x78B0
    ctx->pc = 0x101400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30896));
    // 0x101404: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x101404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x101408: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x101408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x10140c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10140cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x101410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101418: 0x3e00008  jr          $ra
    ctx->pc = 0x101418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101418u;
        // 0x10141c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101420u;
}
