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

// Function: entry_0010ef80
// Address: 0x10ef80 - 0x10efb0
void entry_0010ef80_0x10ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ef80_0x10ef80");
#endif

    switch (ctx->pc) {
        case 0x10ef88u: goto label_10ef88;
        default: break;
    }

    ctx->pc = 0x10ef80u;

    // 0x10ef80: 0xc043ca8  jal         func_10F2A0
    ctx->pc = 0x10EF80u;
    SET_GPR_U32(ctx, 31, 0x10EF88u);
    ctx->pc = 0x10EF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF80u;
    // 0x10ef84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x10EF80u, 0x10EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF88u;
label_10ef88:
    // 0x10ef88: 0x92240231  lbu         $a0, 0x231($s1)
    ctx->pc = 0x10ef88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
    // 0x10ef8c: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x10ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x10ef90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x10ef90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x10ef94: 0x426fc  dsll32      $a0, $a0, 27
    ctx->pc = 0x10ef94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 27));
    // 0x10ef98: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x10ef98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x10ef9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10efa0: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x10efa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x10efa4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x10efa8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10efa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10efac: 0xa2230231  sb          $v1, 0x231($s1)
    ctx->pc = 0x10efacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10efb0u;
}
