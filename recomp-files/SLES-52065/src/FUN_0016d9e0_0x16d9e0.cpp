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

// Function: FUN_0016d9e0
// Address: 0x16d9e0 - 0x16da60
void FUN_0016d9e0_0x16d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d9e0_0x16d9e0");
#endif

    switch (ctx->pc) {
        case 0x16da4cu: goto label_16da4c;
        default: break;
    }

    ctx->pc = 0x16d9e0u;

    // 0x16d9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d9ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9f0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16D9F0u;
    {
        const bool branch_taken_0x16d9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9F0u;
        // 0x16d9f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9f0) {
            ctx->pc = 0x16DA50u;
            goto label_16da50;
        }
    }
    ctx->pc = 0x16D9F8u;
    // 0x16d9f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16d9fc: 0x2442a850  addiu       $v0, $v0, -0x57B0
    ctx->pc = 0x16d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944848));
    // 0x16da00: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x16DA00u;
    {
        const bool branch_taken_0x16da00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA00u;
        // 0x16da04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da00) {
            ctx->pc = 0x16DA34u;
            goto label_16da34;
        }
    }
    ctx->pc = 0x16DA08u;
    // 0x16da08: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16da08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16da0c: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x16da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x16da10: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16DA10u;
    {
        const bool branch_taken_0x16da10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA10u;
        // 0x16da14: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da10) {
            ctx->pc = 0x16DA34u;
            goto label_16da34;
        }
    }
    ctx->pc = 0x16DA18u;
    // 0x16da18: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16da18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16da1c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x16da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x16da20: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DA20u;
    {
        const bool branch_taken_0x16da20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA20u;
        // 0x16da24: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da20) {
            ctx->pc = 0x16DA34u;
            goto label_16da34;
        }
    }
    ctx->pc = 0x16DA28u;
    // 0x16da28: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16da28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16da2c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x16da30: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16da30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_16da34:
    // 0x16da34: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x16da34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x16da38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16da38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16da3c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DA3Cu;
    {
        const bool branch_taken_0x16da3c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA3Cu;
        // 0x16da40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da3c) {
            ctx->pc = 0x16DA4Cu;
            goto label_16da4c;
        }
    }
    ctx->pc = 0x16DA44u;
    // 0x16da44: 0xc0401a4  jal         func_100690
    ctx->pc = 0x16DA44u;
    SET_GPR_U32(ctx, 31, 0x16DA4Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x16DA44u, 0x16DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA4Cu;
label_16da4c:
    // 0x16da4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16da4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16da50:
    // 0x16da50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16da50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16da54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16da54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16da58: 0x3e00008  jr          $ra
    ctx->pc = 0x16DA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA58u;
        // 0x16da5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DA60u;
}
