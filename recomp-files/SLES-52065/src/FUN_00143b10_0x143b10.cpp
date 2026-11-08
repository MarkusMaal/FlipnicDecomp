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

// Function: FUN_00143b10
// Address: 0x143b10 - 0x143b78
void FUN_00143b10_0x143b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143b10_0x143b10");
#endif

    switch (ctx->pc) {
        case 0x143b34u: goto label_143b34;
        case 0x143b48u: goto label_143b48;
        case 0x143b60u: goto label_143b60;
        default: break;
    }

    ctx->pc = 0x143b10u;

    // 0x143b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x143b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x143b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b24: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x143B24u;
    {
        const bool branch_taken_0x143b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x143B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B24u;
        // 0x143b28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b24) {
            ctx->pc = 0x143B60u;
            goto label_143b60;
        }
    }
    ctx->pc = 0x143B2Cu;
    // 0x143b2c: 0xc0510d8  jal         func_144360
    ctx->pc = 0x143B2Cu;
    SET_GPR_U32(ctx, 31, 0x143B34u);
    ctx->pc = 0x144360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144360u, 0x143B2Cu, 0x143B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B34u;
label_143b34:
    // 0x143b34: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x143b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x143b38: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143B38u;
    {
        const bool branch_taken_0x143b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x143B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B38u;
        // 0x143b3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b38) {
            ctx->pc = 0x143B4Cu;
            goto label_143b4c;
        }
    }
    ctx->pc = 0x143B40u;
    // 0x143b40: 0xc0401a4  jal         func_100690
    ctx->pc = 0x143B40u;
    SET_GPR_U32(ctx, 31, 0x143B48u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x143B40u, 0x143B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B48u;
label_143b48:
    // 0x143b48: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x143b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_143b4c:
    // 0x143b4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143b4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x143b50: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143B50u;
    {
        const bool branch_taken_0x143b50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x143B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B50u;
        // 0x143b54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b50) {
            ctx->pc = 0x143B64u;
            goto label_143b64;
        }
    }
    ctx->pc = 0x143B58u;
    // 0x143b58: 0xc0401a4  jal         func_100690
    ctx->pc = 0x143B58u;
    SET_GPR_U32(ctx, 31, 0x143B60u);
    ctx->pc = 0x143B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B58u;
    // 0x143b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x143B58u, 0x143B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B60u;
label_143b60:
    // 0x143b60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x143b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_143b64:
    // 0x143b64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x143b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143b6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143b70: 0x3e00008  jr          $ra
    ctx->pc = 0x143B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B70u;
        // 0x143b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143B78u;
}
