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

// Function: entry_001a65d8
// Address: 0x1a65d8 - 0x1a6600
void entry_001a65d8_0x1a65d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a65d8_0x1a65d8");
#endif

    switch (ctx->pc) {
        case 0x1a65ecu: goto label_1a65ec;
        default: break;
    }

    ctx->pc = 0x1a65d8u;

label_1a65d8:
    // 0x1a65d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a65d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a65dc:
    // 0x1a65dc: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1a65dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a65e0:
    // 0x1a65e0: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1a65e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1a65e4:
    // 0x1a65e4: 0x320f809  jalr        $t9
label_1a65e8:
    if (ctx->pc == 0x1A65E8u) {
        ctx->pc = 0x1A65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65E4u;
        // 0x1a65e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65ECu;
        goto label_1a65ec;
    }
    ctx->pc = 0x1A65E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A65ECu);
        ctx->pc = 0x1A65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65E4u;
        // 0x1a65e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A65E4u, 0x1A65ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A65ECu;
label_1a65ec:
    // 0x1a65ec: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x1a65ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_1a65f0:
    // 0x1a65f0: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x1a65f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a65f4:
    // 0x1a65f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1a65f8:
    if (ctx->pc == 0x1A65F8u) {
        ctx->pc = 0x1A65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65F4u;
        // 0x1a65f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65FCu;
        goto label_1a65fc;
    }
    ctx->pc = 0x1A65F4u;
    {
        const bool branch_taken_0x1a65f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65F4u;
        // 0x1a65f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65f4) {
            ctx->pc = 0x1A6600u;
            return;
        }
    }
    ctx->pc = 0x1A65FCu;
label_1a65fc:
    // 0x1a65fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a65fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a6600u;
}
