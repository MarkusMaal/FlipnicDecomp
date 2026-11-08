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

// Function: entry_0018f690
// Address: 0x18f690 - 0x18f6c4
void entry_0018f690_0x18f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f690_0x18f690");
#endif

    switch (ctx->pc) {
        case 0x18f6c0u: goto label_18f6c0;
        default: break;
    }

    ctx->pc = 0x18f690u;

    // 0x18f690: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x18f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x18f694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f698: 0x8e250318  lw          $a1, 0x318($s1)
    ctx->pc = 0x18f698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x18f69c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18f6a0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x18f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18f6a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18f6a8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x18f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18f6ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18f6b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f6b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f6b8: 0xc063e50  jal         func_18F940
    ctx->pc = 0x18F6B8u;
    SET_GPR_U32(ctx, 31, 0x18F6C0u);
    ctx->pc = 0x18F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6B8u;
    // 0x18f6bc: 0xac450054  sw          $a1, 0x54($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F940u, 0x18F6B8u, 0x18F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F6C0u;
label_18f6c0:
    // 0x18f6c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x18f6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    ctx->pc = 0x18f6c4u;
}
