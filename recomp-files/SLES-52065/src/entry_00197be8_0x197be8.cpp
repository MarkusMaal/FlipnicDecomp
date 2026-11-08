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

// Function: entry_00197be8
// Address: 0x197be8 - 0x197c20
void entry_00197be8_0x197be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197be8_0x197be8");
#endif

    ctx->pc = 0x197be8u;

    // 0x197be8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x197bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197bf0: 0x8c852c00  lw          $a1, 0x2C00($a0)
    ctx->pc = 0x197bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11264)));
    // 0x197bf4: 0x14a30058  bne         $a1, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x197BF4u;
    {
        const bool branch_taken_0x197bf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x197BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BF4u;
        // 0x197bf8: 0x24862c00  addiu       $a2, $a0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bf4) {
            ctx->pc = 0x197D58u;
            return;
        }
    }
    ctx->pc = 0x197BFCu;
    // 0x197bfc: 0x8ea506ac  lw          $a1, 0x6AC($s5)
    ctx->pc = 0x197bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1708)));
    // 0x197c00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x197c00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c04: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x197c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x197c08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c0c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x197c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x197c10: 0xb53021  addu        $a2, $a1, $s5
    ctx->pc = 0x197c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x197c14: 0x8cc606c0  lw          $a2, 0x6C0($a2)
    ctx->pc = 0x197c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1728)));
    // 0x197c18: 0x24c8002c  addiu       $t0, $a2, 0x2C
    ctx->pc = 0x197c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
    // 0x197c1c: 0x1073021  addu        $a2, $t0, $a3
    ctx->pc = 0x197c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    ctx->pc = 0x197c20u;
}
