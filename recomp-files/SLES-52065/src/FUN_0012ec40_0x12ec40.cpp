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

// Function: FUN_0012ec40
// Address: 0x12ec40 - 0x12eca8
void FUN_0012ec40_0x12ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ec40_0x12ec40");
#endif

    switch (ctx->pc) {
        case 0x12ec64u: goto label_12ec64;
        case 0x12ec78u: goto label_12ec78;
        case 0x12ec90u: goto label_12ec90;
        default: break;
    }

    ctx->pc = 0x12ec40u;

    // 0x12ec40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ec44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12ec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12ec48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ec48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12ec4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ec50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12ec50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec54: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x12EC54u;
    {
        const bool branch_taken_0x12ec54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC54u;
        // 0x12ec58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec54) {
            ctx->pc = 0x12EC90u;
            goto label_12ec90;
        }
    }
    ctx->pc = 0x12EC5Cu;
    // 0x12ec5c: 0xc04bbe0  jal         func_12EF80
    ctx->pc = 0x12EC5Cu;
    SET_GPR_U32(ctx, 31, 0x12EC64u);
    ctx->pc = 0x12EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF80u, 0x12EC5Cu, 0x12EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC64u;
label_12ec64:
    // 0x12ec64: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12ec68: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EC68u;
    {
        const bool branch_taken_0x12ec68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC68u;
        // 0x12ec6c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec68) {
            ctx->pc = 0x12EC7Cu;
            goto label_12ec7c;
        }
    }
    ctx->pc = 0x12EC70u;
    // 0x12ec70: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EC70u;
    SET_GPR_U32(ctx, 31, 0x12EC78u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EC70u, 0x12EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC78u;
label_12ec78:
    // 0x12ec78: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x12ec78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_12ec7c:
    // 0x12ec7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12ec7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12ec80: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EC80u;
    {
        const bool branch_taken_0x12ec80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC80u;
        // 0x12ec84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec80) {
            ctx->pc = 0x12EC94u;
            goto label_12ec94;
        }
    }
    ctx->pc = 0x12EC88u;
    // 0x12ec88: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EC88u;
    SET_GPR_U32(ctx, 31, 0x12EC90u);
    ctx->pc = 0x12EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC88u;
    // 0x12ec8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EC88u, 0x12EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC90u;
label_12ec90:
    // 0x12ec90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12ec90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ec94:
    // 0x12ec94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12ec94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ec98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ec98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ec9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ec9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12eca0: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECA0u;
        // 0x12eca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ECA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ECA8u;
}
