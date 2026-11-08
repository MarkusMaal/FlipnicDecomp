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

// Function: entry_0017c418
// Address: 0x17c418 - 0x17c42c
void entry_0017c418_0x17c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c418_0x17c418");
#endif

    switch (ctx->pc) {
        case 0x17c428u: goto label_17c428;
        default: break;
    }

    ctx->pc = 0x17c418u;

    // 0x17c418: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17c418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17c41c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c420: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17C420u;
    SET_GPR_U32(ctx, 31, 0x17C428u);
    ctx->pc = 0x17C424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C420u;
    // 0x17c424: 0xa22501d3  sb          $a1, 0x1D3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17C420u, 0x17C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C428u;
label_17c428:
    // 0x17c428: 0xa6200210  sh          $zero, 0x210($s1)
    ctx->pc = 0x17c428u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 528), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x17c42cu;
}
