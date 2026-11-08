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

// Function: FUN_00167a80
// Address: 0x167a80 - 0x167aac
void FUN_00167a80_0x167a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167a80_0x167a80");
#endif

    switch (ctx->pc) {
        case 0x167a94u: goto label_167a94;
        default: break;
    }

    ctx->pc = 0x167a80u;

    // 0x167a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167a8c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x167A8Cu;
    SET_GPR_U32(ctx, 31, 0x167A94u);
    ctx->pc = 0x167A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A8Cu;
    // 0x167a90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x167A8Cu, 0x167A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A94u;
label_167a94:
    // 0x167a94: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x167a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    // 0x167a98: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x167a98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x167a9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x167AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AA4u;
        // 0x167aa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167AACu;
}
