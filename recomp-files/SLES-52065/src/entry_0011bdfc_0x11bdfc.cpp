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

// Function: entry_0011bdfc
// Address: 0x11bdfc - 0x11be28
void entry_0011bdfc_0x11bdfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bdfc_0x11bdfc");
#endif

    switch (ctx->pc) {
        case 0x11be20u: goto label_11be20;
        default: break;
    }

    ctx->pc = 0x11bdfcu;

label_11bdfc:
    // 0x11bdfc: 0x0  nop
    ctx->pc = 0x11bdfcu;
    // NOP
label_11be00:
    // 0x11be00: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x11be00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_11be04:
    // 0x11be04: 0xaf8083c4  sw          $zero, -0x7C3C($gp)
    ctx->pc = 0x11be04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935492), GPR_U32(ctx, 0));
label_11be08:
    // 0x11be08: 0xa020dae0  sb          $zero, -0x2520($at)
    ctx->pc = 0x11be08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957792), (uint8_t)GPR_U32(ctx, 0));
label_11be0c:
    // 0x11be0c: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x11be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_11be10:
    // 0x11be10: 0x1060ffd2  beqz        $v1, . + 4 + (-0x2E << 2)
label_11be14:
    if (ctx->pc == 0x11BE14u) {
        ctx->pc = 0x11BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE10u;
        // 0x11be14: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BE18u;
        goto label_11be18;
    }
    ctx->pc = 0x11BE10u;
    {
        const bool branch_taken_0x11be10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE10u;
        // 0x11be14: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be10) {
            ctx->pc = 0x11BD5Cu;
            return;
        }
    }
    ctx->pc = 0x11BE18u;
label_11be18:
    // 0x11be18: 0x60f809  jalr        $v1
label_11be1c:
    if (ctx->pc == 0x11BE1Cu) {
        ctx->pc = 0x11BE20u;
        goto label_11be20;
    }
    ctx->pc = 0x11BE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BE20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BE18u, 0x11BE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BE20u;
label_11be20:
    // 0x11be20: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_11be24:
    if (ctx->pc == 0x11BE24u) {
        ctx->pc = 0x11BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE20u;
        // 0x11be24: 0x8e3000fc  lw          $s0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BE28u;
        goto label_fallthrough_0x11be20;
    }
    ctx->pc = 0x11BE20u;
    {
        const bool branch_taken_0x11be20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE20u;
        // 0x11be24: 0x8e3000fc  lw          $s0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be20) {
            ctx->pc = 0x11BD60u;
            return;
        }
    }
label_fallthrough_0x11be20:
    ctx->pc = 0x11BE28u;
}
