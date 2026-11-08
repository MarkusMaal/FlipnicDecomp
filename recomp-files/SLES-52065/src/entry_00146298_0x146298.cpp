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

// Function: entry_00146298
// Address: 0x146298 - 0x1462c4
void entry_00146298_0x146298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146298_0x146298");
#endif

    ctx->pc = 0x146298u;

    // 0x146298: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x146298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14629c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x14629cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1462a0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1462a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1462a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1462a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1462a8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1462a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1462ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1462acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1462b0: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1462b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1462b4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1462B4u;
    {
        const bool branch_taken_0x1462b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1462B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462B4u;
        // 0x1462b8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462b4) {
            ctx->pc = 0x1462C4u;
            return;
        }
    }
    ctx->pc = 0x1462BCu;
    // 0x1462bc: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1462bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1462c0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1462c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x1462c4u;
}
