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

// Function: entry_00110d40
// Address: 0x110d40 - 0x110d90
void entry_00110d40_0x110d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110d40_0x110d40");
#endif

    ctx->pc = 0x110d40u;

    // 0x110d40: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x110d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110d44: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x110d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110d48: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x110d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x110d4c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x110d4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x110d50: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x110d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x110d54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x110d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x110d58: 0x8c862cd8  lw          $a2, 0x2CD8($a0)
    ctx->pc = 0x110d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x110d5c: 0x90c50224  lbu         $a1, 0x224($a2)
    ctx->pc = 0x110d5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x110d60: 0x526fc  dsll32      $a0, $a1, 27
    ctx->pc = 0x110d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 27));
    // 0x110d64: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x110d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x110d68: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x110D68u;
    {
        const bool branch_taken_0x110d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x110D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D68u;
        // 0x110d6c: 0x526bc  dsll32      $a0, $a1, 26 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d68) {
            ctx->pc = 0x110DACu;
            return;
        }
    }
    ctx->pc = 0x110D70u;
    // 0x110d70: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x110d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x110d74: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x110D74u;
    {
        const bool branch_taken_0x110d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x110d74) {
            ctx->pc = 0x110D90u;
            return;
        }
    }
    ctx->pc = 0x110D7Cu;
    // 0x110d7c: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x110d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x110d80: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x110d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x110d84: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x110d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x110d88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x110D88u;
    {
        const bool branch_taken_0x110d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D88u;
        // 0x110d8c: 0xacc40224  sw          $a0, 0x224($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d88) {
            ctx->pc = 0x110DACu;
            return;
        }
    }
    ctx->pc = 0x110D90u;
}
