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

// Function: entry_0020331c
// Address: 0x20331c - 0x203338
void entry_0020331c_0x20331c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020331c_0x20331c");
#endif

    ctx->pc = 0x20331cu;

    // 0x20331c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x20331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x203320: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x203320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203324: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x203324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x203328: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203328u;
    {
        const bool branch_taken_0x203328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203328u;
        // 0x20332c: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203328) {
            ctx->pc = 0x203338u;
            return;
        }
    }
    ctx->pc = 0x203330u;
    // 0x203330: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x203330u;
    {
        const bool branch_taken_0x203330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203330u;
        // 0x203334: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203330) {
            ctx->pc = 0x2032D0u;
            return;
        }
    }
    ctx->pc = 0x203338u;
}
