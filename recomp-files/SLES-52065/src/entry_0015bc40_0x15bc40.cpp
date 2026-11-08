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

// Function: entry_0015bc40
// Address: 0x15bc40 - 0x15bc78
void entry_0015bc40_0x15bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bc40_0x15bc40");
#endif

    switch (ctx->pc) {
        case 0x15bc48u: goto label_15bc48;
        case 0x15bc70u: goto label_15bc70;
        default: break;
    }

    ctx->pc = 0x15bc40u;

    // 0x15bc40: 0xc042570  jal         func_1095C0
    ctx->pc = 0x15BC40u;
    SET_GPR_U32(ctx, 31, 0x15BC48u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15BC40u, 0x15BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC48u;
label_15bc48:
    // 0x15bc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bc4c: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x15bc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
    // 0x15bc50: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x15bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x15bc54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BC54u;
    {
        const bool branch_taken_0x15bc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC54u;
        // 0x15bc58: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc54) {
            ctx->pc = 0x15BC78u;
            return;
        }
    }
    ctx->pc = 0x15BC5Cu;
    // 0x15bc5c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15bc60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15bc64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15bc68: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15BC68u;
    SET_GPR_U32(ctx, 31, 0x15BC70u);
    ctx->pc = 0x15BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC68u;
    // 0x15bc6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15BC68u, 0x15BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC70u;
label_15bc70:
    // 0x15bc70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15BC70u;
    {
        const bool branch_taken_0x15bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc70) {
            ctx->pc = 0x15BCB0u;
            return;
        }
    }
    ctx->pc = 0x15BC78u;
}
