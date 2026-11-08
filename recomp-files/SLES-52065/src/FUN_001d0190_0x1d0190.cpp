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

// Function: FUN_001d0190
// Address: 0x1d0190 - 0x1d01f0
void FUN_001d0190_0x1d0190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d0190_0x1d0190");
#endif

    switch (ctx->pc) {
        case 0x1d01c0u: goto label_1d01c0;
        case 0x1d01d8u: goto label_1d01d8;
        default: break;
    }

    ctx->pc = 0x1d0190u;

    // 0x1d0190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d019c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d019cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d01a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d01a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01a4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D01A4u;
    {
        const bool branch_taken_0x1d01a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D01A4u;
        // 0x1d01a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01a4) {
            ctx->pc = 0x1D01D8u;
            goto label_1d01d8;
        }
    }
    ctx->pc = 0x1D01ACu;
    // 0x1d01ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d01acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1d01b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d01b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01b4: 0x2442bf50  addiu       $v0, $v0, -0x40B0
    ctx->pc = 0x1d01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950736));
    // 0x1d01b8: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1D01B8u;
    SET_GPR_U32(ctx, 31, 0x1D01C0u);
    ctx->pc = 0x1D01BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01B8u;
    // 0x1d01bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1D01B8u, 0x1D01C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01C0u;
label_1d01c0:
    // 0x1d01c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1d01c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d01c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d01c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d01c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D01C8u;
    {
        const bool branch_taken_0x1d01c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D01C8u;
        // 0x1d01cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01c8) {
            ctx->pc = 0x1D01DCu;
            goto label_1d01dc;
        }
    }
    ctx->pc = 0x1D01D0u;
    // 0x1d01d0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1D01D0u;
    SET_GPR_U32(ctx, 31, 0x1D01D8u);
    ctx->pc = 0x1D01D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01D0u;
    // 0x1d01d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1D01D0u, 0x1D01D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01D8u;
label_1d01d8:
    // 0x1d01d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d01d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d01dc:
    // 0x1d01dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d01dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d01e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d01e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d01e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d01e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d01e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D01E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D01E8u;
        // 0x1d01ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D01E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D01F0u;
}
