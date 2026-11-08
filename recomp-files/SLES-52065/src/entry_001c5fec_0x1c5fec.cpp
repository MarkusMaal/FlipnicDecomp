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

// Function: entry_001c5fec
// Address: 0x1c5fec - 0x1c6018
void entry_001c5fec_0x1c5fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5fec_0x1c5fec");
#endif

    ctx->pc = 0x1c5fecu;

    // 0x1c5fec: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1C5FECu;
    {
        const bool branch_taken_0x1c5fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FECu;
        // 0x1c5ff0: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fec) {
            ctx->pc = 0x1C6120u;
            return;
        }
    }
    ctx->pc = 0x1C5FF4u;
    // 0x1c5ff4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5ff8: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c5ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C688u));
    // 0x1c5ffc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c6000: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c6000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c6004: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6004u;
    {
        const bool branch_taken_0x1c6004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6004u;
        // 0x1c6008: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6004) {
            ctx->pc = 0x1C6018u;
            return;
        }
    }
    ctx->pc = 0x1C600Cu;
    // 0x1c600c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c600cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c6010: 0x90232ebc  lbu         $v1, 0x2EBC($at)
    ctx->pc = 0x1c6010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBCu));
    // 0x1c6014: 0x0  nop
    ctx->pc = 0x1c6014u;
    // NOP
    ctx->pc = 0x1c6018u;
}
