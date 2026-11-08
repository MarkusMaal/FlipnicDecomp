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

// Function: entry_001012e8
// Address: 0x1012e8 - 0x101344
void entry_001012e8_0x1012e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001012e8_0x1012e8");
#endif

    switch (ctx->pc) {
        case 0x1012fcu: goto label_1012fc;
        case 0x101324u: goto label_101324;
        default: break;
    }

    ctx->pc = 0x1012e8u;

label_1012e8:
    // 0x1012e8: 0x8c84023c  lw          $a0, 0x23C($a0)
    ctx->pc = 0x1012e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 572)));
label_1012ec:
    // 0x1012ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1012ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1012f0:
    // 0x1012f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1012f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1012f4:
    // 0x1012f4: 0x320f809  jalr        $t9
label_1012f8:
    if (ctx->pc == 0x1012F8u) {
        ctx->pc = 0x1012F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012F4u;
        // 0x1012f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012FCu;
        goto label_1012fc;
    }
    ctx->pc = 0x1012F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1012FCu);
        ctx->pc = 0x1012F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012F4u;
        // 0x1012f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1012F4u, 0x1012FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1012FCu;
label_1012fc:
    // 0x1012fc: 0x8f848214  lw          $a0, -0x7DEC($gp)
    ctx->pc = 0x1012fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_101300:
    // 0x101300: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x101300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_101304:
    // 0x101304: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x101304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_101308:
    // 0x101308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10130c:
    // 0x10130c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x10130cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_101310:
    // 0x101310: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x101310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_101314:
    // 0x101314: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x101314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101318:
    // 0x101318: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x101318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_10131c:
    // 0x10131c: 0xc04ce04  jal         func_133810
label_101320:
    if (ctx->pc == 0x101320u) {
        ctx->pc = 0x101320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10131Cu;
        // 0x101320: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101324u;
        goto label_101324;
    }
    ctx->pc = 0x10131Cu;
    SET_GPR_U32(ctx, 31, 0x101324u);
    ctx->pc = 0x101320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10131Cu;
    // 0x101320: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133810u, 0x10131Cu, 0x101324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101324u;
label_101324:
    // 0x101324: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x101324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_101328:
    // 0x101328: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x101328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_10132c:
    // 0x10132c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101330:
    // 0x101330: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x101330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_101334:
    // 0x101334: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101338:
    // 0x101338: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x101338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10133c:
    // 0x10133c: 0x320f809  jalr        $t9
label_101340:
    if (ctx->pc == 0x101340u) {
        ctx->pc = 0x101340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10133Cu;
        // 0x101340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101344u;
        goto label_fallthrough_0x10133c;
    }
    ctx->pc = 0x10133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101344u);
        ctx->pc = 0x101340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10133Cu;
        // 0x101340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10133Cu, 0x101344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10133c:
    ctx->pc = 0x101344u;
}
