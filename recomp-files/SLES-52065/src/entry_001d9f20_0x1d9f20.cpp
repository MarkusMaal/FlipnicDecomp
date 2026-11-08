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

// Function: entry_001d9f20
// Address: 0x1d9f20 - 0x1d9f90
void entry_001d9f20_0x1d9f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9f20_0x1d9f20");
#endif

    ctx->pc = 0x1d9f20u;

    // 0x1d9f20: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x1d9f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1d9f24: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1d9f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1d9f28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9f2c: 0x246871d4  addiu       $t0, $v1, 0x71D4
    ctx->pc = 0x1d9f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 29140));
    // 0x1d9f30: 0x90870048  lbu         $a3, 0x48($a0)
    ctx->pc = 0x1d9f30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1d9f34: 0x904b0000  lbu         $t3, 0x0($v0)
    ctx->pc = 0x1d9f34u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9f38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9f3c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1d9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1d9f40: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1d9f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9f44: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x1d9f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d9f48: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1d9f48u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3871D4u));
    // 0x1d9f4c: 0x904a0000  lbu         $t2, 0x0($v0)
    ctx->pc = 0x1d9f4cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9f50: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d9f54: 0x90690000  lbu         $t1, 0x0($v1)
    ctx->pc = 0x1d9f54u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9f58: 0x10c7000d  beq         $a2, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1D9F58u;
    {
        const bool branch_taken_0x1d9f58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x1D9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F58u;
        // 0x1d9f5c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f58) {
            ctx->pc = 0x1D9F90u;
            return;
        }
    }
    ctx->pc = 0x1D9F60u;
    // 0x1d9f60: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x1d9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x1d9f64: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1d9f64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1d9f68: 0x24c371d0  addiu       $v1, $a2, 0x71D0
    ctx->pc = 0x1d9f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 29136));
    // 0x1d9f6c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1d9f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1d9f70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D0u));
    // 0x1d9f74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1d9f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1d9f78: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1d9f78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d9f7c: 0xa02770d0  sb          $a3, 0x70D0($at)
    ctx->pc = 0x1d9f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 28880), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d9f80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9f84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9F84u;
    {
        const bool branch_taken_0x1d9f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F84u;
        // 0x1d9f88: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f84) {
            ctx->pc = 0x1D9F98u;
            return;
        }
    }
    ctx->pc = 0x1D9F8Cu;
    // 0x1d9f8c: 0x0  nop
    ctx->pc = 0x1d9f8cu;
    // NOP
    ctx->pc = 0x1d9f90u;
}
