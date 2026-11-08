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

// Function: FUN_001c6560
// Address: 0x1c6560 - 0x1c65c0
void FUN_001c6560_0x1c6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c6560_0x1c6560");
#endif

    switch (ctx->pc) {
        case 0x1c6590u: goto label_1c6590;
        case 0x1c65a8u: goto label_1c65a8;
        default: break;
    }

    ctx->pc = 0x1c6560u;

    // 0x1c6560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c656c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6574: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6574u;
    {
        const bool branch_taken_0x1c6574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6574u;
        // 0x1c6578: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6574) {
            ctx->pc = 0x1C65A8u;
            goto label_1c65a8;
        }
    }
    ctx->pc = 0x1C657Cu;
    // 0x1c657c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c657cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1c6580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6584: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x1c6584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x1c6588: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1C6588u;
    SET_GPR_U32(ctx, 31, 0x1C6590u);
    ctx->pc = 0x1C658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6588u;
    // 0x1c658c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C6588u, 0x1C6590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6590u;
label_1c6590:
    // 0x1c6590: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c6590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1c6594: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c6594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c6598: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6598u;
    {
        const bool branch_taken_0x1c6598 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6598u;
        // 0x1c659c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6598) {
            ctx->pc = 0x1C65ACu;
            goto label_1c65ac;
        }
    }
    ctx->pc = 0x1C65A0u;
    // 0x1c65a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C65A0u;
    SET_GPR_U32(ctx, 31, 0x1C65A8u);
    ctx->pc = 0x1C65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C65A0u;
    // 0x1c65a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C65A0u, 0x1C65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65A8u;
label_1c65a8:
    // 0x1c65a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c65a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c65ac:
    // 0x1c65ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c65acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c65b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c65b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c65b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c65b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c65b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C65B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65B8u;
        // 0x1c65bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C65B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C65C0u;
}
