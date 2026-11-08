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

// Function: FUN_00167d80
// Address: 0x167d80 - 0x167e00
void FUN_00167d80_0x167d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167d80_0x167d80");
#endif

    switch (ctx->pc) {
        case 0x167decu: goto label_167dec;
        default: break;
    }

    ctx->pc = 0x167d80u;

    // 0x167d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d90: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x167D90u;
    {
        const bool branch_taken_0x167d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D90u;
        // 0x167d94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d90) {
            ctx->pc = 0x167DF0u;
            goto label_167df0;
        }
    }
    ctx->pc = 0x167D98u;
    // 0x167d98: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167d9c: 0x24429bf0  addiu       $v0, $v0, -0x6410
    ctx->pc = 0x167d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941680));
    // 0x167da0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x167DA0u;
    {
        const bool branch_taken_0x167da0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DA0u;
        // 0x167da4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167da0) {
            ctx->pc = 0x167DD4u;
            goto label_167dd4;
        }
    }
    ctx->pc = 0x167DA8u;
    // 0x167da8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167dac: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x167dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x167db0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x167DB0u;
    {
        const bool branch_taken_0x167db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DB0u;
        // 0x167db4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167db0) {
            ctx->pc = 0x167DD4u;
            goto label_167dd4;
        }
    }
    ctx->pc = 0x167DB8u;
    // 0x167db8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167dbc: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x167dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x167dc0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167DC0u;
    {
        const bool branch_taken_0x167dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DC0u;
        // 0x167dc4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167dc0) {
            ctx->pc = 0x167DD4u;
            goto label_167dd4;
        }
    }
    ctx->pc = 0x167DC8u;
    // 0x167dc8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167dcc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x167dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x167dd0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x167dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_167dd4:
    // 0x167dd4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x167dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x167dd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x167dd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x167ddc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167DDCu;
    {
        const bool branch_taken_0x167ddc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x167DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DDCu;
        // 0x167de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ddc) {
            ctx->pc = 0x167DECu;
            goto label_167dec;
        }
    }
    ctx->pc = 0x167DE4u;
    // 0x167de4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x167DE4u;
    SET_GPR_U32(ctx, 31, 0x167DECu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x167DE4u, 0x167DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167DECu;
label_167dec:
    // 0x167dec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167df0:
    // 0x167df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167df8: 0x3e00008  jr          $ra
    ctx->pc = 0x167DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DF8u;
        // 0x167dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167E00u;
}
