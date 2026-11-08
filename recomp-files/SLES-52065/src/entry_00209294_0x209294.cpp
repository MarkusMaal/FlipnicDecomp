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

// Function: entry_00209294
// Address: 0x209294 - 0x2092b8
void entry_00209294_0x209294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209294_0x209294");
#endif

    ctx->pc = 0x209294u;

    // 0x209294: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x209294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x209298: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x209298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x20929c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20929cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2092a0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2092a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2092a4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2092A4u;
    {
        const bool branch_taken_0x2092a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2092A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092A4u;
        // 0x2092a8: 0x3c053fff  lui         $a1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2092a4) {
            ctx->pc = 0x2092DCu;
            return;
        }
    }
    ctx->pc = 0x2092ACu;
    // 0x2092ac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2092acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2092b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2092b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2092b4: 0x0  nop
    ctx->pc = 0x2092b4u;
    // NOP
    ctx->pc = 0x2092b8u;
}
