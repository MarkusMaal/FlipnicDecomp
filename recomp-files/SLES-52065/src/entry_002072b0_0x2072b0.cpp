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

// Function: entry_002072b0
// Address: 0x2072b0 - 0x2072ec
void entry_002072b0_0x2072b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002072b0_0x2072b0");
#endif

    ctx->pc = 0x2072b0u;

    // 0x2072b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2072b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2072b4: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x2072b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x2072b8: 0x24425a00  addiu       $v0, $v0, 0x5A00
    ctx->pc = 0x2072b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23040));
    // 0x2072bc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2072bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2072c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2072c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2072c4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2072c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2072c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2072c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2072cc: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2072ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2072d0: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2072D0u;
    {
        const bool branch_taken_0x2072d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2072D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072D0u;
        // 0x2072d4: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072d0) {
            ctx->pc = 0x2072ECu;
            return;
        }
    }
    ctx->pc = 0x2072D8u;
    // 0x2072d8: 0x1695823  subu        $t3, $t3, $t1
    ctx->pc = 0x2072d8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2072dc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2072dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2072e0: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2072e4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2072E4u;
    {
        const bool branch_taken_0x2072e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2072E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072E4u;
        // 0x2072e8: 0x312affff  andi        $t2, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072e4) {
            ctx->pc = 0x2073F0u;
            return;
        }
    }
    ctx->pc = 0x2072ECu;
}
