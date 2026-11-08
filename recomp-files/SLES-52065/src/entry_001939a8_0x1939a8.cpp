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

// Function: entry_001939a8
// Address: 0x1939a8 - 0x1939d4
void entry_001939a8_0x1939a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001939a8_0x1939a8");
#endif

    switch (ctx->pc) {
        case 0x1939ccu: goto label_1939cc;
        default: break;
    }

    ctx->pc = 0x1939a8u;

label_1939a8:
    // 0x1939a8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1939a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1939ac:
    // 0x1939ac: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1939acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1939b0:
    // 0x1939b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1939b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1939b4:
    // 0x1939b4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1939b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1939b8:
    // 0x1939b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1939b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1939bc:
    // 0x1939bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1939bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1939c0:
    // 0x1939c0: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x1939c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_1939c4:
    // 0x1939c4: 0x320f809  jalr        $t9
label_1939c8:
    if (ctx->pc == 0x1939C8u) {
        ctx->pc = 0x1939C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939C4u;
        // 0x1939c8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1939CCu;
        goto label_1939cc;
    }
    ctx->pc = 0x1939C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1939CCu);
        ctx->pc = 0x1939C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939C4u;
        // 0x1939c8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1939C4u, 0x1939CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1939CCu;
label_1939cc:
    // 0x1939cc: 0x10000047  b           . + 4 + (0x47 << 2)
label_1939d0:
    if (ctx->pc == 0x1939D0u) {
        ctx->pc = 0x1939D4u;
        goto label_fallthrough_0x1939cc;
    }
    ctx->pc = 0x1939CCu;
    {
        const bool branch_taken_0x1939cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1939cc) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x1939cc:
    ctx->pc = 0x1939D4u;
}
