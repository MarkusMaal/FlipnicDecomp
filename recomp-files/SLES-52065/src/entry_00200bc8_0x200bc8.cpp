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

// Function: entry_00200bc8
// Address: 0x200bc8 - 0x200c08
void entry_00200bc8_0x200bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200bc8_0x200bc8");
#endif

    ctx->pc = 0x200bc8u;

    // 0x200bc8: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x200bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x200bcc: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x200BCCu;
    {
        const bool branch_taken_0x200bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BCCu;
        // 0x200bd0: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bcc) {
            ctx->pc = 0x201004u;
            return;
        }
    }
    ctx->pc = 0x200BD4u;
    // 0x200bd4: 0x2b33821  addu        $a3, $s5, $s3
    ctx->pc = 0x200bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x200bd8: 0x2449d9c8  addiu       $t1, $v0, -0x2638
    ctx->pc = 0x200bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957512));
    // 0x200bdc: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x200bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x200be0: 0x10e80009  beq         $a3, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x200BE0u;
    {
        const bool branch_taken_0x200be0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        ctx->pc = 0x200BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BE0u;
        // 0x200be4: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200be0) {
            ctx->pc = 0x200C08u;
            return;
        }
    }
    ctx->pc = 0x200BE8u;
    // 0x200be8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200bec: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x200becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x200bf0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x200bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x200bf4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x200bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x200bf8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x200bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x200bfc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x200bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x200c00: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x200C00u;
    {
        const bool branch_taken_0x200c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200c00) {
            ctx->pc = 0x200C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C00u;
            // 0x200c04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200C8Cu;
            return;
        }
    }
    ctx->pc = 0x200C08u;
}
