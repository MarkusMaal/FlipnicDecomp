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

// Function: FUN_001a31d0
// Address: 0x1a31d0 - 0x1a3240
void FUN_001a31d0_0x1a31d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a31d0_0x1a31d0");
#endif

    switch (ctx->pc) {
        case 0x1a3204u: goto label_1a3204;
        case 0x1a3210u: goto label_1a3210;
        case 0x1a3228u: goto label_1a3228;
        default: break;
    }

    ctx->pc = 0x1a31d0u;

    // 0x1a31d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a31d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a31d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a31d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a31d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a31d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a31dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a31dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a31e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a31e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31e4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A31E4u;
    {
        const bool branch_taken_0x1a31e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31E4u;
        // 0x1a31e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31e4) {
            ctx->pc = 0x1A3228u;
            goto label_1a3228;
        }
    }
    ctx->pc = 0x1A31ECu;
    // 0x1a31ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a31f0: 0x26240670  addiu       $a0, $s1, 0x670
    ctx->pc = 0x1a31f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    // 0x1a31f4: 0x2442b3a0  addiu       $v0, $v0, -0x4C60
    ctx->pc = 0x1a31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947744));
    // 0x1a31f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a31f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a31fc: 0xc0699c8  jal         func_1A6720
    ctx->pc = 0x1A31FCu;
    SET_GPR_U32(ctx, 31, 0x1A3204u);
    ctx->pc = 0x1A3200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31FCu;
    // 0x1a3200: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6720u, 0x1A31FCu, 0x1A3204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3204u;
label_1a3204:
    // 0x1a3204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3208: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A3208u;
    SET_GPR_U32(ctx, 31, 0x1A3210u);
    ctx->pc = 0x1A320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3208u;
    // 0x1a320c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A3208u, 0x1A3210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3210u;
label_1a3210:
    // 0x1a3210: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a3210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a3214: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a3214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a3218: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3218u;
    {
        const bool branch_taken_0x1a3218 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3218u;
        // 0x1a321c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3218) {
            ctx->pc = 0x1A322Cu;
            goto label_1a322c;
        }
    }
    ctx->pc = 0x1A3220u;
    // 0x1a3220: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A3220u;
    SET_GPR_U32(ctx, 31, 0x1A3228u);
    ctx->pc = 0x1A3224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3220u;
    // 0x1a3224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A3220u, 0x1A3228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3228u;
label_1a3228:
    // 0x1a3228: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a3228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a322c:
    // 0x1a322c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3238: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3238u;
        // 0x1a323c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3240u;
}
