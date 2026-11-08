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

// Function: FUN_0016ab00
// Address: 0x16ab00 - 0x16ab38
void FUN_0016ab00_0x16ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016ab00_0x16ab00");
#endif

    switch (ctx->pc) {
        case 0x16ab14u: goto label_16ab14;
        case 0x16ab28u: goto label_16ab28;
        default: break;
    }

    ctx->pc = 0x16ab00u;

    // 0x16ab00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ab04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ab08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16ab0c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x16AB0Cu;
    SET_GPR_U32(ctx, 31, 0x16AB14u);
    ctx->pc = 0x16AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB0Cu;
    // 0x16ab10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16AB0Cu, 0x16AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB14u;
label_16ab14:
    // 0x16ab14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16ab14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16ab18: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x16ab18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x16ab1c: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x16ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x16ab20: 0xc04af4c  jal         func_12BD30
    ctx->pc = 0x16AB20u;
    SET_GPR_U32(ctx, 31, 0x16AB28u);
    ctx->pc = 0x16AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB20u;
    // 0x16ab24: 0xae000238  sw          $zero, 0x238($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD30u, 0x16AB20u, 0x16AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB28u;
label_16ab28:
    // 0x16ab28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ab28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ab2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ab2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ab30: 0x3e00008  jr          $ra
    ctx->pc = 0x16AB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB30u;
        // 0x16ab34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AB38u;
}
