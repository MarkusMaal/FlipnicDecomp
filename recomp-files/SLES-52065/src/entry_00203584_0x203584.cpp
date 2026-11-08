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

// Function: entry_00203584
// Address: 0x203584 - 0x2035a0
void entry_00203584_0x203584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203584_0x203584");
#endif

    ctx->pc = 0x203584u;

    // 0x203584: 0x2371021  addu        $v0, $s1, $s7
    ctx->pc = 0x203584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x203588: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x203588u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20358c: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x20358cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x203590: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203590u;
    {
        const bool branch_taken_0x203590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203590u;
        // 0x203594: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203590) {
            ctx->pc = 0x2035A0u;
            return;
        }
    }
    ctx->pc = 0x203598u;
    // 0x203598: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x203598u;
    {
        const bool branch_taken_0x203598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203598u;
        // 0x20359c: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203598) {
            ctx->pc = 0x203538u;
            return;
        }
    }
    ctx->pc = 0x2035A0u;
}
