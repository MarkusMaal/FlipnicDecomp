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

// Function: FUN_00168540
// Address: 0x168540 - 0x16857c
void FUN_00168540_0x168540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168540_0x168540");
#endif

    switch (ctx->pc) {
        case 0x168554u: goto label_168554;
        default: break;
    }

    ctx->pc = 0x168540u;

    // 0x168540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16854c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x16854Cu;
    SET_GPR_U32(ctx, 31, 0x168554u);
    ctx->pc = 0x168550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16854Cu;
    // 0x168550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16854Cu, 0x168554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168554u;
label_168554:
    // 0x168554: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x168554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    // 0x168558: 0x8f8385f8  lw          $v1, -0x7A08($gp)
    ctx->pc = 0x168558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x16855c: 0xae030224  sw          $v1, 0x224($s0)
    ctx->pc = 0x16855cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 3));
    // 0x168560: 0x8f8385f8  lw          $v1, -0x7A08($gp)
    ctx->pc = 0x168560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x168564: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x168564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x168568: 0xaf8385f8  sw          $v1, -0x7A08($gp)
    ctx->pc = 0x168568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936056), GPR_U32(ctx, 3));
    // 0x16856c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168574: 0x3e00008  jr          $ra
    ctx->pc = 0x168574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168574u;
        // 0x168578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16857Cu;
}
