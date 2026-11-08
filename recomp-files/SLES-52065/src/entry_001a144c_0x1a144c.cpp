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

// Function: entry_001a144c
// Address: 0x1a144c - 0x1a1494
void entry_001a144c_0x1a144c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a144c_0x1a144c");
#endif

    switch (ctx->pc) {
        case 0x1a1470u: goto label_1a1470;
        default: break;
    }

    ctx->pc = 0x1a144cu;

label_1a144c:
    // 0x1a144c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1a144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1a1450:
    // 0x1a1450: 0xa04009fc  sb          $zero, 0x9FC($v0)
    ctx->pc = 0x1a1450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2556), (uint8_t)GPR_U32(ctx, 0));
label_1a1454:
    // 0x1a1454: 0x245509fc  addiu       $s5, $v0, 0x9FC
    ctx->pc = 0x1a1454u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 2556));
label_1a1458:
    // 0x1a1458: 0x8c4409e0  lw          $a0, 0x9E0($v0)
    ctx->pc = 0x1a1458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
label_1a145c:
    // 0x1a145c: 0x904509fc  lbu         $a1, 0x9FC($v0)
    ctx->pc = 0x1a145cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2556)));
label_1a1460:
    // 0x1a1460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1464:
    // 0x1a1464: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1468:
    // 0x1a1468: 0x320f809  jalr        $t9
label_1a146c:
    if (ctx->pc == 0x1A146Cu) {
        ctx->pc = 0x1A146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1468u;
        // 0x1a146c: 0x245209e0  addiu       $s2, $v0, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1470u;
        goto label_1a1470;
    }
    ctx->pc = 0x1A1468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1470u);
        ctx->pc = 0x1A146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1468u;
        // 0x1a146c: 0x245209e0  addiu       $s2, $v0, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1468u, 0x1A1470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1470u;
label_1a1470:
    // 0x1a1470: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x1a1470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1a1474:
    // 0x1a1474: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1a1478:
    if (ctx->pc == 0x1A1478u) {
        ctx->pc = 0x1A147Cu;
        goto label_1a147c;
    }
    ctx->pc = 0x1A1474u;
    {
        const bool branch_taken_0x1a1474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1474) {
            ctx->pc = 0x1A1494u;
            return;
        }
    }
    ctx->pc = 0x1A147Cu;
label_1a147c:
    // 0x1a147c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a147cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a1480:
    // 0x1a1480: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1484:
    // 0x1a1484: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1488:
    // 0x1a1488: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a148c:
    // 0x1a148c: 0x320f809  jalr        $t9
label_1a1490:
    if (ctx->pc == 0x1A1490u) {
        ctx->pc = 0x1A1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A148Cu;
        // 0x1a1490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1494u;
        goto label_fallthrough_0x1a148c;
    }
    ctx->pc = 0x1A148Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1494u);
        ctx->pc = 0x1A1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A148Cu;
        // 0x1a1490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A148Cu, 0x1A1494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a148c:
    ctx->pc = 0x1A1494u;
}
