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

// Function: entry_0018b0f0
// Address: 0x18b0f0 - 0x18b11c
void entry_0018b0f0_0x18b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b0f0_0x18b0f0");
#endif

    ctx->pc = 0x18b0f0u;

    // 0x18b0f0: 0x131a40  sll         $v1, $s3, 9
    ctx->pc = 0x18b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x18b0f4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x18b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x18b0f8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x18b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18b0fc: 0x80630acc  lb          $v1, 0xACC($v1)
    ctx->pc = 0x18b0fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2764)));
    // 0x18b100: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B100u;
    {
        const bool branch_taken_0x18b100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b100) {
            ctx->pc = 0x18B11Cu;
            return;
        }
    }
    ctx->pc = 0x18B108u;
    // 0x18b108: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x18b108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x18b10c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x18b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x18b110: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18b114: 0xc077d70  jal         func_1DF5C0
    ctx->pc = 0x18B114u;
    SET_GPR_U32(ctx, 31, 0x18B11Cu);
    ctx->pc = 0x18B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B114u;
    // 0x18b118: 0x8c442acc  lw          $a0, 0x2ACC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF5C0u, 0x18B114u, 0x18B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B11Cu;
}
