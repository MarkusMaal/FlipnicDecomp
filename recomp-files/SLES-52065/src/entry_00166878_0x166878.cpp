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

// Function: entry_00166878
// Address: 0x166878 - 0x166894
void entry_00166878_0x166878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166878_0x166878");
#endif

    switch (ctx->pc) {
        case 0x166890u: goto label_166890;
        default: break;
    }

    ctx->pc = 0x166878u;

    // 0x166878: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16687c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x166880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166884: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x166884u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x166888: 0xc0425a4  jal         func_109690
    ctx->pc = 0x166888u;
    SET_GPR_U32(ctx, 31, 0x166890u);
    ctx->pc = 0x16688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166888u;
    // 0x16688c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x166888u, 0x166890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166890u;
label_166890:
    // 0x166890: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    ctx->pc = 0x166894u;
}
