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

// Function: entry_001674e8
// Address: 0x1674e8 - 0x16750c
void entry_001674e8_0x1674e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001674e8_0x1674e8");
#endif

    switch (ctx->pc) {
        case 0x1674fcu: goto label_1674fc;
        default: break;
    }

    ctx->pc = 0x1674e8u;

    // 0x1674e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1674e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1674ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1674ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1674f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1674f4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1674F4u;
    SET_GPR_U32(ctx, 31, 0x1674FCu);
    ctx->pc = 0x1674F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674F4u;
    // 0x1674f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1674F4u, 0x1674FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674FCu;
label_1674fc:
    // 0x1674fc: 0x86030222  lh          $v1, 0x222($s0)
    ctx->pc = 0x1674fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x167500: 0xa6030220  sh          $v1, 0x220($s0)
    ctx->pc = 0x167500u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x167504: 0xa6000226  sh          $zero, 0x226($s0)
    ctx->pc = 0x167504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x167508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x16750cu;
}
