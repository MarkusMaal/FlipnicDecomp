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

// Function: entry_001fc088
// Address: 0x1fc088 - 0x1fc100
void entry_001fc088_0x1fc088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc088_0x1fc088");
#endif

    ctx->pc = 0x1fc088u;

label_1fc088:
    // 0x1fc088: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x1fc088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1fc08c: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x1fc08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1fc090: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1fc090u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1fc094: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1fc094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1fc098: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x1fc098u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1fc09c: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x1fc09cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1fc0a0: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1fc0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1fc0a4: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x1fc0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1fc0a8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1fc0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fc0ac: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1fc0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc0b0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1fc0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1fc0b4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1fc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1fc0b8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1fc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fc0bc: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x1fc0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fc0c0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1fc0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1fc0c4: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x1fc0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x1fc0c8: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x1fc0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1fc0cc: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x1fc0ccu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1fc0d0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1fc0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1fc0d4: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x1fc0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1fc0d8: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x1fc0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fc0dc: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x1fc0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fc0e0: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x1fc0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1fc0e4: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x1fc0e4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1fc0e8: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1FC0E8u;
    {
        const bool branch_taken_0x1fc0e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0E8u;
        // 0x1fc0ec: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0e8) {
            ctx->pc = 0x1FC088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc088;
        }
    }
    ctx->pc = 0x1FC0F0u;
    // 0x1fc0f0: 0x15a0000c  bnez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC0F0u;
    {
        const bool branch_taken_0x1fc0f0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0F0u;
        // 0x1fc0f4: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0f0) {
            ctx->pc = 0x1FC124u;
            return;
        }
    }
    ctx->pc = 0x1FC0F8u;
    // 0x1fc0f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC0F8u;
    {
        const bool branch_taken_0x1fc0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0F8u;
        // 0x1fc0fc: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0f8) {
            ctx->pc = 0x1FC104u;
            return;
        }
    }
    ctx->pc = 0x1FC100u;
}
