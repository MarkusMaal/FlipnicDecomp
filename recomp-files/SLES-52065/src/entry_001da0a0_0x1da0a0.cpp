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

// Function: entry_001da0a0
// Address: 0x1da0a0 - 0x1da0f8
void entry_001da0a0_0x1da0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da0a0_0x1da0a0");
#endif

    ctx->pc = 0x1da0a0u;

    // 0x1da0a0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1da0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1da0a4: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1da0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1da0a8: 0x244a71d4  addiu       $t2, $v0, 0x71D4
    ctx->pc = 0x1da0a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 29140));
    // 0x1da0ac: 0x240800f0  addiu       $t0, $zero, 0xF0
    ctx->pc = 0x1da0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1da0b0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1da0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D4u));
    // 0x1da0b4: 0x90f90000  lbu         $t9, 0x0($a3)
    ctx->pc = 0x1da0b4u;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da0b8: 0x1048000f  beq         $v0, $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DA0B8u;
    {
        const bool branch_taken_0x1da0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1DA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0B8u;
        // 0x1da0bc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0b8) {
            ctx->pc = 0x1DA0F8u;
            return;
        }
    }
    ctx->pc = 0x1DA0C0u;
    // 0x1da0c0: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x1da0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x1da0c4: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1da0c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1da0c8: 0x252471d0  addiu       $a0, $t1, 0x71D0
    ctx->pc = 0x1da0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da0cc: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1da0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1da0d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1da0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D0u));
    // 0x1da0d4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da0d8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1da0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1da0dc: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x1da0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x1da0e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da0e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da0e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1da0e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3871D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3871D0u, _value); } while (0);
    // 0x1da0ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA0ECu;
    {
        const bool branch_taken_0x1da0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0ECu;
        // 0x1da0f0: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0ec) {
            ctx->pc = 0x1DA100u;
            return;
        }
    }
    ctx->pc = 0x1DA0F4u;
    // 0x1da0f4: 0x0  nop
    ctx->pc = 0x1da0f4u;
    // NOP
    ctx->pc = 0x1da0f8u;
}
