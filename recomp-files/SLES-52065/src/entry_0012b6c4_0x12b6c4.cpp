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

// Function: entry_0012b6c4
// Address: 0x12b6c4 - 0x12b714
void entry_0012b6c4_0x12b6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b6c4_0x12b6c4");
#endif

    ctx->pc = 0x12b6c4u;

    // 0x12b6c4: 0x0  nop
    ctx->pc = 0x12b6c4u;
    // NOP
    // 0x12b6c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12b6cc: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x12b6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12b6d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x12B6D0u;
    {
        const bool branch_taken_0x12b6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6D0u;
        // 0x12b6d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6d0) {
            ctx->pc = 0x12B698u;
            return;
        }
    }
    ctx->pc = 0x12B6D8u;
    // 0x12b6d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12b6dc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x12b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x12b6e0: 0x10640060  beq         $v1, $a0, . + 4 + (0x60 << 2)
    ctx->pc = 0x12B6E0u;
    {
        const bool branch_taken_0x12b6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x12B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6E0u;
        // 0x12b6e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6e0) {
            ctx->pc = 0x12B864u;
            return;
        }
    }
    ctx->pc = 0x12B6E8u;
    // 0x12b6e8: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x12B6E8u;
    {
        const bool branch_taken_0x12b6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b6e8) {
            ctx->pc = 0x12B864u;
            return;
        }
    }
    ctx->pc = 0x12B6F0u;
    // 0x12b6f0: 0x1082005c  beq         $a0, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x12B6F0u;
    {
        const bool branch_taken_0x12b6f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b6f0) {
            ctx->pc = 0x12B864u;
            return;
        }
    }
    ctx->pc = 0x12B6F8u;
    // 0x12b6f8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x12b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x12b6fc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12b700: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x12b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12b704: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x12b704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x12b708: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x12b708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x12b70c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x12B70Cu;
    {
        const bool branch_taken_0x12b70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B70Cu;
        // 0x12b710: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b70c) {
            ctx->pc = 0x12B864u;
            return;
        }
    }
    ctx->pc = 0x12B714u;
}
