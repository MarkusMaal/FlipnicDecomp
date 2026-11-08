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

// Function: entry_00166ca8
// Address: 0x166ca8 - 0x166cc4
void entry_00166ca8_0x166ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166ca8_0x166ca8");
#endif

    switch (ctx->pc) {
        case 0x166cc0u: goto label_166cc0;
        default: break;
    }

    ctx->pc = 0x166ca8u;

    // 0x166ca8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166cac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x166cb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166cb4: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x166cb4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x166cb8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x166CB8u;
    SET_GPR_U32(ctx, 31, 0x166CC0u);
    ctx->pc = 0x166CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CB8u;
    // 0x166cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x166CB8u, 0x166CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CC0u;
label_166cc0:
    // 0x166cc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    ctx->pc = 0x166cc4u;
}
