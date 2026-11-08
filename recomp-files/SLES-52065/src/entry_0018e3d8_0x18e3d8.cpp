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

// Function: entry_0018e3d8
// Address: 0x18e3d8 - 0x18e3f4
void entry_0018e3d8_0x18e3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e3d8_0x18e3d8");
#endif

    switch (ctx->pc) {
        case 0x18e3ecu: goto label_18e3ec;
        default: break;
    }

    ctx->pc = 0x18e3d8u;

    // 0x18e3d8: 0xae400478  sw          $zero, 0x478($s2)
    ctx->pc = 0x18e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1144), GPR_U32(ctx, 0));
    // 0x18e3dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3e0: 0xae452714  sw          $a1, 0x2714($s2)
    ctx->pc = 0x18e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10004), GPR_U32(ctx, 5));
    // 0x18e3e4: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18E3E4u;
    SET_GPR_U32(ctx, 31, 0x18E3ECu);
    ctx->pc = 0x18E3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E3E4u;
    // 0x18e3e8: 0xae452710  sw          $a1, 0x2710($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E3E4u, 0x18E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3ECu;
label_18e3ec:
    // 0x18e3ec: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x18E3ECu;
    {
        const bool branch_taken_0x18e3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3ec) {
            ctx->pc = 0x18E6F0u;
            return;
        }
    }
    ctx->pc = 0x18E3F4u;
}
