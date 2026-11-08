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

// Function: entry_00200038
// Address: 0x200038 - 0x200094
void entry_00200038_0x200038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200038_0x200038");
#endif

    ctx->pc = 0x200038u;

label_200038:
    // 0x200038: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20003c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x200040: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x200040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x200044: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x200044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x200048: 0x131302b  sltu        $a2, $t1, $s1
    ctx->pc = 0x200048u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x20004c: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x20004cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x200050: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x200050u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x200054: 0x706a1818  mult1       $v1, $v1, $t2
    ctx->pc = 0x200054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200058: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x200058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x20005c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x20005cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x200060: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x200060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x200064: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x200064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x200068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20006c: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x20006cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x200070: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x200070u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x200074: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x200074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x200078: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x200078u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x20007c: 0x75c02  srl         $t3, $a3, 16
    ctx->pc = 0x20007cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x200080: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x200080u;
    {
        const bool branch_taken_0x200080 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x200084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200080u;
        // 0x200084: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200080) {
            ctx->pc = 0x200038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200038;
        }
    }
    ctx->pc = 0x200088u;
    // 0x200088: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x200088u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x20008c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20008Cu;
    {
        const bool branch_taken_0x20008c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20008Cu;
        // 0x200090: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20008c) {
            ctx->pc = 0x20009Cu;
            return;
        }
    }
    ctx->pc = 0x200094u;
}
