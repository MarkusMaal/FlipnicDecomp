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

// Function: FUN_0012db00
// Address: 0x12db00 - 0x12db68
void FUN_0012db00_0x12db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012db00_0x12db00");
#endif

    switch (ctx->pc) {
        case 0x12db38u: goto label_12db38;
        case 0x12db50u: goto label_12db50;
        default: break;
    }

    ctx->pc = 0x12db00u;

    // 0x12db00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12db04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12db08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12db0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12db0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12db10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12db10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db14: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x12DB14u;
    {
        const bool branch_taken_0x12db14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB14u;
        // 0x12db18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db14) {
            ctx->pc = 0x12DB50u;
            goto label_12db50;
        }
    }
    ctx->pc = 0x12DB1Cu;
    // 0x12db1c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DB1Cu;
    {
        const bool branch_taken_0x12db1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB1Cu;
        // 0x12db20: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db1c) {
            ctx->pc = 0x12DB3Cu;
            goto label_12db3c;
        }
    }
    ctx->pc = 0x12DB24u;
    // 0x12db24: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x12db24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12db28: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DB28u;
    {
        const bool branch_taken_0x12db28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db28) {
            ctx->pc = 0x12DB38u;
            goto label_12db38;
        }
    }
    ctx->pc = 0x12DB30u;
    // 0x12db30: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12DB30u;
    SET_GPR_U32(ctx, 31, 0x12DB38u);
    ctx->pc = 0x12ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECB0u, 0x12DB30u, 0x12DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB38u;
label_12db38:
    // 0x12db38: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x12db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_12db3c:
    // 0x12db3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12db3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12db40: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DB40u;
    {
        const bool branch_taken_0x12db40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB40u;
        // 0x12db44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db40) {
            ctx->pc = 0x12DB54u;
            goto label_12db54;
        }
    }
    ctx->pc = 0x12DB48u;
    // 0x12db48: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12DB48u;
    SET_GPR_U32(ctx, 31, 0x12DB50u);
    ctx->pc = 0x12DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DB48u;
    // 0x12db4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12DB48u, 0x12DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB50u;
label_12db50:
    // 0x12db50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12db50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12db54:
    // 0x12db54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12db54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12db58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12db58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12db5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12db5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12db60: 0x3e00008  jr          $ra
    ctx->pc = 0x12DB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB60u;
        // 0x12db64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DB68u;
}
