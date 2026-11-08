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

// Function: entry_0012b3ec
// Address: 0x12b3ec - 0x12b448
void entry_0012b3ec_0x12b3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b3ec_0x12b3ec");
#endif

    switch (ctx->pc) {
        case 0x12b404u: goto label_12b404;
        case 0x12b420u: goto label_12b420;
        case 0x12b430u: goto label_12b430;
        case 0x12b438u: goto label_12b438;
        default: break;
    }

    ctx->pc = 0x12b3ecu;

label_12b3ec:
    // 0x12b3ec: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_12b3f0:
    // 0x12b3f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12b3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b3f4:
    // 0x12b3f4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12b3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12b3f8:
    // 0x12b3f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x12b3f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_12b3fc:
    // 0x12b3fc: 0x320f809  jalr        $t9
label_12b400:
    if (ctx->pc == 0x12B400u) {
        ctx->pc = 0x12B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3FCu;
        // 0x12b400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B404u;
        goto label_12b404;
    }
    ctx->pc = 0x12B3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B404u);
        ctx->pc = 0x12B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3FCu;
        // 0x12b400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B3FCu, 0x12B404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B404u;
label_12b404:
    // 0x12b404: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x12b404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12b408:
    // 0x12b408: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12b408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_12b40c:
    // 0x12b40c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12b410:
    // 0x12b410: 0x24a5ec60  addiu       $a1, $a1, -0x13A0
    ctx->pc = 0x12b410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962272));
label_12b414:
    // 0x12b414: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x12b414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_12b418:
    // 0x12b418: 0x320f809  jalr        $t9
label_12b41c:
    if (ctx->pc == 0x12B41Cu) {
        ctx->pc = 0x12B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B418u;
        // 0x12b41c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B420u;
        goto label_12b420;
    }
    ctx->pc = 0x12B418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B420u);
        ctx->pc = 0x12B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B418u;
        // 0x12b41c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B418u, 0x12B420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B420u;
label_12b420:
    // 0x12b420: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12b420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b424:
    // 0x12b424: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12b424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12b428:
    // 0x12b428: 0xc04c6f0  jal         func_131BC0
label_12b42c:
    if (ctx->pc == 0x12B42Cu) {
        ctx->pc = 0x12B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B428u;
        // 0x12b42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B430u;
        goto label_12b430;
    }
    ctx->pc = 0x12B428u;
    SET_GPR_U32(ctx, 31, 0x12B430u);
    ctx->pc = 0x12B42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B428u;
    // 0x12b42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x12B428u, 0x12B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B430u;
label_12b430:
    // 0x12b430: 0xc0401bc  jal         func_1006F0
label_12b434:
    if (ctx->pc == 0x12B434u) {
        ctx->pc = 0x12B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B430u;
        // 0x12b434: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B438u;
        goto label_12b438;
    }
    ctx->pc = 0x12B430u;
    SET_GPR_U32(ctx, 31, 0x12B438u);
    ctx->pc = 0x12B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B430u;
    // 0x12b434: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12B430u, 0x12B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B438u;
label_12b438:
    // 0x12b438: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b43c:
    if (ctx->pc == 0x12B43Cu) {
        ctx->pc = 0x12B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B438u;
        // 0x12b43c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B440u;
        goto label_12b440;
    }
    ctx->pc = 0x12B438u;
    {
        const bool branch_taken_0x12b438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B438u;
        // 0x12b43c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b438) {
            ctx->pc = 0x12B448u;
            return;
        }
    }
    ctx->pc = 0x12B440u;
label_12b440:
    // 0x12b440: 0xc04a93c  jal         func_12A4F0
label_12b444:
    if (ctx->pc == 0x12B444u) {
        ctx->pc = 0x12B448u;
        goto label_fallthrough_0x12b440;
    }
    ctx->pc = 0x12B440u;
    SET_GPR_U32(ctx, 31, 0x12B448u);
    ctx->pc = 0x12A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A4F0u, 0x12B440u, 0x12B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x12b440:
    ctx->pc = 0x12B448u;
}
