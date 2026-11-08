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

// Function: FUN_00131bc0
// Address: 0x131bc0 - 0x131bd0
void FUN_00131bc0_0x131bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131bc0_0x131bc0");
#endif

    ctx->pc = 0x131bc0u;

    // 0x131bc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x131bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x131bc4: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x131bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x131bc8: 0x807d38e  j           func_1F4E38
    ctx->pc = 0x131BC8u;
    ctx->pc = 0x131BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BC8u;
    // 0x131bcc: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    MemCopy128_0x1f4e38(rdram, ctx, runtime); return;
    ctx->pc = 0x131BD0u;
}
