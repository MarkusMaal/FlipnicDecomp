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

// Function: FUN_00129680
// Address: 0x129680 - 0x1296bc
void FUN_00129680_0x129680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129680_0x129680");
#endif

    switch (ctx->pc) {
        case 0x129694u: goto label_129694;
        default: break;
    }

    ctx->pc = 0x129680u;

    // 0x129680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12968c: 0xc0497a0  jal         func_125E80
    ctx->pc = 0x12968Cu;
    SET_GPR_U32(ctx, 31, 0x129694u);
    ctx->pc = 0x129690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12968Cu;
    // 0x129690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E80u, 0x12968Cu, 0x129694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129694u;
label_129694:
    // 0x129694: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x129694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x129698: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x129698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x12969c: 0x24428a90  addiu       $v0, $v0, -0x7570
    ctx->pc = 0x12969cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937232));
    // 0x1296a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1296a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1296a4: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x1296a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x1296a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1296a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1296acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1296b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1296b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1296b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1296B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1296B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296B4u;
        // 0x1296b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1296B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1296BCu;
}
