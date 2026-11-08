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

// Function: entry_0015117c
// Address: 0x15117c - 0x1511c8
void entry_0015117c_0x15117c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015117c_0x15117c");
#endif

    ctx->pc = 0x15117cu;

    // 0x15117c: 0x0  nop
    ctx->pc = 0x15117cu;
    // NOP
    // 0x151180: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x151180u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x151184: 0x0  nop
    ctx->pc = 0x151184u;
    // NOP
    // 0x151188: 0x0  nop
    ctx->pc = 0x151188u;
    // NOP
    // 0x15118c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15118Cu;
    {
        const bool branch_taken_0x15118c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15118c) {
            ctx->pc = 0x151178u;
            return;
        }
    }
    ctx->pc = 0x151194u;
    // 0x151194: 0x2531823  subu        $v1, $s2, $s3
    ctx->pc = 0x151194u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x151198: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x151198u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15119c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x15119Cu;
    {
        const bool branch_taken_0x15119c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15119c) {
            ctx->pc = 0x151258u;
            return;
        }
    }
    ctx->pc = 0x1511A4u;
    // 0x1511a4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1511a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1511a8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1511a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1511ac: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1511acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1511b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1511b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1511b4: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x1511b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1511b8: 0x15070014  bne         $t0, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1511B8u;
    {
        const bool branch_taken_0x1511b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1511b8) {
            ctx->pc = 0x15120Cu;
            return;
        }
    }
    ctx->pc = 0x1511C0u;
    // 0x1511c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1511C0u;
    {
        const bool branch_taken_0x1511c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1511C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511C0u;
        // 0x1511c4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511c0) {
            ctx->pc = 0x15120Cu;
            return;
        }
    }
    ctx->pc = 0x1511C8u;
}
