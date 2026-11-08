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

// Function: FUN_00145160
// Address: 0x145160 - 0x1451c8
void FUN_00145160_0x145160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145160_0x145160");
#endif

    switch (ctx->pc) {
        case 0x145198u: goto label_145198;
        case 0x1451b0u: goto label_1451b0;
        default: break;
    }

    ctx->pc = 0x145160u;

    // 0x145160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14516c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145174: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x145174u;
    {
        const bool branch_taken_0x145174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x145178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145174u;
        // 0x145178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145174) {
            ctx->pc = 0x1451B0u;
            goto label_1451b0;
        }
    }
    ctx->pc = 0x14517Cu;
    // 0x14517c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14517Cu;
    {
        const bool branch_taken_0x14517c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x145180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14517Cu;
        // 0x145180: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14517c) {
            ctx->pc = 0x14519Cu;
            goto label_14519c;
        }
    }
    ctx->pc = 0x145184u;
    // 0x145184: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x145184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x145188: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145188u;
    {
        const bool branch_taken_0x145188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x145188) {
            ctx->pc = 0x145198u;
            goto label_145198;
        }
    }
    ctx->pc = 0x145190u;
    // 0x145190: 0xc0401a4  jal         func_100690
    ctx->pc = 0x145190u;
    SET_GPR_U32(ctx, 31, 0x145198u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x145190u, 0x145198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145198u;
label_145198:
    // 0x145198: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x145198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_14519c:
    // 0x14519c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14519cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1451a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1451A0u;
    {
        const bool branch_taken_0x1451a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1451A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451A0u;
        // 0x1451a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1451a0) {
            ctx->pc = 0x1451B4u;
            goto label_1451b4;
        }
    }
    ctx->pc = 0x1451A8u;
    // 0x1451a8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1451A8u;
    SET_GPR_U32(ctx, 31, 0x1451B0u);
    ctx->pc = 0x1451ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1451A8u;
    // 0x1451ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1451A8u, 0x1451B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451B0u;
label_1451b0:
    // 0x1451b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1451b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1451b4:
    // 0x1451b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1451b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1451b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1451b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1451bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1451c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1451C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1451C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451C0u;
        // 0x1451c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1451C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1451C8u;
}
