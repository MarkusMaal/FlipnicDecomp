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

// Function: entry_001a8fa8
// Address: 0x1a8fa8 - 0x1a9000
void entry_001a8fa8_0x1a8fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8fa8_0x1a8fa8");
#endif

    ctx->pc = 0x1a8fa8u;

    // 0x1a8fa8: 0x8c4406b0  lw          $a0, 0x6B0($v0)
    ctx->pc = 0x1a8fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
    // 0x1a8fac: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a8facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a8fb0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a8fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a8fb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8fb8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a8fbc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1a8fc0: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x1A8FC0u;
    {
        const bool branch_taken_0x1a8fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FC0u;
        // 0x1a8fc4: 0x245606b0  addiu       $s6, $v0, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fc0) {
            ctx->pc = 0x1A91B8u;
            return;
        }
    }
    ctx->pc = 0x1A8FC8u;
    // 0x1a8fc8: 0x8e8509c0  lw          $a1, 0x9C0($s4)
    ctx->pc = 0x1a8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2496)));
    // 0x1a8fcc: 0x8e8309c4  lw          $v1, 0x9C4($s4)
    ctx->pc = 0x1a8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2500)));
    // 0x1a8fd0: 0x10a30079  beq         $a1, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1A8FD0u;
    {
        const bool branch_taken_0x1a8fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8fd0) {
            ctx->pc = 0x1A91B8u;
            return;
        }
    }
    ctx->pc = 0x1A8FD8u;
    // 0x1a8fd8: 0x8c5106bc  lw          $s1, 0x6BC($v0)
    ctx->pc = 0x1a8fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1724)));
    // 0x1a8fdc: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8FDCu;
    {
        const bool branch_taken_0x1a8fdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8fdc) {
            ctx->pc = 0x1A9000u;
            return;
        }
    }
    ctx->pc = 0x1A8FE4u;
    // 0x1a8fe4: 0x8c4306b4  lw          $v1, 0x6B4($v0)
    ctx->pc = 0x1a8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1716)));
    // 0x1a8fe8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a8fec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8ff0: 0x24422c58  addiu       $v0, $v0, 0x2C58
    ctx->pc = 0x1a8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11352));
    // 0x1a8ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8ff8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A8FF8u;
    {
        const bool branch_taken_0x1a8ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FF8u;
        // 0x1a8ffc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ff8) {
            ctx->pc = 0x1A9068u;
            return;
        }
    }
    ctx->pc = 0x1A9000u;
}
