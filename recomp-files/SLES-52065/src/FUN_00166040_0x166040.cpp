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

// Function: FUN_00166040
// Address: 0x166040 - 0x16609c
void FUN_00166040_0x166040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00166040_0x166040");
#endif

    switch (ctx->pc) {
        case 0x166054u: goto label_166054;
        case 0x16608cu: goto label_16608c;
        default: break;
    }

    ctx->pc = 0x166040u;

    // 0x166040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16604c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x16604Cu;
    SET_GPR_U32(ctx, 31, 0x166054u);
    ctx->pc = 0x166050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16604Cu;
    // 0x166050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16604Cu, 0x166054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166054u;
label_166054:
    // 0x166054: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x166054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    // 0x166058: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x166058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16605c: 0xa6020220  sh          $v0, 0x220($s0)
    ctx->pc = 0x16605cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 2));
    // 0x166060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166064: 0xa6000224  sh          $zero, 0x224($s0)
    ctx->pc = 0x166064u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 0));
    // 0x166068: 0xa202007b  sb          $v0, 0x7B($s0)
    ctx->pc = 0x166068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 123), (uint8_t)GPR_U32(ctx, 2));
    // 0x16606c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166070: 0x80620022  lb          $v0, 0x22($v1)
    ctx->pc = 0x166070u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x166074: 0xa6020226  sh          $v0, 0x226($s0)
    ctx->pc = 0x166074u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 2));
    // 0x166078: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x166078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x16607c: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x16607cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x166080: 0x80650022  lb          $a1, 0x22($v1)
    ctx->pc = 0x166080u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x166084: 0xc0597d8  jal         func_165F60
    ctx->pc = 0x166084u;
    SET_GPR_U32(ctx, 31, 0x16608Cu);
    ctx->pc = 0x166088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166084u;
    // 0x166088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F60u, 0x166084u, 0x16608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16608Cu;
label_16608c:
    // 0x16608c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16608cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166094: 0x3e00008  jr          $ra
    ctx->pc = 0x166094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166094u;
        // 0x166098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16609Cu;
}
