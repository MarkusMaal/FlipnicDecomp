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

// Function: FUN_0010ed20
// Address: 0x10ed20 - 0x10edb0
void FUN_0010ed20_0x10ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010ed20_0x10ed20");
#endif

    switch (ctx->pc) {
        case 0x10ed6cu: goto label_10ed6c;
        case 0x10ed98u: goto label_10ed98;
        default: break;
    }

    ctx->pc = 0x10ed20u;

    // 0x10ed20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ed24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ed28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10ed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10ed2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10ed2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10ed30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ed30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed34: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x10ED34u;
    {
        const bool branch_taken_0x10ed34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED34u;
        // 0x10ed38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed34) {
            ctx->pc = 0x10ED98u;
            goto label_10ed98;
        }
    }
    ctx->pc = 0x10ED3Cu;
    // 0x10ed3c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10ed40: 0x244282f0  addiu       $v0, $v0, -0x7D10
    ctx->pc = 0x10ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935280));
    // 0x10ed44: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x10ED44u;
    {
        const bool branch_taken_0x10ed44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED44u;
        // 0x10ed48: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed44) {
            ctx->pc = 0x10ED80u;
            goto label_10ed80;
        }
    }
    ctx->pc = 0x10ED4Cu;
    // 0x10ed4c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10ed50: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x10ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
    // 0x10ed54: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x10ed58: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x10ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10ed5c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10ED5Cu;
    {
        const bool branch_taken_0x10ed5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ed5c) {
            ctx->pc = 0x10ED6Cu;
            goto label_10ed6c;
        }
    }
    ctx->pc = 0x10ED64u;
    // 0x10ed64: 0xc04018c  jal         func_100630
    ctx->pc = 0x10ED64u;
    SET_GPR_U32(ctx, 31, 0x10ED6Cu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x10ED64u, 0x10ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED6Cu;
label_10ed6c:
    // 0x10ed6c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10ED6Cu;
    {
        const bool branch_taken_0x10ed6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED6Cu;
        // 0x10ed70: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed6c) {
            ctx->pc = 0x10ED84u;
            goto label_10ed84;
        }
    }
    ctx->pc = 0x10ED74u;
    // 0x10ed74: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10ed78: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x10ed7c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10ed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_10ed80:
    // 0x10ed80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x10ed80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_10ed84:
    // 0x10ed84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10ed84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10ed88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10ED88u;
    {
        const bool branch_taken_0x10ed88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED88u;
        // 0x10ed8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed88) {
            ctx->pc = 0x10ED9Cu;
            goto label_10ed9c;
        }
    }
    ctx->pc = 0x10ED90u;
    // 0x10ed90: 0xc0401a4  jal         func_100690
    ctx->pc = 0x10ED90u;
    SET_GPR_U32(ctx, 31, 0x10ED98u);
    ctx->pc = 0x10ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED90u;
    // 0x10ed94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x10ED90u, 0x10ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED98u;
label_10ed98:
    // 0x10ed98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10ed98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ed9c:
    // 0x10ed9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ed9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10eda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10eda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eda4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10eda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eda8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDA8u;
        // 0x10edac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EDB0u;
}
