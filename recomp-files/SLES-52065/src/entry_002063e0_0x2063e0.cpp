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

// Function: entry_002063e0
// Address: 0x2063e0 - 0x20641c
void entry_002063e0_0x2063e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002063e0_0x2063e0");
#endif

    ctx->pc = 0x2063e0u;

    // 0x2063e0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2063e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2063e4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2063e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2063e8: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x2063e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x2063ec: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2063ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2063f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2063f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2063f4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2063f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2063f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2063f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2063fc: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2063fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x206400: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x206400u;
    {
        const bool branch_taken_0x206400 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x206404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206400u;
        // 0x206404: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206400) {
            ctx->pc = 0x20641Cu;
            return;
        }
    }
    ctx->pc = 0x206408u;
    // 0x206408: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x206408u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x20640c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x20640cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206410: 0x84c02  srl         $t1, $t0, 16
    ctx->pc = 0x206410u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x206414: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x206414u;
    {
        const bool branch_taken_0x206414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206414u;
        // 0x206418: 0x310bffff  andi        $t3, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206414) {
            ctx->pc = 0x206520u;
            return;
        }
    }
    ctx->pc = 0x20641Cu;
}
