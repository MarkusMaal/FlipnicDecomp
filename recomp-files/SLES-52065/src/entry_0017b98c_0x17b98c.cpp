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

// Function: entry_0017b98c
// Address: 0x17b98c - 0x17b9c8
void entry_0017b98c_0x17b98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b98c_0x17b98c");
#endif

    switch (ctx->pc) {
        case 0x17b9a8u: goto label_17b9a8;
        default: break;
    }

    ctx->pc = 0x17b98cu;

    // 0x17b98c: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x17b990: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17b990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17b994: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17b994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b99c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17b9a0: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17B9A0u;
    SET_GPR_U32(ctx, 31, 0x17B9A8u);
    ctx->pc = 0x17B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B9A0u;
    // 0x17b9a4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B9A0u, 0x17B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B9A8u;
label_17b9a8:
    // 0x17b9a8: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x17b9ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b9b0: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x17b9b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b9b8: 0x80430024  lb          $v1, 0x24($v0)
    ctx->pc = 0x17b9b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17b9bc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B9BCu;
    {
        const bool branch_taken_0x17b9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b9bc) {
            ctx->pc = 0x17B9C8u;
            return;
        }
    }
    ctx->pc = 0x17B9C4u;
    // 0x17b9c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x17b9c8u;
}
