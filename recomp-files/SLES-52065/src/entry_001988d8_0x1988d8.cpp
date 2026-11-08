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

// Function: entry_001988d8
// Address: 0x1988d8 - 0x198914
void entry_001988d8_0x1988d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001988d8_0x1988d8");
#endif

    ctx->pc = 0x1988d8u;

    // 0x1988d8: 0x8e2304d0  lw          $v1, 0x4D0($s1)
    ctx->pc = 0x1988d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1232)));
    // 0x1988dc: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x1988DCu;
    {
        const bool branch_taken_0x1988dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1988E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988DCu;
        // 0x1988e0: 0x263604d0  addiu       $s6, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988dc) {
            ctx->pc = 0x198B18u;
            return;
        }
    }
    ctx->pc = 0x1988E4u;
    // 0x1988e4: 0x8e240490  lw          $a0, 0x490($s1)
    ctx->pc = 0x1988e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x1988e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1988e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1988ec: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1988ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1988f0: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1988F0u;
    {
        const bool branch_taken_0x1988f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1988F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988F0u;
        // 0x1988f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988f0) {
            ctx->pc = 0x198978u;
            return;
        }
    }
    ctx->pc = 0x1988F8u;
    // 0x1988f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1988f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1988fc: 0x10850010  beq         $a0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1988FCu;
    {
        const bool branch_taken_0x1988fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1988fc) {
            ctx->pc = 0x198940u;
            return;
        }
    }
    ctx->pc = 0x198904u;
    // 0x198904: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198904u;
    {
        const bool branch_taken_0x198904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198904) {
            ctx->pc = 0x198914u;
            return;
        }
    }
    ctx->pc = 0x19890Cu;
    // 0x19890c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x19890Cu;
    {
        const bool branch_taken_0x19890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19890c) {
            ctx->pc = 0x1989D4u;
            return;
        }
    }
    ctx->pc = 0x198914u;
}
