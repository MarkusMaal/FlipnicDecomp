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

// Function: entry_0017c958
// Address: 0x17c958 - 0x17c96c
void entry_0017c958_0x17c958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c958_0x17c958");
#endif

    switch (ctx->pc) {
        case 0x17c968u: goto label_17c968;
        default: break;
    }

    ctx->pc = 0x17c958u;

    // 0x17c958: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17c958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17c95c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c960: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17C960u;
    SET_GPR_U32(ctx, 31, 0x17C968u);
    ctx->pc = 0x17C964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C960u;
    // 0x17c964: 0xa22501d3  sb          $a1, 0x1D3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17C960u, 0x17C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C968u;
label_17c968:
    // 0x17c968: 0xa6200220  sh          $zero, 0x220($s1)
    ctx->pc = 0x17c968u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x17c96cu;
}
