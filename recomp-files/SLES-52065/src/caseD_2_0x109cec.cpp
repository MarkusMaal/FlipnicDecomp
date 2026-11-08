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

// Function: caseD_2
// Address: 0x109cec - 0x109d34
void caseD_2_0x109cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x109cec");
#endif

    switch (ctx->pc) {
        case 0x109cfcu: goto label_109cfc;
        case 0x109d1cu: goto label_109d1c;
        default: break;
    }

    ctx->pc = 0x109cecu;

    // 0x109cec: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109cecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x109cf0: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109cf4: 0xc057040  jal         func_15C100
    ctx->pc = 0x109CF4u;
    SET_GPR_U32(ctx, 31, 0x109CFCu);
    ctx->pc = 0x109CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CF4u;
    // 0x109cf8: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109CF4u, 0x109CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CFCu;
label_109cfc:
    // 0x109cfc: 0x86300006  lh          $s0, 0x6($s1)
    ctx->pc = 0x109cfcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x109d00: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109d04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109d10: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x109d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x109d14: 0xc042570  jal         func_1095C0
    ctx->pc = 0x109D14u;
    SET_GPR_U32(ctx, 31, 0x109D1Cu);
    ctx->pc = 0x109D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D14u;
    // 0x109d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x109D14u, 0x109D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D1Cu;
label_109d1c:
    // 0x109d1c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109d20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x109d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x109d24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109d28: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x109d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x109d2c: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x109D2Cu;
    {
        const bool branch_taken_0x109d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D2Cu;
        // 0x109d30: 0xa05001d3  sb          $s0, 0x1D3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d2c) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x109D34u;
}
