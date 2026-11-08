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

// Function: entry_001a412c
// Address: 0x1a412c - 0x1a4190
void entry_001a412c_0x1a412c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a412c_0x1a412c");
#endif

    ctx->pc = 0x1a412cu;

    // 0x1a412c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1a412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a4130: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a4130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a4134: 0x1462007c  bne         $v1, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x1A4134u;
    {
        const bool branch_taken_0x1a4134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4134) {
            ctx->pc = 0x1A4328u;
            return;
        }
    }
    ctx->pc = 0x1A413Cu;
    // 0x1a413c: 0x92830004  lbu         $v1, 0x4($s4)
    ctx->pc = 0x1a413cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1a4140: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x1a4140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1a4144: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1A4144u;
    {
        const bool branch_taken_0x1a4144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4144) {
            ctx->pc = 0x1A4258u;
            return;
        }
    }
    ctx->pc = 0x1A414Cu;
    // 0x1a414c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1a414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a4150: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A4150u;
    {
        const bool branch_taken_0x1a4150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4150) {
            ctx->pc = 0x1A4214u;
            return;
        }
    }
    ctx->pc = 0x1A4158u;
    // 0x1a4158: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1a4158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1a415c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A415Cu;
    {
        const bool branch_taken_0x1a415c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a415c) {
            ctx->pc = 0x1A41BCu;
            return;
        }
    }
    ctx->pc = 0x1A4164u;
    // 0x1a4164: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x1a4164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1a4168: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A4168u;
    {
        const bool branch_taken_0x1a4168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4168) {
            ctx->pc = 0x1A41A0u;
            return;
        }
    }
    ctx->pc = 0x1A4170u;
    // 0x1a4170: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1a4170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1a4174: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4174u;
    {
        const bool branch_taken_0x1a4174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4174) {
            ctx->pc = 0x1A4198u;
            return;
        }
    }
    ctx->pc = 0x1A417Cu;
    // 0x1a417c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1a417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a4180: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4180u;
    {
        const bool branch_taken_0x1a4180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4180) {
            ctx->pc = 0x1A4190u;
            return;
        }
    }
    ctx->pc = 0x1A4188u;
    // 0x1a4188: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1A4188u;
    {
        const bool branch_taken_0x1a4188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4188) {
            ctx->pc = 0x1A42F4u;
            return;
        }
    }
    ctx->pc = 0x1A4190u;
}
