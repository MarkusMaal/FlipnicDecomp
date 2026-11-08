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

// Function: entry_0015e538
// Address: 0x15e538 - 0x15e588
void entry_0015e538_0x15e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e538_0x15e538");
#endif

    switch (ctx->pc) {
        case 0x15e554u: goto label_15e554;
        case 0x15e578u: goto label_15e578;
        default: break;
    }

    ctx->pc = 0x15e538u;

label_15e538:
    // 0x15e538: 0x2f11021  addu        $v0, $s7, $s1
    ctx->pc = 0x15e538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_15e53c:
    // 0x15e53c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15e540:
    // 0x15e540: 0x26540040  addiu       $s4, $s2, 0x40
    ctx->pc = 0x15e540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_15e544:
    // 0x15e544: 0x24562cd8  addiu       $s6, $v0, 0x2CD8
    ctx->pc = 0x15e544u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_15e548:
    // 0x15e548: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x15e548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15e54c:
    // 0x15e54c: 0xc0563e4  jal         func_158F90
label_15e550:
    if (ctx->pc == 0x15E550u) {
        ctx->pc = 0x15E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E54Cu;
        // 0x15e550: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E554u;
        goto label_15e554;
    }
    ctx->pc = 0x15E54Cu;
    SET_GPR_U32(ctx, 31, 0x15E554u);
    ctx->pc = 0x15E550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E54Cu;
    // 0x15e550: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F90u, 0x15E54Cu, 0x15E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E554u;
label_15e554:
    // 0x15e554: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15e558:
    // 0x15e558: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_15e55c:
    if (ctx->pc == 0x15E55Cu) {
        ctx->pc = 0x15E560u;
        goto label_15e560;
    }
    ctx->pc = 0x15E558u;
    {
        const bool branch_taken_0x15e558 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e558) {
            ctx->pc = 0x15E588u;
            return;
        }
    }
    ctx->pc = 0x15E560u;
label_15e560:
    // 0x15e560: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x15e560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_15e564:
    // 0x15e564: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15e564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e568:
    // 0x15e568: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15e568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15e56c:
    // 0x15e56c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x15e56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_15e570:
    // 0x15e570: 0x320f809  jalr        $t9
label_15e574:
    if (ctx->pc == 0x15E574u) {
        ctx->pc = 0x15E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E570u;
        // 0x15e574: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E578u;
        goto label_15e578;
    }
    ctx->pc = 0x15E570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E578u);
        ctx->pc = 0x15E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E570u;
        // 0x15e574: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E570u, 0x15E578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E578u;
label_15e578:
    // 0x15e578: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15e57c:
    // 0x15e57c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_15e580:
    if (ctx->pc == 0x15E580u) {
        ctx->pc = 0x15E584u;
        goto label_15e584;
    }
    ctx->pc = 0x15E57Cu;
    {
        const bool branch_taken_0x15e57c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e57c) {
            ctx->pc = 0x15E588u;
            return;
        }
    }
    ctx->pc = 0x15E584u;
label_15e584:
    // 0x15e584: 0xae530240  sw          $s3, 0x240($s2)
    ctx->pc = 0x15e584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 576), GPR_U32(ctx, 19));
    ctx->pc = 0x15e588u;
}
