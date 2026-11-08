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

// Function: entry_001e489c
// Address: 0x1e489c - 0x1e48cc
void entry_001e489c_0x1e489c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e489c_0x1e489c");
#endif

    ctx->pc = 0x1e489cu;

    // 0x1e489c: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x1e489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1e48a0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e48a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e48a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e48a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e48a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E48A8u;
    {
        const bool branch_taken_0x1e48a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48A8u;
        // 0x1e48ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48a8) {
            ctx->pc = 0x1E48F4u;
            return;
        }
    }
    ctx->pc = 0x1E48B0u;
    // 0x1e48b0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1e48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e48b4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e48b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e48bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E48BCu;
    {
        const bool branch_taken_0x1e48bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48BCu;
        // 0x1e48c0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48bc) {
            ctx->pc = 0x1E48CCu;
            return;
        }
    }
    ctx->pc = 0x1E48C4u;
    // 0x1e48c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e48c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e48c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1e48ccu;
}
