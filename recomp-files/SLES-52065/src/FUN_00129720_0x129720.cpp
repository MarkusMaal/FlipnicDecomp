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

// Function: FUN_00129720
// Address: 0x129720 - 0x129780
void FUN_00129720_0x129720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129720_0x129720");
#endif

    switch (ctx->pc) {
        case 0x12973cu: goto label_12973c;
        case 0x129748u: goto label_129748;
        case 0x129758u: goto label_129758;
        case 0x129768u: goto label_129768;
        default: break;
    }

    ctx->pc = 0x129720u;

    // 0x129720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12972c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12972cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129730: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x129730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x129734: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x129734u;
    SET_GPR_U32(ctx, 31, 0x12973Cu);
    ctx->pc = 0x129738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129734u;
    // 0x129738: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x129734u, 0x12973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12973Cu;
label_12973c:
    // 0x12973c: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x12973cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x129740: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x129740u;
    SET_GPR_U32(ctx, 31, 0x129748u);
    ctx->pc = 0x129744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129740u;
    // 0x129744: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x129740u, 0x129748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129748u;
label_129748:
    // 0x129748: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x129748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x12974c: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x12974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x129750: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x129750u;
    SET_GPR_U32(ctx, 31, 0x129758u);
    ctx->pc = 0x129754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129750u;
    // 0x129754: 0x260600b0  addiu       $a2, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x129750u, 0x129758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129758u;
label_129758:
    // 0x129758: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x129758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x12975c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x12975cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x129760: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x129760u;
    SET_GPR_U32(ctx, 31, 0x129768u);
    ctx->pc = 0x129764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129760u;
    // 0x129764: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x129760u, 0x129768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129768u;
label_129768:
    // 0x129768: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x129768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x12976c: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x12976cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x129770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x129770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129778: 0x3e00008  jr          $ra
    ctx->pc = 0x129778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129778u;
        // 0x12977c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129780u;
}
