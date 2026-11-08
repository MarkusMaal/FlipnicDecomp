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

// Function: entry_0020896c
// Address: 0x20896c - 0x208988
void entry_0020896c_0x20896c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020896c_0x20896c");
#endif

    ctx->pc = 0x20896cu;

    // 0x20896c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x208970: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x208970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x208974: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208974u;
    {
        const bool branch_taken_0x208974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208974) {
            ctx->pc = 0x208978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208974u;
            // 0x208978: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208988u;
            return;
        }
    }
    ctx->pc = 0x20897Cu;
    // 0x20897c: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x20897cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x208980: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x208980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x208984: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x208984u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->pc = 0x208988u;
}
