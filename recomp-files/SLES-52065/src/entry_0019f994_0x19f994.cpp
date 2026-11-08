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

// Function: entry_0019f994
// Address: 0x19f994 - 0x19f9c4
void entry_0019f994_0x19f994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f994_0x19f994");
#endif

    switch (ctx->pc) {
        case 0x19f9bcu: goto label_19f9bc;
        default: break;
    }

    ctx->pc = 0x19f994u;

label_19f994:
    // 0x19f994: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x19f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19f998:
    // 0x19f998: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x19f998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_19f99c:
    // 0x19f99c: 0xa06002f0  sb          $zero, 0x2F0($v1)
    ctx->pc = 0x19f99cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 752), (uint8_t)GPR_U32(ctx, 0));
label_19f9a0:
    // 0x19f9a0: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_19f9a4:
    if (ctx->pc == 0x19F9A4u) {
        ctx->pc = 0x19F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9A0u;
        // 0x19f9a4: 0xaf8086f8  sw          $zero, -0x7908($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F9A8u;
        goto label_19f9a8;
    }
    ctx->pc = 0x19F9A0u;
    {
        const bool branch_taken_0x19f9a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9A0u;
        // 0x19f9a4: 0xaf8086f8  sw          $zero, -0x7908($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9a0) {
            ctx->pc = 0x19F9D0u;
            return;
        }
    }
    ctx->pc = 0x19F9A8u;
label_19f9a8:
    // 0x19f9a8: 0x8e99031c  lw          $t9, 0x31C($s4)
    ctx->pc = 0x19f9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
label_19f9ac:
    // 0x19f9ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19f9b0:
    // 0x19f9b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19f9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19f9b4:
    // 0x19f9b4: 0x320f809  jalr        $t9
label_19f9b8:
    if (ctx->pc == 0x19F9B8u) {
        ctx->pc = 0x19F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9B4u;
        // 0x19f9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F9BCu;
        goto label_19f9bc;
    }
    ctx->pc = 0x19F9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19F9BCu);
        ctx->pc = 0x19F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9B4u;
        // 0x19f9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F9B4u, 0x19F9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F9BCu;
label_19f9bc:
    // 0x19f9bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_19f9c0:
    if (ctx->pc == 0x19F9C0u) {
        ctx->pc = 0x19F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9BCu;
        // 0x19f9c0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F9C4u;
        goto label_fallthrough_0x19f9bc;
    }
    ctx->pc = 0x19F9BCu;
    {
        const bool branch_taken_0x19f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9BCu;
        // 0x19f9c0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9bc) {
            ctx->pc = 0x19F9D4u;
            return;
        }
    }
label_fallthrough_0x19f9bc:
    ctx->pc = 0x19F9C4u;
}
