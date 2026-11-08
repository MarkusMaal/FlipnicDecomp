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

// Function: FUN_001ba510
// Address: 0x1ba510 - 0x1ba588
void FUN_001ba510_0x1ba510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ba510_0x1ba510");
#endif

    switch (ctx->pc) {
        case 0x1ba530u: goto label_1ba530;
        case 0x1ba540u: goto label_1ba540;
        case 0x1ba558u: goto label_1ba558;
        case 0x1ba568u: goto label_1ba568;
        default: break;
    }

    ctx->pc = 0x1ba510u;

    // 0x1ba510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba51c: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x1ba51cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ba520: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA520u;
    {
        const bool branch_taken_0x1ba520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA520u;
        // 0x1ba524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba520) {
            ctx->pc = 0x1BA544u;
            goto label_1ba544;
        }
    }
    ctx->pc = 0x1BA528u;
    // 0x1ba528: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1BA528u;
    SET_GPR_U32(ctx, 31, 0x1BA530u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1BA528u, 0x1BA530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA530u;
label_1ba530:
    // 0x1ba530: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba534: 0x8c252ef0  lw          $a1, 0x2EF0($at)
    ctx->pc = 0x1ba534u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x212EF0u));
    // 0x1ba538: 0xc062c20  jal         func_18B080
    ctx->pc = 0x1BA538u;
    SET_GPR_U32(ctx, 31, 0x1BA540u);
    ctx->pc = 0x1BA53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA538u;
    // 0x1ba53c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B080u, 0x1BA538u, 0x1BA540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA540u;
label_1ba540:
    // 0x1ba540: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x1ba540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
label_1ba544:
    // 0x1ba544: 0x9203001d  lbu         $v1, 0x1D($s0)
    ctx->pc = 0x1ba544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x1ba548: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA548u;
    {
        const bool branch_taken_0x1ba548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA548u;
        // 0x1ba54c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba548) {
            ctx->pc = 0x1BA570u;
            goto label_1ba570;
        }
    }
    ctx->pc = 0x1BA550u;
    // 0x1ba550: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1BA550u;
    SET_GPR_U32(ctx, 31, 0x1BA558u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1BA550u, 0x1BA558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA558u;
label_1ba558:
    // 0x1ba558: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba55c: 0x8c252ef8  lw          $a1, 0x2EF8($at)
    ctx->pc = 0x1ba55cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x212EF8u));
    // 0x1ba560: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x1BA560u;
    SET_GPR_U32(ctx, 31, 0x1BA568u);
    ctx->pc = 0x1BA564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA560u;
    // 0x1ba564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x1BA560u, 0x1BA568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA568u;
label_1ba568:
    // 0x1ba568: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x1ba568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba56c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ba56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ba570:
    // 0x1ba570: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1ba570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1ba574: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1ba574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1ba578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba57c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba580: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA580u;
        // 0x1ba584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA588u;
}
