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

// Function: entry_001e3a00
// Address: 0x1e3a00 - 0x1e3a60
void entry_001e3a00_0x1e3a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3a00_0x1e3a00");
#endif

    ctx->pc = 0x1e3a00u;

    // 0x1e3a00: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e3a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e3a04: 0x82530000  lb          $s3, 0x0($s2)
    ctx->pc = 0x1e3a04u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e3a08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e3a0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e3a10: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E3A10u;
    {
        const bool branch_taken_0x1e3a10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A10u;
        // 0x1e3a14: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a10) {
            ctx->pc = 0x1E3A88u;
            return;
        }
    }
    ctx->pc = 0x1E3A18u;
    // 0x1e3a18: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e3a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e3a1c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e3a20: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e3a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e3a24: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e3a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e3a28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e3a2c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3A2Cu;
    {
        const bool branch_taken_0x1e3a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a2c) {
            ctx->pc = 0x1E3A70u;
            return;
        }
    }
    ctx->pc = 0x1E3A34u;
    // 0x1e3a34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e3a38: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e3a3c: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x1e3a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1e3a40: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e3a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e3a44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e3a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e3a48: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e3a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3a4c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3A4Cu;
    {
        const bool branch_taken_0x1e3a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A4Cu;
        // 0x1e3a50: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a4c) {
            ctx->pc = 0x1E3A60u;
            return;
        }
    }
    ctx->pc = 0x1E3A54u;
    // 0x1e3a54: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e3a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e3a58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3A58u;
    {
        const bool branch_taken_0x1e3a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A58u;
        // 0x1e3a5c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a58) {
            ctx->pc = 0x1E3A68u;
            return;
        }
    }
    ctx->pc = 0x1E3A60u;
}
