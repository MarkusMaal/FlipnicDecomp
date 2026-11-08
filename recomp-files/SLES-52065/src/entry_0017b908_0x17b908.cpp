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

// Function: entry_0017b908
// Address: 0x17b908 - 0x17b920
void entry_0017b908_0x17b908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b908_0x17b908");
#endif

    switch (ctx->pc) {
        case 0x17b91cu: goto label_17b91c;
        default: break;
    }

    ctx->pc = 0x17b908u;

    // 0x17b908: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x17b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x17b90c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17b910: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17b910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b914: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17B914u;
    SET_GPR_U32(ctx, 31, 0x17B91Cu);
    ctx->pc = 0x17B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B914u;
    // 0x17b918: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B914u, 0x17B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B91Cu;
label_17b91c:
    // 0x17b91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x17b920u;
}
