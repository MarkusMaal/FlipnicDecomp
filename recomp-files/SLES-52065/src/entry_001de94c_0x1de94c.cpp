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

// Function: entry_001de94c
// Address: 0x1de94c - 0x1de998
void entry_001de94c_0x1de94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de94c_0x1de94c");
#endif

    ctx->pc = 0x1de94cu;

    // 0x1de94c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1DE94Cu;
    {
        const bool branch_taken_0x1de94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE94Cu;
        // 0x1de950: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de94c) {
            ctx->pc = 0x1DEA08u;
            return;
        }
    }
    ctx->pc = 0x1DE954u;
    // 0x1de954: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1de954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1de958: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x1de958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x1de95c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DE95Cu;
    {
        const bool branch_taken_0x1de95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE95Cu;
        // 0x1de960: 0x31302  srl         $v0, $v1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de95c) {
            ctx->pc = 0x1DE998u;
            return;
        }
    }
    ctx->pc = 0x1DE964u;
    // 0x1de964: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1de964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1de968: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x1de968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1de96c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1de96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1de970: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1de970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1de974: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1de974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de978: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x1de978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x1de97c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1de97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1de980: 0x30640fff  andi        $a0, $v1, 0xFFF
    ctx->pc = 0x1de980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1de984: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1de984u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1de988: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1de988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1de98c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE98Cu;
    {
        const bool branch_taken_0x1de98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE98Cu;
        // 0x1de990: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de98c) {
            ctx->pc = 0x1DE9A0u;
            return;
        }
    }
    ctx->pc = 0x1DE994u;
    // 0x1de994: 0x0  nop
    ctx->pc = 0x1de994u;
    // NOP
    ctx->pc = 0x1de998u;
}
