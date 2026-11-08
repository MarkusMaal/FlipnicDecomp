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

// Function: entry_001fc148
// Address: 0x1fc148 - 0x1fc1c0
void entry_001fc148_0x1fc148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc148_0x1fc148");
#endif

    ctx->pc = 0x1fc148u;

label_1fc148:
    // 0x1fc148: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x1fc148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1fc14c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1fc14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1fc150: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1fc150u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1fc154: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1fc154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1fc158: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x1fc158u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1fc15c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc160: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1fc160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc164: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1fc164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1fc168: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1fc168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1fc16c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1fc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc170: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x1fc170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1fc174: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1fc174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1fc178: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x1fc178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1fc17c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1fc17cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1fc180: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x1fc180u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1fc184: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1fc184u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fc188: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1fc188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1fc18c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x1fc18cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fc190: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x1fc190u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fc194: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x1fc194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1fc198: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x1fc198u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1fc19c: 0x26b102b  sltu        $v0, $s3, $t3
    ctx->pc = 0x1fc19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1fc1a0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1FC1A0u;
    {
        const bool branch_taken_0x1fc1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1A0u;
        // 0x1fc1a4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1a0) {
            ctx->pc = 0x1FC148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc148;
        }
    }
    ctx->pc = 0x1FC1A8u;
    // 0x1fc1a8: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x1fc1a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1fc1ac: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc1b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC1B0u;
    {
        const bool branch_taken_0x1fc1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1B0u;
        // 0x1fc1b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1b0) {
            ctx->pc = 0x1FC1E4u;
            return;
        }
    }
    ctx->pc = 0x1FC1B8u;
    // 0x1fc1b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC1B8u;
    {
        const bool branch_taken_0x1fc1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1B8u;
        // 0x1fc1bc: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1b8) {
            ctx->pc = 0x1FC1C4u;
            return;
        }
    }
    ctx->pc = 0x1FC1C0u;
}
