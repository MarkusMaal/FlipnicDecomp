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

// Function: FUN_00105a20
// Address: 0x105a20 - 0x105aa0
void FUN_00105a20_0x105a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105a20_0x105a20");
#endif

    switch (ctx->pc) {
        case 0x105a8cu: goto label_105a8c;
        default: break;
    }

    ctx->pc = 0x105a20u;

    // 0x105a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105a24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a30: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x105A30u;
    {
        const bool branch_taken_0x105a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A30u;
        // 0x105a34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a30) {
            ctx->pc = 0x105A90u;
            goto label_105a90;
        }
    }
    ctx->pc = 0x105A38u;
    // 0x105a38: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105a3c: 0x2442a070  addiu       $v0, $v0, -0x5F90
    ctx->pc = 0x105a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942832));
    // 0x105a40: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x105A40u;
    {
        const bool branch_taken_0x105a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A40u;
        // 0x105a44: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a40) {
            ctx->pc = 0x105A74u;
            goto label_105a74;
        }
    }
    ctx->pc = 0x105A48u;
    // 0x105a48: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105a4c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x105a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x105a50: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105A50u;
    {
        const bool branch_taken_0x105a50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A50u;
        // 0x105a54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a50) {
            ctx->pc = 0x105A74u;
            goto label_105a74;
        }
    }
    ctx->pc = 0x105A58u;
    // 0x105a58: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105a5c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x105a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x105a60: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105A60u;
    {
        const bool branch_taken_0x105a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A60u;
        // 0x105a64: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a60) {
            ctx->pc = 0x105A74u;
            goto label_105a74;
        }
    }
    ctx->pc = 0x105A68u;
    // 0x105a68: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105a6c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x105a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105a70: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105a74:
    // 0x105a74: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105a78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105a78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105a7c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105A7Cu;
    {
        const bool branch_taken_0x105a7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A7Cu;
        // 0x105a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a7c) {
            ctx->pc = 0x105A8Cu;
            goto label_105a8c;
        }
    }
    ctx->pc = 0x105A84u;
    // 0x105a84: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105A84u;
    SET_GPR_U32(ctx, 31, 0x105A8Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105A84u, 0x105A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A8Cu;
label_105a8c:
    // 0x105a8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105a90:
    // 0x105a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105a98: 0x3e00008  jr          $ra
    ctx->pc = 0x105A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A98u;
        // 0x105a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105AA0u;
}
