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

// Function: FUN_00168d20
// Address: 0x168d20 - 0x168d74
void FUN_00168d20_0x168d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168d20_0x168d20");
#endif

    switch (ctx->pc) {
        case 0x168d34u: goto label_168d34;
        case 0x168d44u: goto label_168d44;
        case 0x168d64u: goto label_168d64;
        default: break;
    }

    ctx->pc = 0x168d20u;

    // 0x168d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168d2c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x168D2Cu;
    SET_GPR_U32(ctx, 31, 0x168D34u);
    ctx->pc = 0x168D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D2Cu;
    // 0x168d30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x168D2Cu, 0x168D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D34u;
label_168d34:
    // 0x168d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168d3c: 0xc042570  jal         func_1095C0
    ctx->pc = 0x168D3Cu;
    SET_GPR_U32(ctx, 31, 0x168D44u);
    ctx->pc = 0x168D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D3Cu;
    // 0x168d40: 0xa20001d0  sb          $zero, 0x1D0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x168D3Cu, 0x168D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D44u;
label_168d44:
    // 0x168d44: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x168d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x168d48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d4c: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x168d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x168d50: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x168d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x168d54: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x168d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x168d58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x168d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x168d5c: 0xc046744  jal         func_119D10
    ctx->pc = 0x168D5Cu;
    SET_GPR_U32(ctx, 31, 0x168D64u);
    ctx->pc = 0x168D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D5Cu;
    // 0x168d60: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x168D5Cu, 0x168D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D64u;
label_168d64:
    // 0x168d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x168D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D6Cu;
        // 0x168d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168D74u;
}
