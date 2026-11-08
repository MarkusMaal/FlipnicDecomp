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

// Function: entry_00205af0
// Address: 0x205af0 - 0x205b08
void entry_00205af0_0x205af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205af0_0x205af0");
#endif

    ctx->pc = 0x205af0u;

    // 0x205af0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205AF0u;
    {
        const bool branch_taken_0x205af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AF0u;
        // 0x205af4: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205af0) {
            ctx->pc = 0x205B08u;
            return;
        }
    }
    ctx->pc = 0x205AF8u;
    // 0x205af8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205af8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x205afc: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x205afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x205b00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x205B00u;
    {
        const bool branch_taken_0x205b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B00u;
        // 0x205b04: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b00) {
            ctx->pc = 0x205B30u;
            return;
        }
    }
    ctx->pc = 0x205B08u;
}
