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

// Function: FUN_00105db0
// Address: 0x105db0 - 0x105e10
void FUN_00105db0_0x105db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105db0_0x105db0");
#endif

    switch (ctx->pc) {
        case 0x105dfcu: goto label_105dfc;
        default: break;
    }

    ctx->pc = 0x105db0u;

    // 0x105db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105dc0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x105DC0u;
    {
        const bool branch_taken_0x105dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DC0u;
        // 0x105dc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dc0) {
            ctx->pc = 0x105E00u;
            goto label_105e00;
        }
    }
    ctx->pc = 0x105DC8u;
    // 0x105dc8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105dcc: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x105dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x105dd0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105DD0u;
    {
        const bool branch_taken_0x105dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DD0u;
        // 0x105dd4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dd0) {
            ctx->pc = 0x105DE4u;
            goto label_105de4;
        }
    }
    ctx->pc = 0x105DD8u;
    // 0x105dd8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105ddc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x105ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105de0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105de4:
    // 0x105de4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105de8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105de8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105dec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105DECu;
    {
        const bool branch_taken_0x105dec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DECu;
        // 0x105df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dec) {
            ctx->pc = 0x105DFCu;
            goto label_105dfc;
        }
    }
    ctx->pc = 0x105DF4u;
    // 0x105df4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105DF4u;
    SET_GPR_U32(ctx, 31, 0x105DFCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105DF4u, 0x105DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105DFCu;
label_105dfc:
    // 0x105dfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105e00:
    // 0x105e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105e08: 0x3e00008  jr          $ra
    ctx->pc = 0x105E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E08u;
        // 0x105e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105E10u;
}
