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

// Function: entry_001cf5bc
// Address: 0x1cf5bc - 0x1cf5fc
void entry_001cf5bc_0x1cf5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf5bc_0x1cf5bc");
#endif

    ctx->pc = 0x1cf5bcu;

    // 0x1cf5bc: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1cf5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf5c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf5c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf5c8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1cf5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1cf5cc: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x1cf5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1cf5d0: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x1cf5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1cf5d4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF5D4u;
    {
        const bool branch_taken_0x1cf5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cf5d4) {
            ctx->pc = 0x1CF5FCu;
            return;
        }
    }
    ctx->pc = 0x1CF5DCu;
    // 0x1cf5dc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1cf5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1cf5e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf5e4: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1cf5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf5e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF5E8u;
    {
        const bool branch_taken_0x1cf5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5E8u;
        // 0x1cf5ec: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5e8) {
            ctx->pc = 0x1CF5FCu;
            return;
        }
    }
    ctx->pc = 0x1CF5F0u;
    // 0x1cf5f0: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1cf5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cf5f4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1cf5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1cf5f8: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x1cf5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    ctx->pc = 0x1cf5fcu;
}
