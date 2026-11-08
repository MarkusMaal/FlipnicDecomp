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

// Function: entry_001a0248
// Address: 0x1a0248 - 0x1a0288
void entry_001a0248_0x1a0248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0248_0x1a0248");
#endif

    switch (ctx->pc) {
        case 0x1a027cu: goto label_1a027c;
        default: break;
    }

    ctx->pc = 0x1a0248u;

    // 0x1a0248: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A0248u;
    {
        const bool branch_taken_0x1a0248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0248) {
            ctx->pc = 0x1A02B4u;
            return;
        }
    }
    ctx->pc = 0x1A0250u;
    // 0x1a0250: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x1a0254: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a0254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a0258: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1a0258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1a025c: 0xae430664  sw          $v1, 0x664($s2)
    ctx->pc = 0x1a025cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1636), GPR_U32(ctx, 3));
    // 0x1a0260: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x1a0264: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a0264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0268: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0268u;
    {
        const bool branch_taken_0x1a0268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0268u;
        // 0x1a026c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0268) {
            ctx->pc = 0x1A0288u;
            return;
        }
    }
    ctx->pc = 0x1A0270u;
    // 0x1a0270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0274: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A0274u;
    SET_GPR_U32(ctx, 31, 0x1A027Cu);
    ctx->pc = 0x1A0278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0274u;
    // 0x1a0278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A0274u, 0x1A027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A027Cu;
label_1a027c:
    // 0x1a027c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A027Cu;
    {
        const bool branch_taken_0x1a027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a027c) {
            ctx->pc = 0x1A02B4u;
            return;
        }
    }
    ctx->pc = 0x1A0284u;
    // 0x1a0284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a0288u;
}
