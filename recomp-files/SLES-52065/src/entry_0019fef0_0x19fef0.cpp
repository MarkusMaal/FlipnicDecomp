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

// Function: entry_0019fef0
// Address: 0x19fef0 - 0x19ff38
void entry_0019fef0_0x19fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fef0_0x19fef0");
#endif

    switch (ctx->pc) {
        case 0x19ff0cu: goto label_19ff0c;
        case 0x19ff30u: goto label_19ff30;
        default: break;
    }

    ctx->pc = 0x19fef0u;

label_19fef0:
    // 0x19fef0: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x19fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_19fef4:
    // 0x19fef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19fef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19fef8:
    // 0x19fef8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x19fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_19fefc:
    // 0x19fefc: 0xae420664  sw          $v0, 0x664($s2)
    ctx->pc = 0x19fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1636), GPR_U32(ctx, 2));
label_19ff00:
    // 0x19ff00: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x19ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_19ff04:
    // 0x19ff04: 0xc064918  jal         func_192460
label_19ff08:
    if (ctx->pc == 0x19FF08u) {
        ctx->pc = 0x19FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF04u;
        // 0x19ff08: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF0Cu;
        goto label_19ff0c;
    }
    ctx->pc = 0x19FF04u;
    SET_GPR_U32(ctx, 31, 0x19FF0Cu);
    ctx->pc = 0x19FF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF04u;
    // 0x19ff08: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19FF04u, 0x19FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF0Cu;
label_19ff0c:
    // 0x19ff0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19ff10:
    if (ctx->pc == 0x19FF10u) {
        ctx->pc = 0x19FF14u;
        goto label_19ff14;
    }
    ctx->pc = 0x19FF0Cu;
    {
        const bool branch_taken_0x19ff0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ff0c) {
            ctx->pc = 0x19FF38u;
            return;
        }
    }
    ctx->pc = 0x19FF14u;
label_19ff14:
    // 0x19ff14: 0x124000e7  beqz        $s2, . + 4 + (0xE7 << 2)
label_19ff18:
    if (ctx->pc == 0x19FF18u) {
        ctx->pc = 0x19FF1Cu;
        goto label_19ff1c;
    }
    ctx->pc = 0x19FF14u;
    {
        const bool branch_taken_0x19ff14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ff14) {
            ctx->pc = 0x1A02B4u;
            return;
        }
    }
    ctx->pc = 0x19FF1Cu;
label_19ff1c:
    // 0x19ff1c: 0x8e59031c  lw          $t9, 0x31C($s2)
    ctx->pc = 0x19ff1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
label_19ff20:
    // 0x19ff20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ff20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19ff24:
    // 0x19ff24: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19ff24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19ff28:
    // 0x19ff28: 0x320f809  jalr        $t9
label_19ff2c:
    if (ctx->pc == 0x19FF2Cu) {
        ctx->pc = 0x19FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF28u;
        // 0x19ff2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF30u;
        goto label_19ff30;
    }
    ctx->pc = 0x19FF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19FF30u);
        ctx->pc = 0x19FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF28u;
        // 0x19ff2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FF28u, 0x19FF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FF30u;
label_19ff30:
    // 0x19ff30: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_19ff34:
    if (ctx->pc == 0x19FF34u) {
        ctx->pc = 0x19FF38u;
        goto label_fallthrough_0x19ff30;
    }
    ctx->pc = 0x19FF30u;
    {
        const bool branch_taken_0x19ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ff30) {
            ctx->pc = 0x1A02B4u;
            return;
        }
    }
label_fallthrough_0x19ff30:
    ctx->pc = 0x19FF38u;
}
