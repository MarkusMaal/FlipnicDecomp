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

// Function: entry_0010eff4
// Address: 0x10eff4 - 0x10f03c
void entry_0010eff4_0x10eff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eff4_0x10eff4");
#endif

    switch (ctx->pc) {
        case 0x10f014u: goto label_10f014;
        default: break;
    }

    ctx->pc = 0x10eff4u;

label_10eff4:
    // 0x10eff4: 0x92230231  lbu         $v1, 0x231($s1)
    ctx->pc = 0x10eff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_10eff8:
    // 0x10eff8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x10eff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_10effc:
    // 0x10effc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_10f000:
    if (ctx->pc == 0x10F000u) {
        ctx->pc = 0x10F004u;
        goto label_10f004;
    }
    ctx->pc = 0x10EFFCu;
    {
        const bool branch_taken_0x10effc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10effc) {
            ctx->pc = 0x10F03Cu;
            return;
        }
    }
    ctx->pc = 0x10F004u;
label_10f004:
    // 0x10f004: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f008:
    // 0x10f008: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x10f008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_10f00c:
    // 0x10f00c: 0x320f809  jalr        $t9
label_10f010:
    if (ctx->pc == 0x10F010u) {
        ctx->pc = 0x10F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F00Cu;
        // 0x10f010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F014u;
        goto label_10f014;
    }
    ctx->pc = 0x10F00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F014u);
        ctx->pc = 0x10F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F00Cu;
        // 0x10f010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F00Cu, 0x10F014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F014u;
label_10f014:
    // 0x10f014: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_10f018:
    if (ctx->pc == 0x10F018u) {
        ctx->pc = 0x10F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F014u;
        // 0x10f018: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F01Cu;
        goto label_10f01c;
    }
    ctx->pc = 0x10F014u;
    {
        const bool branch_taken_0x10f014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F014u;
        // 0x10f018: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f014) {
            ctx->pc = 0x10F03Cu;
            return;
        }
    }
    ctx->pc = 0x10F01Cu;
label_10f01c:
    // 0x10f01c: 0x64040008  daddiu      $a0, $zero, 0x8
    ctx->pc = 0x10f01cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_10f020:
    // 0x10f020: 0xae230228  sw          $v1, 0x228($s1)
    ctx->pc = 0x10f020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 3));
label_10f024:
    // 0x10f024: 0x92250231  lbu         $a1, 0x231($s1)
    ctx->pc = 0x10f024u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_10f028:
    // 0x10f028: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x10f028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_10f02c:
    // 0x10f02c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_10f030:
    // 0x10f030: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10f034:
    // 0x10f034: 0x10000035  b           . + 4 + (0x35 << 2)
label_10f038:
    if (ctx->pc == 0x10F038u) {
        ctx->pc = 0x10F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F034u;
        // 0x10f038: 0xa2230231  sb          $v1, 0x231($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F03Cu;
        goto label_fallthrough_0x10f034;
    }
    ctx->pc = 0x10F034u;
    {
        const bool branch_taken_0x10f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F034u;
        // 0x10f038: 0xa2230231  sb          $v1, 0x231($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f034) {
            ctx->pc = 0x10F10Cu;
            return;
        }
    }
label_fallthrough_0x10f034:
    ctx->pc = 0x10F03Cu;
}
