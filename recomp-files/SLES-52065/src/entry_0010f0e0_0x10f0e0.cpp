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

// Function: entry_0010f0e0
// Address: 0x10f0e0 - 0x10f10c
void entry_0010f0e0_0x10f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f0e0_0x10f0e0");
#endif

    switch (ctx->pc) {
        case 0x10f0ecu: goto label_10f0ec;
        default: break;
    }

    ctx->pc = 0x10f0e0u;

    // 0x10f0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0e4: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10F0E4u;
    SET_GPR_U32(ctx, 31, 0x10F0ECu);
    ctx->pc = 0x10F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0E4u;
    // 0x10f0e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10F0E4u, 0x10F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0ECu;
label_10f0ec:
    // 0x10f0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f0f0: 0x6404000a  daddiu      $a0, $zero, 0xA
    ctx->pc = 0x10f0f0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
    // 0x10f0f4: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x10f0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
    // 0x10f0f8: 0x92250231  lbu         $a1, 0x231($s1)
    ctx->pc = 0x10f0f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
    // 0x10f0fc: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x10f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x10f100: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f104: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f108: 0xa2230231  sb          $v1, 0x231($s1)
    ctx->pc = 0x10f108u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10f10cu;
}
