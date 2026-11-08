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

// Function: entry_001ed258
// Address: 0x1ed258 - 0x1ed280
void entry_001ed258_0x1ed258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed258_0x1ed258");
#endif

    switch (ctx->pc) {
        case 0x1ed26cu: goto label_1ed26c;
        default: break;
    }

    ctx->pc = 0x1ed258u;

label_1ed258:
    // 0x1ed258: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ed258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ed25c:
    // 0x1ed25c: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed260:
    // 0x1ed260: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1ed264:
    // 0x1ed264: 0x40f809  jalr        $v0
label_1ed268:
    if (ctx->pc == 0x1ED268u) {
        ctx->pc = 0x1ED268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED264u;
        // 0x1ed268: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED26Cu;
        goto label_1ed26c;
    }
    ctx->pc = 0x1ED264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED26Cu);
        ctx->pc = 0x1ED268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED264u;
        // 0x1ed268: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED264u, 0x1ED26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED26Cu;
label_1ed26c:
    // 0x1ed26c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed26cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed270:
    // 0x1ed270: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ed274:
    if (ctx->pc == 0x1ED274u) {
        ctx->pc = 0x1ED274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED270u;
        // 0x1ed274: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED278u;
        goto label_1ed278;
    }
    ctx->pc = 0x1ED270u;
    {
        const bool branch_taken_0x1ed270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED270u;
        // 0x1ed274: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed270) {
            ctx->pc = 0x1ED258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed258;
        }
    }
    ctx->pc = 0x1ED278u;
label_1ed278:
    // 0x1ed278: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_1ed27c:
    if (ctx->pc == 0x1ED27Cu) {
        ctx->pc = 0x1ED27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED278u;
        // 0x1ed27c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED280u;
        goto label_fallthrough_0x1ed278;
    }
    ctx->pc = 0x1ED278u;
    {
        const bool branch_taken_0x1ed278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED278u;
        // 0x1ed27c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed278) {
            ctx->pc = 0x1ED640u;
            return;
        }
    }
label_fallthrough_0x1ed278:
    ctx->pc = 0x1ED280u;
}
