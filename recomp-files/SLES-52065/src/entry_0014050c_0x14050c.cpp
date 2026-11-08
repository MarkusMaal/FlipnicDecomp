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

// Function: entry_0014050c
// Address: 0x14050c - 0x140558
void entry_0014050c_0x14050c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014050c_0x14050c");
#endif

    ctx->pc = 0x14050cu;

    // 0x14050c: 0x0  nop
    ctx->pc = 0x14050cu;
    // NOP
    // 0x140510: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x140510u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x140514: 0x0  nop
    ctx->pc = 0x140514u;
    // NOP
    // 0x140518: 0x0  nop
    ctx->pc = 0x140518u;
    // NOP
    // 0x14051c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14051Cu;
    {
        const bool branch_taken_0x14051c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14051c) {
            ctx->pc = 0x140508u;
            return;
        }
    }
    ctx->pc = 0x140524u;
    // 0x140524: 0x2531823  subu        $v1, $s2, $s3
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x140528: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x140528u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14052c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14052Cu;
    {
        const bool branch_taken_0x14052c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14052c) {
            ctx->pc = 0x1405E8u;
            return;
        }
    }
    ctx->pc = 0x140534u;
    // 0x140534: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x140534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140538: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x140538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14053c: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x14053cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x140540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140544: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x140544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x140548: 0x15070014  bne         $t0, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x140548u;
    {
        const bool branch_taken_0x140548 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x140548) {
            ctx->pc = 0x14059Cu;
            return;
        }
    }
    ctx->pc = 0x140550u;
    // 0x140550: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x140550u;
    {
        const bool branch_taken_0x140550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140550u;
        // 0x140554: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140550) {
            ctx->pc = 0x14059Cu;
            return;
        }
    }
    ctx->pc = 0x140558u;
}
