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

// Function: entry_00169c08
// Address: 0x169c08 - 0x169c28
void entry_00169c08_0x169c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169c08_0x169c08");
#endif

    switch (ctx->pc) {
        case 0x169c20u: goto label_169c20;
        default: break;
    }

    ctx->pc = 0x169c08u;

label_169c08:
    // 0x169c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169c0c:
    // 0x169c0c: 0xa20201d3  sb          $v0, 0x1D3($s0)
    ctx->pc = 0x169c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 2));
label_169c10:
    // 0x169c10: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169c14:
    // 0x169c14: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169c18:
    // 0x169c18: 0x320f809  jalr        $t9
label_169c1c:
    if (ctx->pc == 0x169C1Cu) {
        ctx->pc = 0x169C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C18u;
        // 0x169c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C20u;
        goto label_169c20;
    }
    ctx->pc = 0x169C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169C20u);
        ctx->pc = 0x169C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C18u;
        // 0x169c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169C18u, 0x169C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169C20u;
label_169c20:
    // 0x169c20: 0x1000000b  b           . + 4 + (0xB << 2)
label_169c24:
    if (ctx->pc == 0x169C24u) {
        ctx->pc = 0x169C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C20u;
        // 0x169c24: 0xa2000222  sb          $zero, 0x222($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C28u;
        goto label_fallthrough_0x169c20;
    }
    ctx->pc = 0x169C20u;
    {
        const bool branch_taken_0x169c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C20u;
        // 0x169c24: 0xa2000222  sb          $zero, 0x222($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c20) {
            ctx->pc = 0x169C50u;
            return;
        }
    }
label_fallthrough_0x169c20:
    ctx->pc = 0x169C28u;
}
