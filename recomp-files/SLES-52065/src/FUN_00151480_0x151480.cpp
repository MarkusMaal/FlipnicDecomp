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

// Function: FUN_00151480
// Address: 0x151480 - 0x151588
void FUN_00151480_0x151480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151480_0x151480");
#endif

    switch (ctx->pc) {
        case 0x1514acu: goto label_1514ac;
        case 0x1514bcu: goto label_1514bc;
        case 0x1514ccu: goto label_1514cc;
        case 0x1514dcu: goto label_1514dc;
        case 0x151508u: goto label_151508;
        case 0x151514u: goto label_151514;
        case 0x151520u: goto label_151520;
        case 0x15152cu: goto label_15152c;
        case 0x15153cu: goto label_15153c;
        default: break;
    }

    ctx->pc = 0x151480u;

    // 0x151480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x151480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x151484: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x151484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x151488: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x151488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15148c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15148cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151494: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x151494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15149c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15149cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1514a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514a4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1514A4u;
    SET_GPR_U32(ctx, 31, 0x1514ACu);
    ctx->pc = 0x1514A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1514A4u;
    // 0x1514a8: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1514A4u, 0x1514ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514ACu;
label_1514ac:
    // 0x1514ac: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1514acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1514b0: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1514b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1514b4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1514B4u;
    SET_GPR_U32(ctx, 31, 0x1514BCu);
    ctx->pc = 0x1514B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1514B4u;
    // 0x1514b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1514B4u, 0x1514BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514BCu;
label_1514bc:
    // 0x1514bc: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1514bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1514c0: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x1514c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1514c4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1514C4u;
    SET_GPR_U32(ctx, 31, 0x1514CCu);
    ctx->pc = 0x1514C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1514C4u;
    // 0x1514c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1514C4u, 0x1514CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514CCu;
label_1514cc:
    // 0x1514cc: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1514ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1514d0: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x1514d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1514d4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1514D4u;
    SET_GPR_U32(ctx, 31, 0x1514DCu);
    ctx->pc = 0x1514D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1514D4u;
    // 0x1514d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1514D4u, 0x1514DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514DCu;
label_1514dc:
    // 0x1514dc: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1514dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1514e0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1514e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1514e4: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1514e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1514e8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1514e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1514ec: 0x2484f360  addiu       $a0, $a0, -0xCA0
    ctx->pc = 0x1514ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964064));
    // 0x1514f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1514f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1514f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514f8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1514f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1514fc: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x1514fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x151500: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x151500u;
    SET_GPR_U32(ctx, 31, 0x151508u);
    ctx->pc = 0x151504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151500u;
    // 0x151504: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x151500u, 0x151508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151508u;
label_151508:
    // 0x151508: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x151508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x15150c: 0xc04e5d4  jal         func_139750
    ctx->pc = 0x15150Cu;
    SET_GPR_U32(ctx, 31, 0x151514u);
    ctx->pc = 0x151510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15150Cu;
    // 0x151510: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139750u, 0x15150Cu, 0x151514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151514u;
label_151514:
    // 0x151514: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x151514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x151518: 0xc04e5ec  jal         func_1397B0
    ctx->pc = 0x151518u;
    SET_GPR_U32(ctx, 31, 0x151520u);
    ctx->pc = 0x15151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151518u;
    // 0x15151c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1397B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1397B0u, 0x151518u, 0x151520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151520u;
label_151520:
    // 0x151520: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x151520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x151524: 0xc04e668  jal         func_1399A0
    ctx->pc = 0x151524u;
    SET_GPR_U32(ctx, 31, 0x15152Cu);
    ctx->pc = 0x151528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151524u;
    // 0x151528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1399A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1399A0u, 0x151524u, 0x15152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15152Cu;
label_15152c:
    // 0x15152c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x15152cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x151530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151534: 0xc04e678  jal         func_1399E0
    ctx->pc = 0x151534u;
    SET_GPR_U32(ctx, 31, 0x15153Cu);
    ctx->pc = 0x151538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151534u;
    // 0x151538: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1399E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1399E0u, 0x151534u, 0x15153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15153Cu;
label_15153c:
    // 0x15153c: 0x92070040  lbu         $a3, 0x40($s0)
    ctx->pc = 0x15153cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x151540: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x151540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x151544: 0x64060002  daddiu      $a2, $zero, 0x2
    ctx->pc = 0x151544u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x151548: 0x2403fff9  addiu       $v1, $zero, -0x7
    ctx->pc = 0x151548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x15154c: 0x64040006  daddiu      $a0, $zero, 0x6
    ctx->pc = 0x15154cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x151550: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x151550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151554: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x151554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x151558: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x151558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x15155c: 0xa2050040  sb          $a1, 0x40($s0)
    ctx->pc = 0x15155cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x151560: 0x92050042  lbu         $a1, 0x42($s0)
    ctx->pc = 0x151560u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x151564: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x151564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x151568: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x151568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15156c: 0xa2030042  sb          $v1, 0x42($s0)
    ctx->pc = 0x15156cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 3));
    // 0x151570: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15157c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15157cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151580: 0x3e00008  jr          $ra
    ctx->pc = 0x151580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151580u;
        // 0x151584: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151588u;
}
