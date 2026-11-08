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

// Function: FUN_001a7b00
// Address: 0x1a7b00 - 0x1a7b60
void FUN_001a7b00_0x1a7b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7b00_0x1a7b00");
#endif

    switch (ctx->pc) {
        case 0x1a7b30u: goto label_1a7b30;
        case 0x1a7b48u: goto label_1a7b48;
        default: break;
    }

    ctx->pc = 0x1a7b00u;

    // 0x1a7b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7b04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b14: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A7B14u;
    {
        const bool branch_taken_0x1a7b14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B14u;
        // 0x1a7b18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b14) {
            ctx->pc = 0x1A7B48u;
            goto label_1a7b48;
        }
    }
    ctx->pc = 0x1A7B1Cu;
    // 0x1a7b1c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a7b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a7b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b24: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x1a7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x1a7b28: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A7B28u;
    SET_GPR_U32(ctx, 31, 0x1A7B30u);
    ctx->pc = 0x1A7B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B28u;
    // 0x1a7b2c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A7B28u, 0x1A7B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B30u;
label_1a7b30:
    // 0x1a7b30: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a7b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a7b34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a7b34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a7b38: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7B38u;
    {
        const bool branch_taken_0x1a7b38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A7B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B38u;
        // 0x1a7b3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b38) {
            ctx->pc = 0x1A7B4Cu;
            goto label_1a7b4c;
        }
    }
    ctx->pc = 0x1A7B40u;
    // 0x1a7b40: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A7B40u;
    SET_GPR_U32(ctx, 31, 0x1A7B48u);
    ctx->pc = 0x1A7B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B40u;
    // 0x1a7b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A7B40u, 0x1A7B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B48u;
label_1a7b48:
    // 0x1a7b48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a7b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b4c:
    // 0x1a7b4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7b58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B58u;
        // 0x1a7b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7B60u;
}
