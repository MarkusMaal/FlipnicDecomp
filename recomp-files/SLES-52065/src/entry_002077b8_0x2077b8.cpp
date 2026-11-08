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

// Function: entry_002077b8
// Address: 0x2077b8 - 0x2077f0
void entry_002077b8_0x2077b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002077b8_0x2077b8");
#endif

    ctx->pc = 0x2077b8u;

    // 0x2077b8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2077b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2077bc: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2077bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2077c0: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x2077c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x2077c4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2077c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2077c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2077c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2077cc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2077ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2077d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2077d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2077d4: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x2077d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2077d8: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2077D8u;
    {
        const bool branch_taken_0x2077d8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2077DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077D8u;
        // 0x2077dc: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077d8) {
            ctx->pc = 0x2077F0u;
            return;
        }
    }
    ctx->pc = 0x2077E0u;
    // 0x2077e0: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x2077e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2077e4: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2077e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2077e8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2077E8u;
    {
        const bool branch_taken_0x2077e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2077ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077E8u;
        // 0x2077ec: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077e8) {
            ctx->pc = 0x2078CCu;
            return;
        }
    }
    ctx->pc = 0x2077F0u;
}
