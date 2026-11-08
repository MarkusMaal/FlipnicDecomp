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

// Function: FUN_00226150
// Address: 0x226150 - 0x226224
void FUN_00226150_0x226150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226150_0x226150");
#endif

    switch (ctx->pc) {
        case 0x2261dcu: goto label_2261dc;
        case 0x226200u: goto label_226200;
        case 0x226218u: goto label_226218;
        default: break;
    }

    ctx->pc = 0x226150u;

    // 0x226150: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x226150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x226154: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226158: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x226158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22615c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x22615cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x226160: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x226160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x226164: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x226164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x226168: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x226168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22616c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226170: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x226170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x226174: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x226174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x226178: 0xfc226500  sd          $v0, 0x6500($at)
    ctx->pc = 0x226178u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x356500u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x356500u, _value); } while (0);
    // 0x22617c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x22617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x226180: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x226180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x226184: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x226184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x226188: 0xfc236508  sd          $v1, 0x6508($at)
    ctx->pc = 0x226188u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x356508u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x356508u, _value); } while (0);
    // 0x22618c: 0x24a56e40  addiu       $a1, $a1, 0x6E40
    ctx->pc = 0x22618cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28224));
    // 0x226190: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x226190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x226194: 0x24c664e0  addiu       $a2, $a2, 0x64E0
    ctx->pc = 0x226194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25824));
    // 0x226198: 0xfc226518  sd          $v0, 0x6518($at)
    ctx->pc = 0x226198u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x356518u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x356518u, _value); } while (0);
    // 0x22619c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x22619cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2261a0: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x2261a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x2261a4: 0xa0246510  sb          $a0, 0x6510($at)
    ctx->pc = 0x2261a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x356510u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x356510u, _value); } while (0);
    // 0x2261a8: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x2261a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2261ac: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2261acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2261b0: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x2261b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2261b4: 0xa0246514  sb          $a0, 0x6514($at)
    ctx->pc = 0x2261b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x356514u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x356514u, _value); } while (0);
    // 0x2261b8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2261b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2261bc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2261bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2261c0: 0x90276511  lbu         $a3, 0x6511($at)
    ctx->pc = 0x2261c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x356511u));
    // 0x2261c4: 0x24846500  addiu       $a0, $a0, 0x6500
    ctx->pc = 0x2261c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25856));
    // 0x2261c8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2261c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2261cc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2261ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2261d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2261d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2261d4: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2261D4u;
    SET_GPR_U32(ctx, 31, 0x2261DCu);
    ctx->pc = 0x2261D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2261D4u;
    // 0x2261d8: 0xa0226511  sb          $v0, 0x6511($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 25873), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2261D4u, 0x2261DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261DCu;
label_2261dc:
    // 0x2261dc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2261dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2261e0: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x2261e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x2261e4: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x2261e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x2261e8: 0x24846530  addiu       $a0, $a0, 0x6530
    ctx->pc = 0x2261e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25904));
    // 0x2261ec: 0x24a56da0  addiu       $a1, $a1, 0x6DA0
    ctx->pc = 0x2261ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28064));
    // 0x2261f0: 0x24c66d50  addiu       $a2, $a2, 0x6D50
    ctx->pc = 0x2261f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27984));
    // 0x2261f4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2261f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2261f8: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x2261F8u;
    SET_GPR_U32(ctx, 31, 0x226200u);
    ctx->pc = 0x2261FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2261F8u;
    // 0x2261fc: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x2261F8u, 0x226200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226200u;
label_226200:
    // 0x226200: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x226200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x226204: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x226204u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x226208: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22620c: 0x24a56d30  addiu       $a1, $a1, 0x6D30
    ctx->pc = 0x22620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27952));
    // 0x226210: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226210u;
    SET_GPR_U32(ctx, 31, 0x226218u);
    ctx->pc = 0x226214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226210u;
    // 0x226214: 0x24c66520  addiu       $a2, $a2, 0x6520 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226210u, 0x226218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226218u;
label_226218:
    // 0x226218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22621c: 0x3e00008  jr          $ra
    ctx->pc = 0x22621Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22621Cu;
        // 0x226220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22621Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226224u;
}
