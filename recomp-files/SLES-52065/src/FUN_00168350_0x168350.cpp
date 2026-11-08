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

// Function: FUN_00168350
// Address: 0x168350 - 0x1683d0
void FUN_00168350_0x168350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168350_0x168350");
#endif

    switch (ctx->pc) {
        case 0x1683bcu: goto label_1683bc;
        default: break;
    }

    ctx->pc = 0x168350u;

    // 0x168350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16835c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16835cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168360: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x168360u;
    {
        const bool branch_taken_0x168360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168360u;
        // 0x168364: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168360) {
            ctx->pc = 0x1683C0u;
            goto label_1683c0;
        }
    }
    ctx->pc = 0x168368u;
    // 0x168368: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16836c: 0x24429fb0  addiu       $v0, $v0, -0x6050
    ctx->pc = 0x16836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942640));
    // 0x168370: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x168370u;
    {
        const bool branch_taken_0x168370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168370u;
        // 0x168374: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168370) {
            ctx->pc = 0x1683A4u;
            goto label_1683a4;
        }
    }
    ctx->pc = 0x168378u;
    // 0x168378: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16837c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x16837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x168380: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168380u;
    {
        const bool branch_taken_0x168380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168380u;
        // 0x168384: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168380) {
            ctx->pc = 0x1683A4u;
            goto label_1683a4;
        }
    }
    ctx->pc = 0x168388u;
    // 0x168388: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16838c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x16838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x168390: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168390u;
    {
        const bool branch_taken_0x168390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168390u;
        // 0x168394: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168390) {
            ctx->pc = 0x1683A4u;
            goto label_1683a4;
        }
    }
    ctx->pc = 0x168398u;
    // 0x168398: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16839c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x1683a0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1683a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1683a4:
    // 0x1683a4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1683a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1683a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1683a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1683ac: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1683ACu;
    {
        const bool branch_taken_0x1683ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1683B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683ACu;
        // 0x1683b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683ac) {
            ctx->pc = 0x1683BCu;
            goto label_1683bc;
        }
    }
    ctx->pc = 0x1683B4u;
    // 0x1683b4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1683B4u;
    SET_GPR_U32(ctx, 31, 0x1683BCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1683B4u, 0x1683BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683BCu;
label_1683bc:
    // 0x1683bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1683bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1683c0:
    // 0x1683c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1683c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1683c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1683c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1683c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1683C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1683CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683C8u;
        // 0x1683cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1683C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1683D0u;
}
