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

// Function: entry_001fdaac
// Address: 0x1fdaac - 0x1fdacc
void entry_001fdaac_0x1fdaac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdaac_0x1fdaac");
#endif

    ctx->pc = 0x1fdaacu;

    // 0x1fdaac: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x1fdaacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1fdab0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FDAB0u;
    {
        const bool branch_taken_0x1fdab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAB0u;
        // 0x1fdab4: 0x2466005b  addiu       $a2, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdab0) {
            ctx->pc = 0x1FDAF8u;
            return;
        }
    }
    ctx->pc = 0x1FDAB8u;
    // 0x1fdab8: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x1fdab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x1fdabc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDABCu;
    {
        const bool branch_taken_0x1fdabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDABCu;
        // 0x1fdac0: 0x91302  srl         $v0, $t1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdabc) {
            ctx->pc = 0x1FDACCu;
            return;
        }
    }
    ctx->pc = 0x1FDAC4u;
    // 0x1fdac4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FDAC4u;
    {
        const bool branch_taken_0x1fdac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAC4u;
        // 0x1fdac8: 0x2446006e  addiu       $a2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdac4) {
            ctx->pc = 0x1FDAF8u;
            return;
        }
    }
    ctx->pc = 0x1FDACCu;
}
