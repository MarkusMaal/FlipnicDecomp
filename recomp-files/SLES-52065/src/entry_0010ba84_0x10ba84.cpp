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

// Function: entry_0010ba84
// Address: 0x10ba84 - 0x10bab8
void entry_0010ba84_0x10ba84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ba84_0x10ba84");
#endif

    switch (ctx->pc) {
        case 0x10baacu: goto label_10baac;
        default: break;
    }

    ctx->pc = 0x10ba84u;

    // 0x10ba84: 0x0  nop
    ctx->pc = 0x10ba84u;
    // NOP
    // 0x10ba88: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x10BA88u;
    {
        const bool branch_taken_0x10ba88 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x10ba88) {
            ctx->pc = 0x10BAB8u;
            return;
        }
    }
    ctx->pc = 0x10BA90u;
    // 0x10ba90: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x10ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x10ba94: 0x26062330  addiu       $a2, $s0, 0x2330
    ctx->pc = 0x10ba94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 9008));
    // 0x10ba98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10ba9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10baa0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10baa4: 0xc05eb14  jal         func_17AC50
    ctx->pc = 0x10BAA4u;
    SET_GPR_U32(ctx, 31, 0x10BAACu);
    ctx->pc = 0x10BAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAA4u;
    // 0x10baa8: 0x24442340  addiu       $a0, $v0, 0x2340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC50u, 0x10BAA4u, 0x10BAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAACu;
label_10baac:
    // 0x10baac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10baacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bab0: 0xc042118  jal         func_108460
    ctx->pc = 0x10BAB0u;
    SET_GPR_U32(ctx, 31, 0x10BAB8u);
    ctx->pc = 0x10BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAB0u;
    // 0x10bab4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10BAB0u, 0x10BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAB8u;
}
