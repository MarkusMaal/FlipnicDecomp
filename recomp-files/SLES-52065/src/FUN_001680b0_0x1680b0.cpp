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

// Function: FUN_001680b0
// Address: 0x1680b0 - 0x168130
void FUN_001680b0_0x1680b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001680b0_0x1680b0");
#endif

    switch (ctx->pc) {
        case 0x16811cu: goto label_16811c;
        default: break;
    }

    ctx->pc = 0x1680b0u;

    // 0x1680b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1680b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1680b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1680b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1680b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1680b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1680bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1680bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1680c0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1680C0u;
    {
        const bool branch_taken_0x1680c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1680C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680C0u;
        // 0x1680c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680c0) {
            ctx->pc = 0x168120u;
            goto label_168120;
        }
    }
    ctx->pc = 0x1680C8u;
    // 0x1680c8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1680c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1680cc: 0x24429dd0  addiu       $v0, $v0, -0x6230
    ctx->pc = 0x1680ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942160));
    // 0x1680d0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1680D0u;
    {
        const bool branch_taken_0x1680d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1680D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680D0u;
        // 0x1680d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680d0) {
            ctx->pc = 0x168104u;
            goto label_168104;
        }
    }
    ctx->pc = 0x1680D8u;
    // 0x1680d8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1680d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1680dc: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1680dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1680e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1680E0u;
    {
        const bool branch_taken_0x1680e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1680E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680E0u;
        // 0x1680e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680e0) {
            ctx->pc = 0x168104u;
            goto label_168104;
        }
    }
    ctx->pc = 0x1680E8u;
    // 0x1680e8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1680e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1680ec: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1680ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1680f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1680F0u;
    {
        const bool branch_taken_0x1680f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1680F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680F0u;
        // 0x1680f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680f0) {
            ctx->pc = 0x168104u;
            goto label_168104;
        }
    }
    ctx->pc = 0x1680F8u;
    // 0x1680f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1680f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1680fc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1680fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x168100: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x168100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_168104:
    // 0x168104: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x168104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x168108: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x168108u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16810c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16810Cu;
    {
        const bool branch_taken_0x16810c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x168110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16810Cu;
        // 0x168110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16810c) {
            ctx->pc = 0x16811Cu;
            goto label_16811c;
        }
    }
    ctx->pc = 0x168114u;
    // 0x168114: 0xc0401a4  jal         func_100690
    ctx->pc = 0x168114u;
    SET_GPR_U32(ctx, 31, 0x16811Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x168114u, 0x16811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16811Cu;
label_16811c:
    // 0x16811c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16811cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168120:
    // 0x168120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168128: 0x3e00008  jr          $ra
    ctx->pc = 0x168128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168128u;
        // 0x16812c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168130u;
}
