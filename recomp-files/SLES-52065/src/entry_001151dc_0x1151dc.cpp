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

// Function: entry_001151dc
// Address: 0x1151dc - 0x11524c
void entry_001151dc_0x1151dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001151dc_0x1151dc");
#endif

    switch (ctx->pc) {
        case 0x115208u: goto label_115208;
        case 0x11521cu: goto label_11521c;
        case 0x11523cu: goto label_11523c;
        default: break;
    }

    ctx->pc = 0x1151dcu;

label_1151dc:
    // 0x1151dc: 0x10400268  beqz        $v0, . + 4 + (0x268 << 2)
label_1151e0:
    if (ctx->pc == 0x1151E0u) {
        ctx->pc = 0x1151E4u;
        goto label_1151e4;
    }
    ctx->pc = 0x1151DCu;
    {
        const bool branch_taken_0x1151dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1151dc) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x1151E4u;
label_1151e4:
    // 0x1151e4: 0x938282b8  lbu         $v0, -0x7D48($gp)
    ctx->pc = 0x1151e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935224)));
label_1151e8:
    // 0x1151e8: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x1151e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_1151ec:
    // 0x1151ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1151ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1151f0:
    // 0x1151f0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1151f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1151f4:
    // 0x1151f4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1151f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1151f8:
    // 0x1151f8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1151f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1151fc:
    // 0x1151fc: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1151fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_115200:
    // 0x115200: 0x320f809  jalr        $t9
label_115204:
    if (ctx->pc == 0x115204u) {
        ctx->pc = 0x115204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115200u;
        // 0x115204: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115208u;
        goto label_115208;
    }
    ctx->pc = 0x115200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115208u);
        ctx->pc = 0x115204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115200u;
        // 0x115204: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115200u, 0x115208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115208u;
label_115208:
    // 0x115208: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11520c:
    // 0x11520c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115210:
    // 0x115210: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x115210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_115214:
    // 0x115214: 0x320f809  jalr        $t9
label_115218:
    if (ctx->pc == 0x115218u) {
        ctx->pc = 0x115218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115214u;
        // 0x115218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11521Cu;
        goto label_11521c;
    }
    ctx->pc = 0x115214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11521Cu);
        ctx->pc = 0x115218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115214u;
        // 0x115218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115214u, 0x11521Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11521Cu;
label_11521c:
    // 0x11521c: 0x938282bc  lbu         $v0, -0x7D44($gp)
    ctx->pc = 0x11521cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935228)));
label_115220:
    // 0x115220: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x115220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_115224:
    // 0x115224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115228:
    // 0x115228: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11522c:
    // 0x11522c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11522cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115230:
    // 0x115230: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115234:
    // 0x115234: 0x320f809  jalr        $t9
label_115238:
    if (ctx->pc == 0x115238u) {
        ctx->pc = 0x115238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115234u;
        // 0x115238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11523Cu;
        goto label_11523c;
    }
    ctx->pc = 0x115234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11523Cu);
        ctx->pc = 0x115238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115234u;
        // 0x115238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115234u, 0x11523Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11523Cu;
label_11523c:
    // 0x11523c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x11523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_115240:
    // 0x115240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_115244:
    // 0x115244: 0x1000024e  b           . + 4 + (0x24E << 2)
label_115248:
    if (ctx->pc == 0x115248u) {
        ctx->pc = 0x115248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115244u;
        // 0x115248: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11524Cu;
        goto label_fallthrough_0x115244;
    }
    ctx->pc = 0x115244u;
    {
        const bool branch_taken_0x115244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115244u;
        // 0x115248: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115244) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x115244:
    ctx->pc = 0x11524Cu;
}
