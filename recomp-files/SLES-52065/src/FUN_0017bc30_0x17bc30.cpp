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

// Function: FUN_0017bc30
// Address: 0x17bc30 - 0x17bcb0
void FUN_0017bc30_0x17bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017bc30_0x17bc30");
#endif

    switch (ctx->pc) {
        case 0x17bc9cu: goto label_17bc9c;
        default: break;
    }

    ctx->pc = 0x17bc30u;

    // 0x17bc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bc34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bc38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bc3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc40: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17BC40u;
    {
        const bool branch_taken_0x17bc40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC40u;
        // 0x17bc44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc40) {
            ctx->pc = 0x17BCA0u;
            goto label_17bca0;
        }
    }
    ctx->pc = 0x17BC48u;
    // 0x17bc48: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17bc4c: 0x2442adc0  addiu       $v0, $v0, -0x5240
    ctx->pc = 0x17bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
    // 0x17bc50: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x17BC50u;
    {
        const bool branch_taken_0x17bc50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC50u;
        // 0x17bc54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc50) {
            ctx->pc = 0x17BC84u;
            goto label_17bc84;
        }
    }
    ctx->pc = 0x17BC58u;
    // 0x17bc58: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17bc5c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x17bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x17bc60: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BC60u;
    {
        const bool branch_taken_0x17bc60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC60u;
        // 0x17bc64: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc60) {
            ctx->pc = 0x17BC84u;
            goto label_17bc84;
        }
    }
    ctx->pc = 0x17BC68u;
    // 0x17bc68: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17bc6c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x17bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x17bc70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BC70u;
    {
        const bool branch_taken_0x17bc70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC70u;
        // 0x17bc74: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc70) {
            ctx->pc = 0x17BC84u;
            goto label_17bc84;
        }
    }
    ctx->pc = 0x17BC78u;
    // 0x17bc78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17bc7c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x17bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x17bc80: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_17bc84:
    // 0x17bc84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x17bc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x17bc88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17bc88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17bc8c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BC8Cu;
    {
        const bool branch_taken_0x17bc8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC8Cu;
        // 0x17bc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc8c) {
            ctx->pc = 0x17BC9Cu;
            goto label_17bc9c;
        }
    }
    ctx->pc = 0x17BC94u;
    // 0x17bc94: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17BC94u;
    SET_GPR_U32(ctx, 31, 0x17BC9Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17BC94u, 0x17BC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC9Cu;
label_17bc9c:
    // 0x17bc9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17bc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17bca0:
    // 0x17bca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bca8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCA8u;
        // 0x17bcac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BCB0u;
}
