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

// Function: FUN_001bc930
// Address: 0x1bc930 - 0x1bca00
void FUN_001bc930_0x1bc930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc930_0x1bc930");
#endif

    switch (ctx->pc) {
        case 0x1bc970u: goto label_1bc970;
        case 0x1bc9c0u: goto label_1bc9c0;
        case 0x1bc9d0u: goto label_1bc9d0;
        case 0x1bc9e0u: goto label_1bc9e0;
        case 0x1bc9ecu: goto label_1bc9ec;
        default: break;
    }

    ctx->pc = 0x1bc930u;

    // 0x1bc930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bc934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bc938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bc93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc940: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x1bc940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1bc944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc948: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x1bc948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1bc94c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x1bc94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1bc950: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bc950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bc954: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1bc954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bc958: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x1bc958u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1bc95c: 0x0  nop
    ctx->pc = 0x1bc95cu;
    // NOP
    // 0x1bc960: 0x0  nop
    ctx->pc = 0x1bc960u;
    // NOP
    // 0x1bc964: 0x2812  mflo        $a1
    ctx->pc = 0x1bc964u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1bc968: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1BC968u;
    SET_GPR_U32(ctx, 31, 0x1BC970u);
    ctx->pc = 0x1BC96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC968u;
    // 0x1bc96c: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1BC968u, 0x1BC970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC970u;
label_1bc970:
    // 0x1bc970: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x1bc970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bc974: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bc974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc978: 0x224001b  divu        $zero, $s1, $a0
    ctx->pc = 0x1bc978u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1bc97c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bc97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc980: 0x0  nop
    ctx->pc = 0x1bc980u;
    // NOP
    // 0x1bc984: 0x2010  mfhi        $a0
    ctx->pc = 0x1bc984u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bc988: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bc988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bc98c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bc98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bc990: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bc990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc994: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BC994u;
    {
        const bool branch_taken_0x1bc994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC994u;
        // 0x1bc998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc994) {
            ctx->pc = 0x1BC9D8u;
            goto label_1bc9d8;
        }
    }
    ctx->pc = 0x1BC99Cu;
    // 0x1bc99c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc9a0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC9A0u;
    {
        const bool branch_taken_0x1bc9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9A0u;
        // 0x1bc9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9a0) {
            ctx->pc = 0x1BC9C8u;
            goto label_1bc9c8;
        }
    }
    ctx->pc = 0x1BC9A8u;
    // 0x1bc9a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC9A8u;
    {
        const bool branch_taken_0x1bc9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9A8u;
        // 0x1bc9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9a8) {
            ctx->pc = 0x1BC9B8u;
            goto label_1bc9b8;
        }
    }
    ctx->pc = 0x1BC9B0u;
    // 0x1bc9b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BC9B0u;
    {
        const bool branch_taken_0x1bc9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9B0u;
        // 0x1bc9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9b0) {
            ctx->pc = 0x1BC9E4u;
            goto label_1bc9e4;
        }
    }
    ctx->pc = 0x1BC9B8u;
label_1bc9b8:
    // 0x1bc9b8: 0xc06f280  jal         func_1BCA00
    ctx->pc = 0x1BC9B8u;
    SET_GPR_U32(ctx, 31, 0x1BC9C0u);
    ctx->pc = 0x1BCA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA00u, 0x1BC9B8u, 0x1BC9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9C0u;
label_1bc9c0:
    // 0x1bc9c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC9C0u;
    {
        const bool branch_taken_0x1bc9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9c0) {
            ctx->pc = 0x1BC9E0u;
            goto label_1bc9e0;
        }
    }
    ctx->pc = 0x1BC9C8u;
label_1bc9c8:
    // 0x1bc9c8: 0xc06f2c8  jal         func_1BCB20
    ctx->pc = 0x1BC9C8u;
    SET_GPR_U32(ctx, 31, 0x1BC9D0u);
    ctx->pc = 0x1BCB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCB20u, 0x1BC9C8u, 0x1BC9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9D0u;
label_1bc9d0:
    // 0x1bc9d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC9D0u;
    {
        const bool branch_taken_0x1bc9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9d0) {
            ctx->pc = 0x1BC9E0u;
            goto label_1bc9e0;
        }
    }
    ctx->pc = 0x1BC9D8u;
label_1bc9d8:
    // 0x1bc9d8: 0xc06f390  jal         func_1BCE40
    ctx->pc = 0x1BC9D8u;
    SET_GPR_U32(ctx, 31, 0x1BC9E0u);
    ctx->pc = 0x1BCE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCE40u, 0x1BC9D8u, 0x1BC9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9E0u;
label_1bc9e0:
    // 0x1bc9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9e4:
    // 0x1bc9e4: 0xc06f460  jal         func_1BD180
    ctx->pc = 0x1BC9E4u;
    SET_GPR_U32(ctx, 31, 0x1BC9ECu);
    ctx->pc = 0x1BD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD180u, 0x1BC9E4u, 0x1BC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9ECu;
label_1bc9ec:
    // 0x1bc9ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc9f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc9f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9F8u;
        // 0x1bc9fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCA00u;
}
