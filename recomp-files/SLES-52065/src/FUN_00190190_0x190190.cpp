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

// Function: FUN_00190190
// Address: 0x190190 - 0x1901dc
void FUN_00190190_0x190190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190190_0x190190");
#endif

    switch (ctx->pc) {
        case 0x1901c8u: goto label_1901c8;
        default: break;
    }

    ctx->pc = 0x190190u;

    // 0x190190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x190198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19019c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19019cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901a0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1901A0u;
    {
        const bool branch_taken_0x1901a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1901A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901A0u;
        // 0x1901a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901a0) {
            ctx->pc = 0x1901CCu;
            goto label_1901cc;
        }
    }
    ctx->pc = 0x1901A8u;
    // 0x1901a8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1901a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1901ac: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1901acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1901b0: 0x2463b1d0  addiu       $v1, $v1, -0x4E30
    ctx->pc = 0x1901b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947280));
    // 0x1901b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1901b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1901b8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1901B8u;
    {
        const bool branch_taken_0x1901b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1901BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901B8u;
        // 0x1901bc: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901b8) {
            ctx->pc = 0x1901C8u;
            goto label_1901c8;
        }
    }
    ctx->pc = 0x1901C0u;
    // 0x1901c0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1901C0u;
    SET_GPR_U32(ctx, 31, 0x1901C8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1901C0u, 0x1901C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901C8u;
label_1901c8:
    // 0x1901c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1901c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1901cc:
    // 0x1901cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1901ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1901d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1901d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1901d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1901D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1901D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901D4u;
        // 0x1901d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1901D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1901DCu;
}
