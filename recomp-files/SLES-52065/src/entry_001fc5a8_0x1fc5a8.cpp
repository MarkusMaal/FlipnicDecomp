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

// Function: entry_001fc5a8
// Address: 0x1fc5a8 - 0x1fc5d0
void entry_001fc5a8_0x1fc5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc5a8_0x1fc5a8");
#endif

    ctx->pc = 0x1fc5a8u;

    // 0x1fc5a8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1fc5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc5ac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fc5acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc5b0: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1fc5b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc5b4: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x1fc5b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1fc5b8: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1fc5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fc5bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC5BCu;
    {
        const bool branch_taken_0x1fc5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5BCu;
        // 0x1fc5c0: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5bc) {
            ctx->pc = 0x1FC5D0u;
            return;
        }
    }
    ctx->pc = 0x1FC5C4u;
    // 0x1fc5c4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fc5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fc5c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fc5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc5cc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1fc5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x1fc5d0u;
}
