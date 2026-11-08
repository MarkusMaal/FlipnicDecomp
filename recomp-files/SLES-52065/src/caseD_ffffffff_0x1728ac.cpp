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

// Function: caseD_ffffffff
// Address: 0x1728ac - 0x1728f0
void caseD_ffffffff_0x1728ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_ffffffff_0x1728ac");
#endif

    switch (ctx->pc) {
        case 0x1728acu: goto label_1728ac;
        case 0x1728b0u: goto label_1728b0;
        case 0x1728b4u: goto label_1728b4;
        case 0x1728b8u: goto label_1728b8;
        case 0x1728bcu: goto label_1728bc;
        case 0x1728c0u: goto label_1728c0;
        case 0x1728c4u: goto label_1728c4;
        case 0x1728c8u: goto label_1728c8;
        case 0x1728ccu: goto label_1728cc;
        case 0x1728d0u: goto label_1728d0;
        case 0x1728d4u: goto label_1728d4;
        case 0x1728d8u: goto label_1728d8;
        case 0x1728dcu: goto label_1728dc;
        case 0x1728e0u: goto label_1728e0;
        case 0x1728e4u: goto label_1728e4;
        case 0x1728e8u: goto label_1728e8;
        case 0x1728ecu: goto label_1728ec;
        default: break;
    }

    ctx->pc = 0x1728acu;

label_1728ac:
    // 0x1728ac: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_1728b0:
    if (ctx->pc == 0x1728B0u) {
        ctx->pc = 0x1728B4u;
        goto label_1728b4;
    }
    ctx->pc = 0x1728ACu;
    {
        const bool branch_taken_0x1728ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1728ac) {
            ctx->pc = 0x1728F0u;
            return;
        }
    }
    ctx->pc = 0x1728B4u;
label_1728b4:
    // 0x1728b4: 0x8e044020  lw          $a0, 0x4020($s0)
    ctx->pc = 0x1728b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16416)));
label_1728b8:
    // 0x1728b8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1728b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1728bc:
    // 0x1728bc: 0x8e06602c  lw          $a2, 0x602C($s0)
    ctx->pc = 0x1728bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24620)));
label_1728c0:
    // 0x1728c0: 0x2463f554  addiu       $v1, $v1, -0xAAC
    ctx->pc = 0x1728c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964564));
label_1728c4:
    // 0x1728c4: 0x8e02601c  lw          $v0, 0x601C($s0)
    ctx->pc = 0x1728c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24604)));
label_1728c8:
    // 0x1728c8: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x1728c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1728cc:
    // 0x1728cc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1728ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1728d0:
    // 0x1728d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1728d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1728d4:
    // 0x1728d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1728d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1728d8:
    // 0x1728d8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1728d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1728dc:
    // 0x1728dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1728dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1728e0:
    // 0x1728e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1728e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1728e4:
    // 0x1728e4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1728e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1728e8:
    // 0x1728e8: 0x320f809  jalr        $t9
label_1728ec:
    if (ctx->pc == 0x1728ECu) {
        ctx->pc = 0x1728ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728E8u;
        // 0x1728ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1728F0u;
        goto label_fallthrough_0x1728e8;
    }
    ctx->pc = 0x1728E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1728F0u);
        ctx->pc = 0x1728ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728E8u;
        // 0x1728ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1728E8u, 0x1728F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1728e8:
    ctx->pc = 0x1728F0u;
}
