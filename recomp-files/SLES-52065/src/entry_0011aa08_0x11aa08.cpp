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

// Function: entry_0011aa08
// Address: 0x11aa08 - 0x11aa30
void entry_0011aa08_0x11aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aa08_0x11aa08");
#endif

    switch (ctx->pc) {
        case 0x11aa14u: goto label_11aa14;
        case 0x11aa24u: goto label_11aa24;
        default: break;
    }

    ctx->pc = 0x11aa08u;

    // 0x11aa08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11aa0c: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AA0Cu;
    SET_GPR_U32(ctx, 31, 0x11AA14u);
    ctx->pc = 0x11AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA0Cu;
    // 0x11aa10: 0x24a5e6a0  addiu       $a1, $a1, -0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AA0Cu, 0x11AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA14u;
label_11aa14:
    // 0x11aa14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11aa18: 0x27a40318  addiu       $a0, $sp, 0x318
    ctx->pc = 0x11aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
    // 0x11aa1c: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AA1Cu;
    SET_GPR_U32(ctx, 31, 0x11AA24u);
    ctx->pc = 0x11AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA1Cu;
    // 0x11aa20: 0x24a5e6b8  addiu       $a1, $a1, -0x1948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AA1Cu, 0x11AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA24u;
label_11aa24:
    // 0x11aa24: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x11aa24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x11aa28: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11AA28u;
    {
        const bool branch_taken_0x11aa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA28u;
        // 0x11aa2c: 0x26100b00  addiu       $s0, $s0, 0xB00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa28) {
            ctx->pc = 0x11AAB4u;
            return;
        }
    }
    ctx->pc = 0x11AA30u;
}
