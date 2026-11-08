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

// Function: FUN_00113d70
// Address: 0x113d70 - 0x113dd0
void FUN_00113d70_0x113d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00113d70_0x113d70");
#endif

    switch (ctx->pc) {
        case 0x113da0u: goto label_113da0;
        case 0x113db8u: goto label_113db8;
        default: break;
    }

    ctx->pc = 0x113d70u;

    // 0x113d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x113d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x113d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d84: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x113D84u;
    {
        const bool branch_taken_0x113d84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D84u;
        // 0x113d88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d84) {
            ctx->pc = 0x113DB8u;
            goto label_113db8;
        }
    }
    ctx->pc = 0x113D8Cu;
    // 0x113d8c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x113d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x113d90: 0x24428348  addiu       $v0, $v0, -0x7CB8
    ctx->pc = 0x113d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935368));
    // 0x113d94: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x113d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x113d98: 0xc04018c  jal         func_100630
    ctx->pc = 0x113D98u;
    SET_GPR_U32(ctx, 31, 0x113DA0u);
    ctx->pc = 0x113D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D98u;
    // 0x113d9c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x113D98u, 0x113DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DA0u;
label_113da0:
    // 0x113da0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x113da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x113da4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x113da4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x113da8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113DA8u;
    {
        const bool branch_taken_0x113da8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x113DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DA8u;
        // 0x113dac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113da8) {
            ctx->pc = 0x113DBCu;
            goto label_113dbc;
        }
    }
    ctx->pc = 0x113DB0u;
    // 0x113db0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x113DB0u;
    SET_GPR_U32(ctx, 31, 0x113DB8u);
    ctx->pc = 0x113DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DB0u;
    // 0x113db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x113DB0u, 0x113DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DB8u;
label_113db8:
    // 0x113db8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x113db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113dbc:
    // 0x113dbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x113dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x113DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DC8u;
        // 0x113dcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113DD0u;
}
