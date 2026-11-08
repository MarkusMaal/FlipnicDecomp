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

// Function: FUN_0010f410
// Address: 0x10f410 - 0x10f494
void FUN_0010f410_0x10f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f410_0x10f410");
#endif

    switch (ctx->pc) {
        case 0x10f438u: goto label_10f438;
        case 0x10f484u: goto label_10f484;
        default: break;
    }

    ctx->pc = 0x10f410u;

    // 0x10f410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10f418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10f41c: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x10f41cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
    // 0x10f420: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x10F420u;
    {
        const bool branch_taken_0x10f420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F420u;
        // 0x10f424: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f420) {
            ctx->pc = 0x10F484u;
            goto label_10f484;
        }
    }
    ctx->pc = 0x10F428u;
    // 0x10f428: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x10f428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x10f42c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10f42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f430: 0xc05bc3c  jal         func_16F0F0
    ctx->pc = 0x10F430u;
    SET_GPR_U32(ctx, 31, 0x10F438u);
    ctx->pc = 0x10F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F430u;
    // 0x10f434: 0x24847520  addiu       $a0, $a0, 0x7520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F0F0u, 0x10F430u, 0x10F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F438u;
label_10f438:
    // 0x10f438: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10F438u;
    {
        const bool branch_taken_0x10f438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f438) {
            ctx->pc = 0x10F46Cu;
            goto label_10f46c;
        }
    }
    ctx->pc = 0x10F440u;
    // 0x10f440: 0x92030224  lbu         $v1, 0x224($s0)
    ctx->pc = 0x10f440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10f444: 0x31f3c  dsll32      $v1, $v1, 28
    ctx->pc = 0x10f444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 28));
    // 0x10f448: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10f448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x10f44c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F44Cu;
    {
        const bool branch_taken_0x10f44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f44c) {
            ctx->pc = 0x10F46Cu;
            goto label_10f46c;
        }
    }
    ctx->pc = 0x10F454u;
    // 0x10f454: 0x92050225  lbu         $a1, 0x225($s0)
    ctx->pc = 0x10f454u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 549)));
    // 0x10f458: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x10f458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x10f45c: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x10f45cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x10f460: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f464: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f468: 0xa2030225  sb          $v1, 0x225($s0)
    ctx->pc = 0x10f468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 549), (uint8_t)GPR_U32(ctx, 3));
label_10f46c:
    // 0x10f46c: 0x92030224  lbu         $v1, 0x224($s0)
    ctx->pc = 0x10f46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10f470: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x10f470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10f474: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F474u;
    {
        const bool branch_taken_0x10f474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F474u;
        // 0x10f478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f474) {
            ctx->pc = 0x10F484u;
            goto label_10f484;
        }
    }
    ctx->pc = 0x10F47Cu;
    // 0x10f47c: 0xc043e3c  jal         func_10F8F0
    ctx->pc = 0x10F47Cu;
    SET_GPR_U32(ctx, 31, 0x10F484u);
    ctx->pc = 0x10F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F8F0u, 0x10F47Cu, 0x10F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F484u;
label_10f484:
    // 0x10f484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f48c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F48Cu;
        // 0x10f490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F494u;
}
