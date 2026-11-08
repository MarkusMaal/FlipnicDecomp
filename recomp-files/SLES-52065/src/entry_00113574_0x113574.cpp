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

// Function: entry_00113574
// Address: 0x113574 - 0x1135bc
void entry_00113574_0x113574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113574_0x113574");
#endif

    switch (ctx->pc) {
        case 0x1135b4u: goto label_1135b4;
        default: break;
    }

    ctx->pc = 0x113574u;

    // 0x113574: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x113574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113578: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x113578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11357c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x11357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x113580: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x113580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113584: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x113584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x113588: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x113588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11358c: 0x8c722cd8  lw          $s2, 0x2CD8($v1)
    ctx->pc = 0x11358cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x113590: 0x92430220  lbu         $v1, 0x220($s2)
    ctx->pc = 0x113590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x113594: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x113594u;
    {
        const bool branch_taken_0x113594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x113594) {
            ctx->pc = 0x1135D4u;
            return;
        }
    }
    ctx->pc = 0x11359Cu;
    // 0x11359c: 0xa2400220  sb          $zero, 0x220($s2)
    ctx->pc = 0x11359cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1135a0: 0x92420220  lbu         $v0, 0x220($s2)
    ctx->pc = 0x1135a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x1135a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1135A4u;
    {
        const bool branch_taken_0x1135a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1135A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135A4u;
        // 0x1135a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135a4) {
            ctx->pc = 0x1135BCu;
            return;
        }
    }
    ctx->pc = 0x1135ACu;
    // 0x1135ac: 0xc042570  jal         func_1095C0
    ctx->pc = 0x1135ACu;
    SET_GPR_U32(ctx, 31, 0x1135B4u);
    ctx->pc = 0x1135B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135ACu;
    // 0x1135b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1135ACu, 0x1135B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135B4u;
label_1135b4:
    // 0x1135b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1135B4u;
    {
        const bool branch_taken_0x1135b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1135B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135B4u;
        // 0x1135b8: 0xa24001d3  sb          $zero, 0x1D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135b4) {
            ctx->pc = 0x1135D4u;
            return;
        }
    }
    ctx->pc = 0x1135BCu;
}
