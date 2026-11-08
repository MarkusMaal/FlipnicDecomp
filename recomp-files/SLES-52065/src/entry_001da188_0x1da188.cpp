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

// Function: entry_001da188
// Address: 0x1da188 - 0x1da1e0
void entry_001da188_0x1da188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da188_0x1da188");
#endif

    ctx->pc = 0x1da188u;

    // 0x1da188: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1da188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1da18c: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1da18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1da190: 0x244a71d4  addiu       $t2, $v0, 0x71D4
    ctx->pc = 0x1da190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 29140));
    // 0x1da194: 0x240800f0  addiu       $t0, $zero, 0xF0
    ctx->pc = 0x1da194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1da198: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1da198u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D4u));
    // 0x1da19c: 0x90f90000  lbu         $t9, 0x0($a3)
    ctx->pc = 0x1da19cu;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da1a0: 0x1048000f  beq         $v0, $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DA1A0u;
    {
        const bool branch_taken_0x1da1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1DA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1A0u;
        // 0x1da1a4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1a0) {
            ctx->pc = 0x1DA1E0u;
            return;
        }
    }
    ctx->pc = 0x1DA1A8u;
    // 0x1da1a8: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x1da1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x1da1ac: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1da1acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1da1b0: 0x252471d0  addiu       $a0, $t1, 0x71D0
    ctx->pc = 0x1da1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da1b4: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1da1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1da1b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1da1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D0u));
    // 0x1da1bc: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da1c0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1da1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1da1c4: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x1da1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x1da1c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da1cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da1d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1da1d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3871D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3871D0u, _value); } while (0);
    // 0x1da1d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA1D4u;
    {
        const bool branch_taken_0x1da1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1D4u;
        // 0x1da1d8: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1d4) {
            ctx->pc = 0x1DA1E8u;
            return;
        }
    }
    ctx->pc = 0x1DA1DCu;
    // 0x1da1dc: 0x0  nop
    ctx->pc = 0x1da1dcu;
    // NOP
    ctx->pc = 0x1da1e0u;
}
