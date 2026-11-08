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

// Function: entry_00124fec
// Address: 0x124fec - 0x12500c
void entry_00124fec_0x124fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124fec_0x124fec");
#endif

    ctx->pc = 0x124fecu;

    // 0x124fec: 0x0  nop
    ctx->pc = 0x124fecu;
    // NOP
    // 0x124ff0: 0x96a3000c  lhu         $v1, 0xC($s5)
    ctx->pc = 0x124ff0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x124ff4: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x124ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x124ff8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x124ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x124ffc: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x124ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x125000: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x125000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x125004: 0xc047ec4  jal         func_11FB10
    ctx->pc = 0x125004u;
    SET_GPR_U32(ctx, 31, 0x12500Cu);
    ctx->pc = 0x125008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125004u;
    // 0x125008: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FB10u, 0x125004u, 0x12500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12500Cu;
}
