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

// Function: entry_00137f18
// Address: 0x137f18 - 0x137f44
void entry_00137f18_0x137f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137f18_0x137f18");
#endif

    switch (ctx->pc) {
        case 0x137f3cu: goto label_137f3c;
        default: break;
    }

    ctx->pc = 0x137f18u;

    // 0x137f18: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x137f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x137f1c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137f20: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x137f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f24: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x137f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x137f28: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x137f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x137f2c: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x137f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x137f30: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x137f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x137f34: 0xc04e1a4  jal         func_138690
    ctx->pc = 0x137F34u;
    SET_GPR_U32(ctx, 31, 0x137F3Cu);
    ctx->pc = 0x137F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F34u;
    // 0x137f38: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138690u, 0x137F34u, 0x137F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F3Cu;
label_137f3c:
    // 0x137f3c: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x137f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x137f40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x137f40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x137f44u;
}
