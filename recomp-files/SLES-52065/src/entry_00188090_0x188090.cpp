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

// Function: entry_00188090
// Address: 0x188090 - 0x1880d4
void entry_00188090_0x188090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188090_0x188090");
#endif

    ctx->pc = 0x188090u;

    // 0x188090: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x188090u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x188094: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x188094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x188098: 0x14a40025  bne         $a1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x188098u;
    {
        const bool branch_taken_0x188098 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x188098) {
            ctx->pc = 0x188130u;
            return;
        }
    }
    ctx->pc = 0x1880A0u;
    // 0x1880a0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x1880a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1880a4: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1880A4u;
    {
        const bool branch_taken_0x1880a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1880a4) {
            ctx->pc = 0x188130u;
            return;
        }
    }
    ctx->pc = 0x1880ACu;
    // 0x1880ac: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x1880acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1880b0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1880b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1880b4: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1880B4u;
    {
        const bool branch_taken_0x1880b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1880b4) {
            ctx->pc = 0x1880D4u;
            return;
        }
    }
    ctx->pc = 0x1880BCu;
    // 0x1880bc: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x1880bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1880c0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1880C0u;
    {
        const bool branch_taken_0x1880c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1880c0) {
            ctx->pc = 0x1880D4u;
            return;
        }
    }
    ctx->pc = 0x1880C8u;
    // 0x1880c8: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x1880c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x1880cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1880CCu;
    {
        const bool branch_taken_0x1880cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880CCu;
        // 0x1880d0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880cc) {
            ctx->pc = 0x188130u;
            return;
        }
    }
    ctx->pc = 0x1880D4u;
}
