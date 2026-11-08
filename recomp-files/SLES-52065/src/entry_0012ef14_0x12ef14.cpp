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

// Function: entry_0012ef14
// Address: 0x12ef14 - 0x12ef34
void entry_0012ef14_0x12ef14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ef14_0x12ef14");
#endif

    switch (ctx->pc) {
        case 0x12ef20u: goto label_12ef20;
        default: break;
    }

    ctx->pc = 0x12ef14u;

    // 0x12ef14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ef14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef18: 0xc04bbf0  jal         func_12EFC0
    ctx->pc = 0x12EF18u;
    SET_GPR_U32(ctx, 31, 0x12EF20u);
    ctx->pc = 0x12EF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF18u;
    // 0x12ef1c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFC0u, 0x12EF18u, 0x12EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF20u;
label_12ef20:
    // 0x12ef20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12ef24: 0x9383806c  lbu         $v1, -0x7F94($gp)
    ctx->pc = 0x12ef24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934636)));
    // 0x12ef28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12ef28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12EF2Cu;
    {
        const bool branch_taken_0x12ef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF2Cu;
        // 0x12ef30: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef2c) {
            ctx->pc = 0x12EF44u;
            return;
        }
    }
    ctx->pc = 0x12EF34u;
}
