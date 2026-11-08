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

// Function: entry_00191d24
// Address: 0x191d24 - 0x191d4c
void entry_00191d24_0x191d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191d24_0x191d24");
#endif

    switch (ctx->pc) {
        case 0x191d48u: goto label_191d48;
        default: break;
    }

    ctx->pc = 0x191d24u;

    // 0x191d24: 0x0  nop
    ctx->pc = 0x191d24u;
    // NOP
    // 0x191d28: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x191d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x191d2c: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x191d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x191d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d34: 0x8e47002c  lw          $a3, 0x2C($s2)
    ctx->pc = 0x191d34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x191d38: 0x8e480030  lw          $t0, 0x30($s2)
    ctx->pc = 0x191d38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x191d3c: 0x8e490034  lw          $t1, 0x34($s2)
    ctx->pc = 0x191d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x191d40: 0xc064ec0  jal         func_193B00
    ctx->pc = 0x191D40u;
    SET_GPR_U32(ctx, 31, 0x191D48u);
    ctx->pc = 0x191D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D40u;
    // 0x191d44: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B00u, 0x191D40u, 0x191D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D48u;
label_191d48:
    // 0x191d48: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x191d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x191d4cu;
}
