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

// Function: entry_00138468
// Address: 0x138468 - 0x1384b4
void entry_00138468_0x138468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138468_0x138468");
#endif

    ctx->pc = 0x138468u;

    // 0x138468: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x138468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13846c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x13846cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x138470: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x138470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x138474: 0x8c650080  lw          $a1, 0x80($v1)
    ctx->pc = 0x138474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x138478: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x138478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13847c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x13847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x138480: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x138480u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x138484: 0x26b500a0  addiu       $s5, $s5, 0xA0
    ctx->pc = 0x138484u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
    // 0x138488: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x138488u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13848c: 0x257182b  sltu        $v1, $s2, $s7
    ctx->pc = 0x13848cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x138490: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x138490u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x138494: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x138494u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x138498: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x138498u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13849c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x13849cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1384a0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1384a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1384a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1384a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1384a8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1384a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1384ac: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1384ACu;
    {
        const bool branch_taken_0x1384ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1384B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384ACu;
        // 0x1384b0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384ac) {
            ctx->pc = 0x1383B8u;
            return;
        }
    }
    ctx->pc = 0x1384B4u;
}
