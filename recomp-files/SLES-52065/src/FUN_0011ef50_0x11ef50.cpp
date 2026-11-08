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

// Function: FUN_0011ef50
// Address: 0x11ef50 - 0x11ef9c
void FUN_0011ef50_0x11ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ef50_0x11ef50");
#endif

    switch (ctx->pc) {
        case 0x11ef88u: goto label_11ef88;
        default: break;
    }

    ctx->pc = 0x11ef50u;

    // 0x11ef50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ef54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ef58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11ef5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ef5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef60: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x11EF60u;
    {
        const bool branch_taken_0x11ef60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF60u;
        // 0x11ef64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef60) {
            ctx->pc = 0x11EF8Cu;
            goto label_11ef8c;
        }
    }
    ctx->pc = 0x11EF68u;
    // 0x11ef68: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x11ef68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x11ef6c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x11ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x11ef70: 0x24638830  addiu       $v1, $v1, -0x77D0
    ctx->pc = 0x11ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936624));
    // 0x11ef74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11ef74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x11ef78: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EF78u;
    {
        const bool branch_taken_0x11ef78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF78u;
        // 0x11ef7c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef78) {
            ctx->pc = 0x11EF88u;
            goto label_11ef88;
        }
    }
    ctx->pc = 0x11EF80u;
    // 0x11ef80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x11EF80u;
    SET_GPR_U32(ctx, 31, 0x11EF88u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x11EF80u, 0x11EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF88u;
label_11ef88:
    // 0x11ef88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11ef88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ef8c:
    // 0x11ef8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ef8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ef90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ef90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ef94: 0x3e00008  jr          $ra
    ctx->pc = 0x11EF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF94u;
        // 0x11ef98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EF9Cu;
}
