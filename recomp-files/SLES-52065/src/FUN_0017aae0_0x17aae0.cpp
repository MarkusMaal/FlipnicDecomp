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

// Function: FUN_0017aae0
// Address: 0x17aae0 - 0x17ab10
void FUN_0017aae0_0x17aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017aae0_0x17aae0");
#endif

    switch (ctx->pc) {
        case 0x17aaf4u: goto label_17aaf4;
        case 0x17ab00u: goto label_17ab00;
        default: break;
    }

    ctx->pc = 0x17aae0u;

    // 0x17aae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17aae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17aae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17aaec: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x17AAECu;
    SET_GPR_U32(ctx, 31, 0x17AAF4u);
    ctx->pc = 0x17AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AAECu;
    // 0x17aaf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x17AAECu, 0x17AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AAF4u;
label_17aaf4:
    // 0x17aaf4: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x17aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x17aaf8: 0xc05a8f0  jal         func_16A3C0
    ctx->pc = 0x17AAF8u;
    SET_GPR_U32(ctx, 31, 0x17AB00u);
    ctx->pc = 0x17AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AAF8u;
    // 0x17aafc: 0xa20001d0  sb          $zero, 0x1D0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A3C0u, 0x17AAF8u, 0x17AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB00u;
label_17ab00:
    // 0x17ab00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ab00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ab04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ab04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ab08: 0x3e00008  jr          $ra
    ctx->pc = 0x17AB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB08u;
        // 0x17ab0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AB10u;
}
