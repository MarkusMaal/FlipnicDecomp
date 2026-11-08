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

// Function: caseD_7f
// Address: 0x1d8948 - 0x1d8978
void caseD_7f_0x1d8948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7f_0x1d8948");
#endif

    ctx->pc = 0x1d8948u;

    // 0x1d8948: 0x8c82054c  lw          $v0, 0x54C($a0)
    ctx->pc = 0x1d8948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d894c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8950: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1d8950u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1d8954: 0x90470006  lbu         $a3, 0x6($v0)
    ctx->pc = 0x1d8954u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d8958: 0x90520004  lbu         $s2, 0x4($v0)
    ctx->pc = 0x1d8958u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d895c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D895Cu;
    {
        const bool branch_taken_0x1d895c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D895Cu;
        // 0x1d8960: 0x90460005  lbu         $a2, 0x5($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d895c) {
            ctx->pc = 0x1D8978u;
            return;
        }
    }
    ctx->pc = 0x1D8964u;
    // 0x1d8964: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8968: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8968u;
    {
        const bool branch_taken_0x1d8968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8968u;
        // 0x1d896c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8968) {
            ctx->pc = 0x1D89C0u;
            return;
        }
    }
    ctx->pc = 0x1D8970u;
    // 0x1d8970: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1D8970u;
    {
        const bool branch_taken_0x1d8970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8970u;
        // 0x1d8974: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8970) {
            ctx->pc = 0x1D8A8Cu;
            return;
        }
    }
    ctx->pc = 0x1D8978u;
}
