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

// Function: FUN_00196d80
// Address: 0x196d80 - 0x196de0
void FUN_00196d80_0x196d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196d80_0x196d80");
#endif

    switch (ctx->pc) {
        case 0x196db0u: goto label_196db0;
        case 0x196dc8u: goto label_196dc8;
        default: break;
    }

    ctx->pc = 0x196d80u;

    // 0x196d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x196d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x196d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x196d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d94: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x196D94u;
    {
        const bool branch_taken_0x196d94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D94u;
        // 0x196d98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d94) {
            ctx->pc = 0x196DC8u;
            goto label_196dc8;
        }
    }
    ctx->pc = 0x196D9Cu;
    // 0x196d9c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x196d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x196da0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196da4: 0x2442b290  addiu       $v0, $v0, -0x4D70
    ctx->pc = 0x196da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947472));
    // 0x196da8: 0xc064324  jal         func_190C90
    ctx->pc = 0x196DA8u;
    SET_GPR_U32(ctx, 31, 0x196DB0u);
    ctx->pc = 0x196DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196DA8u;
    // 0x196dac: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x196DA8u, 0x196DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DB0u;
label_196db0:
    // 0x196db0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x196db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x196db4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196db4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196db8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196DB8u;
    {
        const bool branch_taken_0x196db8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x196DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DB8u;
        // 0x196dbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196db8) {
            ctx->pc = 0x196DCCu;
            goto label_196dcc;
        }
    }
    ctx->pc = 0x196DC0u;
    // 0x196dc0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x196DC0u;
    SET_GPR_U32(ctx, 31, 0x196DC8u);
    ctx->pc = 0x196DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196DC0u;
    // 0x196dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x196DC0u, 0x196DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DC8u;
label_196dc8:
    // 0x196dc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x196dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196dcc:
    // 0x196dcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x196dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196dd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x196DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DD8u;
        // 0x196ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196DE0u;
}
