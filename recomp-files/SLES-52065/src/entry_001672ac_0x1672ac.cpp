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

// Function: entry_001672ac
// Address: 0x1672ac - 0x1672d8
void entry_001672ac_0x1672ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001672ac_0x1672ac");
#endif

    switch (ctx->pc) {
        case 0x1672b8u: goto label_1672b8;
        case 0x1672ccu: goto label_1672cc;
        default: break;
    }

    ctx->pc = 0x1672acu;

    // 0x1672ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1672acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672b0: 0xc042118  jal         func_108460
    ctx->pc = 0x1672B0u;
    SET_GPR_U32(ctx, 31, 0x1672B8u);
    ctx->pc = 0x1672B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672B0u;
    // 0x1672b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1672B0u, 0x1672B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672B8u;
label_1672b8:
    // 0x1672b8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1672b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1672bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1672bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1672c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1672c4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1672C4u;
    SET_GPR_U32(ctx, 31, 0x1672CCu);
    ctx->pc = 0x1672C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672C4u;
    // 0x1672c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1672C4u, 0x1672CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672CCu;
label_1672cc:
    // 0x1672cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1672ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1672d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1672d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1672d4: 0xa064002b  sb          $a0, 0x2B($v1)
    ctx->pc = 0x1672d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1672d8u;
}
