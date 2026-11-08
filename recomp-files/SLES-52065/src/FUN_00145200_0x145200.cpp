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

// Function: FUN_00145200
// Address: 0x145200 - 0x1452dc
void FUN_00145200_0x145200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145200_0x145200");
#endif

    switch (ctx->pc) {
        case 0x145220u: goto label_145220;
        case 0x14522cu: goto label_14522c;
        case 0x145238u: goto label_145238;
        case 0x145248u: goto label_145248;
        case 0x145254u: goto label_145254;
        case 0x145264u: goto label_145264;
        case 0x145274u: goto label_145274;
        case 0x145288u: goto label_145288;
        case 0x145298u: goto label_145298;
        case 0x1452a8u: goto label_1452a8;
        case 0x1452bcu: goto label_1452bc;
        default: break;
    }

    ctx->pc = 0x145200u;

    // 0x145200: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x145200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x145204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x145204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x145208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14520c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14520cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145214: 0x24041800  addiu       $a0, $zero, 0x1800
    ctx->pc = 0x145214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x145218: 0xc040168  jal         func_1005A0
    ctx->pc = 0x145218u;
    SET_GPR_U32(ctx, 31, 0x145220u);
    ctx->pc = 0x14521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145218u;
    // 0x14521c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x145218u, 0x145220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145220u;
label_145220:
    // 0x145220: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x145220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x145224: 0xc040168  jal         func_1005A0
    ctx->pc = 0x145224u;
    SET_GPR_U32(ctx, 31, 0x14522Cu);
    ctx->pc = 0x145228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145224u;
    // 0x145228: 0x24041800  addiu       $a0, $zero, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x145224u, 0x14522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14522Cu;
label_14522c:
    // 0x14522c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x14522cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x145230: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x145230u;
    SET_GPR_U32(ctx, 31, 0x145238u);
    ctx->pc = 0x145234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145230u;
    // 0x145234: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x145230u, 0x145238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145238u;
label_145238:
    // 0x145238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145238u;
    {
        const bool branch_taken_0x145238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145238u;
        // 0x14523c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145238) {
            ctx->pc = 0x145248u;
            goto label_145248;
        }
    }
    ctx->pc = 0x145240u;
    // 0x145240: 0xc04c998  jal         func_132660
    ctx->pc = 0x145240u;
    SET_GPR_U32(ctx, 31, 0x145248u);
    ctx->pc = 0x145244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145240u;
    // 0x145244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132660u, 0x145240u, 0x145248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145248u;
label_145248:
    // 0x145248: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x145248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14524c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14524Cu;
    SET_GPR_U32(ctx, 31, 0x145254u);
    ctx->pc = 0x145250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14524Cu;
    // 0x145250: 0xae500018  sw          $s0, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14524Cu, 0x145254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145254u;
label_145254:
    // 0x145254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145254u;
    {
        const bool branch_taken_0x145254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145254u;
        // 0x145258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145254) {
            ctx->pc = 0x145264u;
            goto label_145264;
        }
    }
    ctx->pc = 0x14525Cu;
    // 0x14525c: 0xc0514e4  jal         func_145390
    ctx->pc = 0x14525Cu;
    SET_GPR_U32(ctx, 31, 0x145264u);
    ctx->pc = 0x145260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14525Cu;
    // 0x145260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145390u, 0x14525Cu, 0x145264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145264u;
label_145264:
    // 0x145264: 0xae5001a0  sw          $s0, 0x1A0($s2)
    ctx->pc = 0x145264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 16));
    // 0x145268: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x145268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14526c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14526Cu;
    SET_GPR_U32(ctx, 31, 0x145274u);
    ctx->pc = 0x145270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14526Cu;
    // 0x145270: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14526Cu, 0x145274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145274u;
label_145274:
    // 0x145274: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x145274u;
    {
        const bool branch_taken_0x145274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145274u;
        // 0x145278: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145274) {
            ctx->pc = 0x145298u;
            goto label_145298;
        }
    }
    ctx->pc = 0x14527Cu;
    // 0x14527c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14527cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145280: 0xc051654  jal         func_145950
    ctx->pc = 0x145280u;
    SET_GPR_U32(ctx, 31, 0x145288u);
    ctx->pc = 0x145284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145280u;
    // 0x145284: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145950u, 0x145280u, 0x145288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145288u;
label_145288:
    // 0x145288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14528c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x14528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145290: 0xc0515b4  jal         func_1456D0
    ctx->pc = 0x145290u;
    SET_GPR_U32(ctx, 31, 0x145298u);
    ctx->pc = 0x145294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145290u;
    // 0x145294: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1456D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1456D0u, 0x145290u, 0x145298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145298u;
label_145298:
    // 0x145298: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x145298u;
    {
        const bool branch_taken_0x145298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145298u;
        // 0x14529c: 0xae5101a4  sw          $s1, 0x1A4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145298) {
            ctx->pc = 0x1452BCu;
            goto label_1452bc;
        }
    }
    ctx->pc = 0x1452A0u;
    // 0x1452a0: 0xc0514ec  jal         func_1453B0
    ctx->pc = 0x1452A0u;
    SET_GPR_U32(ctx, 31, 0x1452A8u);
    ctx->pc = 0x1452A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452A0u;
    // 0x1452a4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1453B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1453B0u, 0x1452A0u, 0x1452A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452A8u;
label_1452a8:
    // 0x1452a8: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1452a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1452ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1452ACu;
    {
        const bool branch_taken_0x1452ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452ACu;
        // 0x1452b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452ac) {
            ctx->pc = 0x1452BCu;
            goto label_1452bc;
        }
    }
    ctx->pc = 0x1452B4u;
    // 0x1452b4: 0xc04f118  jal         func_13C460
    ctx->pc = 0x1452B4u;
    SET_GPR_U32(ctx, 31, 0x1452BCu);
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x1452B4u, 0x1452BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452BCu;
label_1452bc:
    // 0x1452bc: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1452bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1452c0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1452c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1452c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1452c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1452c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1452c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1452cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1452ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1452d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1452d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1452d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1452D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1452D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452D4u;
        // 0x1452d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1452D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1452DCu;
}
