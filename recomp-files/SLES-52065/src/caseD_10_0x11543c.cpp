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

// Function: caseD_10
// Address: 0x11543c - 0x11547c
void caseD_10_0x11543c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x11543c");
#endif

    switch (ctx->pc) {
        case 0x11543cu: goto label_11543c;
        case 0x115440u: goto label_115440;
        case 0x115444u: goto label_115444;
        case 0x115448u: goto label_115448;
        case 0x11544cu: goto label_11544c;
        case 0x115450u: goto label_115450;
        case 0x115454u: goto label_115454;
        case 0x115458u: goto label_115458;
        case 0x11545cu: goto label_11545c;
        case 0x115460u: goto label_115460;
        case 0x115464u: goto label_115464;
        case 0x115468u: goto label_115468;
        case 0x11546cu: goto label_11546c;
        case 0x115470u: goto label_115470;
        case 0x115474u: goto label_115474;
        case 0x115478u: goto label_115478;
        default: break;
    }

    ctx->pc = 0x11543cu;

label_11543c:
    // 0x11543c: 0x92440284  lbu         $a0, 0x284($s2)
    ctx->pc = 0x11543cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 644)));
label_115440:
    // 0x115440: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x115440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_115444:
    // 0x115444: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_115448:
    if (ctx->pc == 0x115448u) {
        ctx->pc = 0x11544Cu;
        goto label_11544c;
    }
    ctx->pc = 0x115444u;
    {
        const bool branch_taken_0x115444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x115444) {
            ctx->pc = 0x11547Cu;
            return;
        }
    }
    ctx->pc = 0x11544Cu;
label_11544c:
    // 0x11544c: 0xa2420284  sb          $v0, 0x284($s2)
    ctx->pc = 0x11544cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 2));
label_115450:
    // 0x115450: 0x27a80164  addiu       $t0, $sp, 0x164
    ctx->pc = 0x115450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_115454:
    // 0x115454: 0x938782d8  lbu         $a3, -0x7D28($gp)
    ctx->pc = 0x115454u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935256)));
label_115458:
    // 0x115458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11545c:
    // 0x11545c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11545cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_115460:
    // 0x115460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115464:
    // 0x115464: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x115464u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_115468:
    // 0x115468: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x115468u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_11546c:
    // 0x11546c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11546cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115470:
    // 0x115470: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115474:
    // 0x115474: 0x320f809  jalr        $t9
label_115478:
    if (ctx->pc == 0x115478u) {
        ctx->pc = 0x115478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115474u;
        // 0x115478: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11547Cu;
        goto label_fallthrough_0x115474;
    }
    ctx->pc = 0x115474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11547Cu);
        ctx->pc = 0x115478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115474u;
        // 0x115478: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115474u, 0x11547Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x115474:
    ctx->pc = 0x11547Cu;
}
