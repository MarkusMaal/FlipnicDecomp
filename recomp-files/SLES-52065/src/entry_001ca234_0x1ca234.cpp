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

// Function: entry_001ca234
// Address: 0x1ca234 - 0x1ca260
void entry_001ca234_0x1ca234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca234_0x1ca234");
#endif

    switch (ctx->pc) {
        case 0x1ca248u: goto label_1ca248;
        case 0x1ca258u: goto label_1ca258;
        default: break;
    }

    ctx->pc = 0x1ca234u;

    // 0x1ca234: 0x0  nop
    ctx->pc = 0x1ca234u;
    // NOP
    // 0x1ca238: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca23c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ca23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca240: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA240u;
    SET_GPR_U32(ctx, 31, 0x1CA248u);
    ctx->pc = 0x1CA244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA240u;
    // 0x1ca244: 0x24a56a00  addiu       $a1, $a1, 0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA240u, 0x1CA248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA248u;
label_1ca248:
    // 0x1ca248: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca24c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca250: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA250u;
    SET_GPR_U32(ctx, 31, 0x1CA258u);
    ctx->pc = 0x1CA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA250u;
    // 0x1ca254: 0x24a56a00  addiu       $a1, $a1, 0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA250u, 0x1CA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA258u;
label_1ca258:
    // 0x1ca258: 0xa2600008  sb          $zero, 0x8($s3)
    ctx->pc = 0x1ca258u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca25c: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1ca25cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ca260u;
}
