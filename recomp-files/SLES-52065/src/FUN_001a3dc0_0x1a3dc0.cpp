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

// Function: FUN_001a3dc0
// Address: 0x1a3dc0 - 0x1a3e20
void FUN_001a3dc0_0x1a3dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3dc0_0x1a3dc0");
#endif

    switch (ctx->pc) {
        case 0x1a3df0u: goto label_1a3df0;
        case 0x1a3e08u: goto label_1a3e08;
        default: break;
    }

    ctx->pc = 0x1a3dc0u;

    // 0x1a3dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a3dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3dd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3dd4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A3DD4u;
    {
        const bool branch_taken_0x1a3dd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DD4u;
        // 0x1a3dd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3dd4) {
            ctx->pc = 0x1A3E08u;
            goto label_1a3e08;
        }
    }
    ctx->pc = 0x1A3DDCu;
    // 0x1a3ddc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a3de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3de4: 0x2442b3d0  addiu       $v0, $v0, -0x4C30
    ctx->pc = 0x1a3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947792));
    // 0x1a3de8: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A3DE8u;
    SET_GPR_U32(ctx, 31, 0x1A3DF0u);
    ctx->pc = 0x1A3DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DE8u;
    // 0x1a3dec: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A3DE8u, 0x1A3DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3DF0u;
label_1a3df0:
    // 0x1a3df0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a3df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a3df4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a3df4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a3df8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3DF8u;
    {
        const bool branch_taken_0x1a3df8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DF8u;
        // 0x1a3dfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3df8) {
            ctx->pc = 0x1A3E0Cu;
            goto label_1a3e0c;
        }
    }
    ctx->pc = 0x1A3E00u;
    // 0x1a3e00: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A3E00u;
    SET_GPR_U32(ctx, 31, 0x1A3E08u);
    ctx->pc = 0x1A3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E00u;
    // 0x1a3e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A3E00u, 0x1A3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E08u;
label_1a3e08:
    // 0x1a3e08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a3e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e0c:
    // 0x1a3e0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3e10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E18u;
        // 0x1a3e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3E20u;
}
