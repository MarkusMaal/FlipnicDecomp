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

// Function: FUN_001074f0
// Address: 0x1074f0 - 0x10755c
void FUN_001074f0_0x1074f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001074f0_0x1074f0");
#endif

    switch (ctx->pc) {
        case 0x107510u: goto label_107510;
        case 0x10752cu: goto label_10752c;
        case 0x10753cu: goto label_10753c;
        default: break;
    }

    ctx->pc = 0x1074f0u;

    // 0x1074f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1074f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1074f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1074f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1074f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1074f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1074fc: 0x24a5e1e0  addiu       $a1, $a1, -0x1E20
    ctx->pc = 0x1074fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959584));
    // 0x107500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x107500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x107504: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x107504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x107508: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x107508u;
    SET_GPR_U32(ctx, 31, 0x107510u);
    ctx->pc = 0x10750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107508u;
    // 0x10750c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x107508u, 0x107510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107510u;
label_107510:
    // 0x107510: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107510u;
    {
        const bool branch_taken_0x107510 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x107514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107510u;
        // 0x107514: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107510) {
            ctx->pc = 0x107520u;
            goto label_107520;
        }
    }
    ctx->pc = 0x107518u;
    // 0x107518: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x107518u;
    {
        const bool branch_taken_0x107518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107518u;
        // 0x10751c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107518) {
            ctx->pc = 0x10754Cu;
            goto label_10754c;
        }
    }
    ctx->pc = 0x107520u;
label_107520:
    // 0x107520: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x107520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107524: 0xc05f750  jal         func_17DD40
    ctx->pc = 0x107524u;
    SET_GPR_U32(ctx, 31, 0x10752Cu);
    ctx->pc = 0x107528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107524u;
    // 0x107528: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DD40u, 0x107524u, 0x10752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10752Cu;
label_10752c:
    // 0x10752c: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x10752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x107530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107534: 0xc062d64  jal         func_18B590
    ctx->pc = 0x107534u;
    SET_GPR_U32(ctx, 31, 0x10753Cu);
    ctx->pc = 0x107538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107534u;
    // 0x107538: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B590u, 0x107534u, 0x10753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10753Cu;
label_10753c:
    // 0x10753c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10753cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107540: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x107540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107544: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x107544u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x107548: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x107548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10754c:
    // 0x10754c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10754cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x107550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107554: 0x3e00008  jr          $ra
    ctx->pc = 0x107554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107554u;
        // 0x107558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10755Cu;
}
