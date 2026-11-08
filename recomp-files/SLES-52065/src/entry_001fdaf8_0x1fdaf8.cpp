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

// Function: entry_001fdaf8
// Address: 0x1fdaf8 - 0x1fdb44
void entry_001fdaf8_0x1fdaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdaf8_0x1fdaf8");
#endif

    ctx->pc = 0x1fdaf8u;

    // 0x1fdaf8: 0x25abd9c8  addiu       $t3, $t5, -0x2638
    ctx->pc = 0x1fdaf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957512));
    // 0x1fdafc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1fdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1fdb00: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x1fdb00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1fdb04: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x1fdb04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1fdb08: 0x54e8000e  bnel        $a3, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FDB08u;
    {
        const bool branch_taken_0x1fdb08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1fdb08) {
            ctx->pc = 0x1FDB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB08u;
            // 0x1fdb0c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB44u;
            return;
        }
    }
    ctx->pc = 0x1FDB10u;
    // 0x1fdb10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fdb14: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x1fdb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1fdb18: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1fdb18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fdb1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fdb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdb20: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1fdb20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1fdb24: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x1fdb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1fdb28: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1fdb28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1fdb2c: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x1fdb2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1fdb30: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fdb30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1fdb34: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1fdb34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1fdb38: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1fdb38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1fdb3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FDB3Cu;
    {
        const bool branch_taken_0x1fdb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB3Cu;
        // 0x1fdb40: 0xad650004  sw          $a1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb3c) {
            ctx->pc = 0x1FDB88u;
            return;
        }
    }
    ctx->pc = 0x1FDB44u;
}
