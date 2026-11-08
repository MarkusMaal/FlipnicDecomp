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

// Function: entry_001d39e8
// Address: 0x1d39e8 - 0x1d3a20
void entry_001d39e8_0x1d39e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d39e8_0x1d39e8");
#endif

    ctx->pc = 0x1d39e8u;

    // 0x1d39e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d39e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39ec: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1d39ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d39f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D39F0u;
    {
        const bool branch_taken_0x1d39f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39F0u;
        // 0x1d39f4: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39f0) {
            ctx->pc = 0x1D3A50u;
            return;
        }
    }
    ctx->pc = 0x1D39F8u;
    // 0x1d39f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d39fc: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1d39fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1d3a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3a04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3a08: 0x54750005  bnel        $v1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3A08u;
    {
        const bool branch_taken_0x1d3a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x1d3a08) {
            ctx->pc = 0x1D3A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3A08u;
            // 0x1d3a0c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3A20u;
            return;
        }
    }
    ctx->pc = 0x1D3A10u;
    // 0x1d3a10: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d3a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3a14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d3a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D3A18u;
    {
        const bool branch_taken_0x1d3a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A18u;
        // 0x1d3a1c: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a18) {
            ctx->pc = 0x1D3A50u;
            return;
        }
    }
    ctx->pc = 0x1D3A20u;
}
