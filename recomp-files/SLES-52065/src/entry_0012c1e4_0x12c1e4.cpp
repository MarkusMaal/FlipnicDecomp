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

// Function: entry_0012c1e4
// Address: 0x12c1e4 - 0x12c220
void entry_0012c1e4_0x12c1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c1e4_0x12c1e4");
#endif

    ctx->pc = 0x12c1e4u;

    // 0x12c1e4: 0x9202004b  lbu         $v0, 0x4B($s0)
    ctx->pc = 0x12c1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x12c1e8: 0x28410058  slti        $at, $v0, 0x58
    ctx->pc = 0x12c1e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)88) ? 1 : 0);
    // 0x12c1ec: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x12C1ECu;
    {
        const bool branch_taken_0x12c1ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1ECu;
        // 0x12c1f0: 0x284100a9  slti        $at, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)169) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1ec) {
            ctx->pc = 0x12C224u;
            return;
        }
    }
    ctx->pc = 0x12C1F4u;
    // 0x12c1f4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x12C1F4u;
    {
        const bool branch_taken_0x12c1f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c1f4) {
            ctx->pc = 0x12C224u;
            return;
        }
    }
    ctx->pc = 0x12C1FCu;
    // 0x12c1fc: 0x9202004a  lbu         $v0, 0x4A($s0)
    ctx->pc = 0x12c1fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x12c200: 0x28410058  slti        $at, $v0, 0x58
    ctx->pc = 0x12c200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)88) ? 1 : 0);
    // 0x12c204: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C204u;
    {
        const bool branch_taken_0x12c204 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C204u;
        // 0x12c208: 0x284100a9  slti        $at, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)169) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c204) {
            ctx->pc = 0x12C224u;
            return;
        }
    }
    ctx->pc = 0x12C20Cu;
    // 0x12c20c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C20Cu;
    {
        const bool branch_taken_0x12c20c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C20Cu;
        // 0x12c210: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c20c) {
            ctx->pc = 0x12C224u;
            return;
        }
    }
    ctx->pc = 0x12C214u;
    // 0x12c214: 0xa202004a  sb          $v0, 0x4A($s0)
    ctx->pc = 0x12c214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C218u;
    {
        const bool branch_taken_0x12c218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C218u;
        // 0x12c21c: 0xa202004b  sb          $v0, 0x4B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c218) {
            ctx->pc = 0x12C224u;
            return;
        }
    }
    ctx->pc = 0x12C220u;
}
