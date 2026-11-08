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

// Function: entry_001d3eb8
// Address: 0x1d3eb8 - 0x1d3eec
void entry_001d3eb8_0x1d3eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3eb8_0x1d3eb8");
#endif

    ctx->pc = 0x1d3eb8u;

    // 0x1d3eb8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1d3eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1d3ebc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d3ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d3ec0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3EC0u;
    {
        const bool branch_taken_0x1d3ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EC0u;
        // 0x1d3ec4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ec0) {
            ctx->pc = 0x1D3EECu;
            return;
        }
    }
    ctx->pc = 0x1D3EC8u;
    // 0x1d3ec8: 0x8d63002c  lw          $v1, 0x2C($t3)
    ctx->pc = 0x1d3ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 44)));
    // 0x1d3ecc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3ECCu;
    {
        const bool branch_taken_0x1d3ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ECCu;
        // 0x1d3ed0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ecc) {
            ctx->pc = 0x1D3EF0u;
            return;
        }
    }
    ctx->pc = 0x1D3ED4u;
    // 0x1d3ed4: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1d3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1d3ed8: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x1d3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1d3edc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1d3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d3ee0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1d3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d3ee4: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x1d3ee4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d3ee8: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x1d3eecu;
}
