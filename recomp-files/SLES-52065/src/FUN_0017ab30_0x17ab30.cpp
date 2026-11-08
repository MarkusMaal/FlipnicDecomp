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

// Function: FUN_0017ab30
// Address: 0x17ab30 - 0x17abd4
void FUN_0017ab30_0x17ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ab30_0x17ab30");
#endif

    switch (ctx->pc) {
        case 0x17ab70u: goto label_17ab70;
        case 0x17abbcu: goto label_17abbc;
        default: break;
    }

    ctx->pc = 0x17ab30u;

    // 0x17ab30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ab34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ab38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ab3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ab40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ab40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab44: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17AB44u;
    {
        const bool branch_taken_0x17ab44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB44u;
        // 0x17ab48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab44) {
            ctx->pc = 0x17ABBCu;
            goto label_17abbc;
        }
    }
    ctx->pc = 0x17AB4Cu;
    // 0x17ab4c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x17ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x17ab50: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x17ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x17ab54: 0x2463acf0  addiu       $v1, $v1, -0x5310
    ctx->pc = 0x17ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946032));
    // 0x17ab58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17AB58u;
    {
        const bool branch_taken_0x17ab58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB58u;
        // 0x17ab5c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab58) {
            ctx->pc = 0x17AB70u;
            goto label_17ab70;
        }
    }
    ctx->pc = 0x17AB60u;
    // 0x17ab60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AB60u;
    {
        const bool branch_taken_0x17ab60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ab60) {
            ctx->pc = 0x17AB70u;
            goto label_17ab70;
        }
    }
    ctx->pc = 0x17AB68u;
    // 0x17ab68: 0xc04018c  jal         func_100630
    ctx->pc = 0x17AB68u;
    SET_GPR_U32(ctx, 31, 0x17AB70u);
    ctx->pc = 0x17AB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB68u;
    // 0x17ab6c: 0x8e040228  lw          $a0, 0x228($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x17AB68u, 0x17AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB70u;
label_17ab70:
    // 0x17ab70: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x17AB70u;
    {
        const bool branch_taken_0x17ab70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB70u;
        // 0x17ab74: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab70) {
            ctx->pc = 0x17ABA8u;
            goto label_17aba8;
        }
    }
    ctx->pc = 0x17AB78u;
    // 0x17ab78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17ab7c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x17ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x17ab80: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17AB80u;
    {
        const bool branch_taken_0x17ab80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB80u;
        // 0x17ab84: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab80) {
            ctx->pc = 0x17ABA4u;
            goto label_17aba4;
        }
    }
    ctx->pc = 0x17AB88u;
    // 0x17ab88: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17ab8c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x17ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x17ab90: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AB90u;
    {
        const bool branch_taken_0x17ab90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB90u;
        // 0x17ab94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab90) {
            ctx->pc = 0x17ABA4u;
            goto label_17aba4;
        }
    }
    ctx->pc = 0x17AB98u;
    // 0x17ab98: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17ab9c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x17ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x17aba0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_17aba4:
    // 0x17aba4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x17aba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_17aba8:
    // 0x17aba8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17aba8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17abac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17ABACu;
    {
        const bool branch_taken_0x17abac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABACu;
        // 0x17abb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abac) {
            ctx->pc = 0x17ABC0u;
            goto label_17abc0;
        }
    }
    ctx->pc = 0x17ABB4u;
    // 0x17abb4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17ABB4u;
    SET_GPR_U32(ctx, 31, 0x17ABBCu);
    ctx->pc = 0x17ABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ABB4u;
    // 0x17abb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17ABB4u, 0x17ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABBCu;
label_17abbc:
    // 0x17abbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17abbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17abc0:
    // 0x17abc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17abc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17abc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17abc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17abc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17abc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17abcc: 0x3e00008  jr          $ra
    ctx->pc = 0x17ABCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABCCu;
        // 0x17abd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ABCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ABD4u;
}
