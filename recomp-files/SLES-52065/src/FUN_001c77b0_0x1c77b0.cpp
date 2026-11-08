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

// Function: FUN_001c77b0
// Address: 0x1c77b0 - 0x1c7834
void FUN_001c77b0_0x1c77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c77b0_0x1c77b0");
#endif

    switch (ctx->pc) {
        case 0x1c77d4u: goto label_1c77d4;
        case 0x1c77e8u: goto label_1c77e8;
        case 0x1c77f8u: goto label_1c77f8;
        case 0x1c7808u: goto label_1c7808;
        case 0x1c7818u: goto label_1c7818;
        case 0x1c7824u: goto label_1c7824;
        default: break;
    }

    ctx->pc = 0x1c77b0u;

    // 0x1c77b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c77b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c77b4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c77b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c77b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c77b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c77bc: 0x24a55980  addiu       $a1, $a1, 0x5980
    ctx->pc = 0x1c77bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22912));
    // 0x1c77c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c77c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c77c4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c77c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c77c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c77c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77cc: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C77CCu;
    SET_GPR_U32(ctx, 31, 0x1C77D4u);
    ctx->pc = 0x1C77D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77CCu;
    // 0x1c77d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C77CCu, 0x1C77D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77D4u;
label_1c77d4:
    // 0x1c77d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c77d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c77dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c77dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77e0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C77E0u;
    SET_GPR_U32(ctx, 31, 0x1C77E8u);
    ctx->pc = 0x1C77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77E0u;
    // 0x1c77e4: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C77E0u, 0x1C77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77E8u;
label_1c77e8:
    // 0x1c77e8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c77e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c77ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c77ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77f0: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C77F0u;
    SET_GPR_U32(ctx, 31, 0x1C77F8u);
    ctx->pc = 0x1C77F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77F0u;
    // 0x1c77f4: 0x24a559a0  addiu       $a1, $a1, 0x59A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C77F0u, 0x1C77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77F8u;
label_1c77f8:
    // 0x1c77f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c77fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7800: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7800u;
    SET_GPR_U32(ctx, 31, 0x1C7808u);
    ctx->pc = 0x1C7804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7800u;
    // 0x1c7804: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7800u, 0x1C7808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7808u;
label_1c7808:
    // 0x1c7808: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c7808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c780c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7810: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C7810u;
    SET_GPR_U32(ctx, 31, 0x1C7818u);
    ctx->pc = 0x1C7814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7810u;
    // 0x1c7814: 0x24a559a0  addiu       $a1, $a1, 0x59A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C7810u, 0x1C7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7818u;
label_1c7818:
    // 0x1c7818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c781c: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1C781Cu;
    SET_GPR_U32(ctx, 31, 0x1C7824u);
    ctx->pc = 0x1C7820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C781Cu;
    // 0x1c7820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1C781Cu, 0x1C7824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7824u;
label_1c7824:
    // 0x1c7824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c782c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C782Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C782Cu;
        // 0x1c7830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C782Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7834u;
}
