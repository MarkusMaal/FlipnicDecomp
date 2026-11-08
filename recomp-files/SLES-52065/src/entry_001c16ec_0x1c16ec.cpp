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

// Function: entry_001c16ec
// Address: 0x1c16ec - 0x1c1718
void entry_001c16ec_0x1c16ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c16ec_0x1c16ec");
#endif

    ctx->pc = 0x1c16ecu;

    // 0x1c16ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c16f0: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1C16F0u;
    {
        const bool branch_taken_0x1c16f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16F0u;
        // 0x1c16f4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16f0) {
            ctx->pc = 0x1C1850u;
            return;
        }
    }
    ctx->pc = 0x1C16F8u;
    // 0x1c16f8: 0x10680055  beq         $v1, $t0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1C16F8u;
    {
        const bool branch_taken_0x1c16f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1C16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16F8u;
        // 0x1c16fc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16f8) {
            ctx->pc = 0x1C1850u;
            return;
        }
    }
    ctx->pc = 0x1C1700u;
    // 0x1c1700: 0x10690005  beq         $v1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1700u;
    {
        const bool branch_taken_0x1c1700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x1C1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1700u;
        // 0x1c1704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1700) {
            ctx->pc = 0x1C1718u;
            return;
        }
    }
    ctx->pc = 0x1C1708u;
    // 0x1c1708: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1C1708u;
    {
        const bool branch_taken_0x1c1708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1708) {
            ctx->pc = 0x1C1850u;
            return;
        }
    }
    ctx->pc = 0x1C1710u;
    // 0x1c1710: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1C1710u;
    {
        const bool branch_taken_0x1c1710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1710u;
        // 0x1c1714: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1710) {
            ctx->pc = 0x1C1854u;
            return;
        }
    }
    ctx->pc = 0x1C1718u;
}
