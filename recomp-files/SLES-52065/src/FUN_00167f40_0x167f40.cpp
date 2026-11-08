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

// Function: FUN_00167f40
// Address: 0x167f40 - 0x167fc0
void FUN_00167f40_0x167f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167f40_0x167f40");
#endif

    switch (ctx->pc) {
        case 0x167facu: goto label_167fac;
        default: break;
    }

    ctx->pc = 0x167f40u;

    // 0x167f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f50: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x167F50u;
    {
        const bool branch_taken_0x167f50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F50u;
        // 0x167f54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f50) {
            ctx->pc = 0x167FB0u;
            goto label_167fb0;
        }
    }
    ctx->pc = 0x167F58u;
    // 0x167f58: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167f5c: 0x24429d10  addiu       $v0, $v0, -0x62F0
    ctx->pc = 0x167f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941968));
    // 0x167f60: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x167F60u;
    {
        const bool branch_taken_0x167f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F60u;
        // 0x167f64: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f60) {
            ctx->pc = 0x167F94u;
            goto label_167f94;
        }
    }
    ctx->pc = 0x167F68u;
    // 0x167f68: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167f6c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x167f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x167f70: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x167F70u;
    {
        const bool branch_taken_0x167f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F70u;
        // 0x167f74: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f70) {
            ctx->pc = 0x167F94u;
            goto label_167f94;
        }
    }
    ctx->pc = 0x167F78u;
    // 0x167f78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167f7c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x167f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x167f80: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167F80u;
    {
        const bool branch_taken_0x167f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F80u;
        // 0x167f84: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f80) {
            ctx->pc = 0x167F94u;
            goto label_167f94;
        }
    }
    ctx->pc = 0x167F88u;
    // 0x167f88: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167f8c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x167f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x167f90: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x167f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_167f94:
    // 0x167f94: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x167f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x167f98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x167f98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x167f9c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167F9Cu;
    {
        const bool branch_taken_0x167f9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x167FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F9Cu;
        // 0x167fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f9c) {
            ctx->pc = 0x167FACu;
            goto label_167fac;
        }
    }
    ctx->pc = 0x167FA4u;
    // 0x167fa4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x167FA4u;
    SET_GPR_U32(ctx, 31, 0x167FACu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x167FA4u, 0x167FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FACu;
label_167fac:
    // 0x167fac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167fb0:
    // 0x167fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x167FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FB8u;
        // 0x167fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167FC0u;
}
