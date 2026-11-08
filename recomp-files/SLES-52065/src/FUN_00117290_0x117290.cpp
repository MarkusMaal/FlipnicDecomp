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

// Function: FUN_00117290
// Address: 0x117290 - 0x1172dc
void FUN_00117290_0x117290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117290_0x117290");
#endif

    switch (ctx->pc) {
        case 0x1172c8u: goto label_1172c8;
        default: break;
    }

    ctx->pc = 0x117290u;

    // 0x117290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11729c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11729cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172a0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1172A0u;
    {
        const bool branch_taken_0x1172a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172A0u;
        // 0x1172a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172a0) {
            ctx->pc = 0x1172CCu;
            goto label_1172cc;
        }
    }
    ctx->pc = 0x1172A8u;
    // 0x1172a8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1172a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1172ac: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1172acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1172b0: 0x246385f0  addiu       $v1, $v1, -0x7A10
    ctx->pc = 0x1172b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936048));
    // 0x1172b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1172b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1172b8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1172B8u;
    {
        const bool branch_taken_0x1172b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1172BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172B8u;
        // 0x1172bc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172b8) {
            ctx->pc = 0x1172C8u;
            goto label_1172c8;
        }
    }
    ctx->pc = 0x1172C0u;
    // 0x1172c0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1172C0u;
    SET_GPR_U32(ctx, 31, 0x1172C8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1172C0u, 0x1172C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172C8u;
label_1172c8:
    // 0x1172c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1172c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1172cc:
    // 0x1172cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1172ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1172d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1172d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1172d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1172D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1172D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172D4u;
        // 0x1172d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1172D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1172DCu;
}
