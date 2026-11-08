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

// Function: entry_0013fddc
// Address: 0x13fddc - 0x13fe58
void entry_0013fddc_0x13fddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fddc_0x13fddc");
#endif

    ctx->pc = 0x13fddcu;

    // 0x13fddc: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x13FDDCu;
    {
        const bool branch_taken_0x13fddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fddc) {
            ctx->pc = 0x13FEF0u;
            return;
        }
    }
    ctx->pc = 0x13FDE4u;
    // 0x13fde4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x13fde4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13fde8: 0x27a80054  addiu       $t0, $sp, 0x54
    ctx->pc = 0x13fde8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x13fdec: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x13fdecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13fdf0: 0x27a90058  addiu       $t1, $sp, 0x58
    ctx->pc = 0x13fdf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x13fdf4: 0x27a20074  addiu       $v0, $sp, 0x74
    ctx->pc = 0x13fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x13fdf8: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x13fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x13fdfc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x13fdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13fe00: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x13fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x13fe04: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13fe08: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x13fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x13fe0c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x13fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x13fe10: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x13fe10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fe14: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x13fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x13fe18: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x13fe18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13fe1c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x13fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x13fe20: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x13fe20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13fe24: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13fe28: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13fe28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fe2c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x13fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13fe30: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x13fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x13fe34: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x13fe34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13fe38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fe3c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x13fe3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13fe40: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x13fe40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13fe44: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x13fe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13fe48: 0xc7282b  sltu        $a1, $a2, $a3
    ctx->pc = 0x13fe48u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13fe4c: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13FE4Cu;
    {
        const bool branch_taken_0x13fe4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fe4c) {
            ctx->pc = 0x13FE58u;
            return;
        }
    }
    ctx->pc = 0x13FE54u;
    // 0x13fe54: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x13fe54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->pc = 0x13fe58u;
}
