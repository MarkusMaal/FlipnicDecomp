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

// Function: entry_001cf4b0
// Address: 0x1cf4b0 - 0x1cf4e0
void entry_001cf4b0_0x1cf4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf4b0_0x1cf4b0");
#endif

    ctx->pc = 0x1cf4b0u;

    // 0x1cf4b0: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x1cf4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1cf4b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf4b8: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x1cf4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1cf4bc: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CF4BCu;
    {
        const bool branch_taken_0x1cf4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4BCu;
        // 0x1cf4c0: 0x24740064  addiu       $s4, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4bc) {
            ctx->pc = 0x1CF548u;
            return;
        }
    }
    ctx->pc = 0x1CF4C4u;
    // 0x1cf4c4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1cf4c8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cf4cc: 0x246330c0  addiu       $v1, $v1, 0x30C0
    ctx->pc = 0x1cf4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12480));
    // 0x1cf4d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cf4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cf4d4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF4D4u;
    {
        const bool branch_taken_0x1cf4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4D4u;
        // 0x1cf4d8: 0x90720000  lbu         $s2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4d4) {
            ctx->pc = 0x1CF4E0u;
            return;
        }
    }
    ctx->pc = 0x1CF4DCu;
    // 0x1cf4dc: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x1cf4dcu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1cf4e0u;
}
