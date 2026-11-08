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

// Function: entry_001889ec
// Address: 0x1889ec - 0x188a3c
void entry_001889ec_0x1889ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001889ec_0x1889ec");
#endif

    ctx->pc = 0x1889ecu;

    // 0x1889ec: 0x0  nop
    ctx->pc = 0x1889ecu;
    // NOP
    // 0x1889f0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1889f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1889f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1889f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1889f8: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x1889f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1889fc: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x1889fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x188a00: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x188a00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x188a04: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x188a04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x188a08: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x188a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x188a0c: 0x10e30072  beq         $a3, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x188A0Cu;
    {
        const bool branch_taken_0x188a0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x188A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A0Cu;
        // 0x188a10: 0xafa400c8  sw          $a0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a0c) {
            ctx->pc = 0x188BD8u;
            return;
        }
    }
    ctx->pc = 0x188A14u;
    // 0x188a14: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x188a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x188a18: 0x10e30069  beq         $a3, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x188A18u;
    {
        const bool branch_taken_0x188a18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x188a18) {
            ctx->pc = 0x188BC0u;
            return;
        }
    }
    ctx->pc = 0x188A20u;
    // 0x188a20: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x188a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x188a24: 0x10e20042  beq         $a3, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x188A24u;
    {
        const bool branch_taken_0x188a24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x188A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A24u;
        // 0x188a28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a24) {
            ctx->pc = 0x188B30u;
            return;
        }
    }
    ctx->pc = 0x188A2Cu;
    // 0x188a2c: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188A2Cu;
    {
        const bool branch_taken_0x188a2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x188a2c) {
            ctx->pc = 0x188A3Cu;
            return;
        }
    }
    ctx->pc = 0x188A34u;
    // 0x188a34: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x188A34u;
    {
        const bool branch_taken_0x188a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a34) {
            ctx->pc = 0x188C00u;
            return;
        }
    }
    ctx->pc = 0x188A3Cu;
}
