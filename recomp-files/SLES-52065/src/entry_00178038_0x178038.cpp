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

// Function: entry_00178038
// Address: 0x178038 - 0x17805c
void entry_00178038_0x178038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178038_0x178038");
#endif

    ctx->pc = 0x178038u;

    // 0x178038: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x178038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17803c: 0x2442f670  addiu       $v0, $v0, -0x990
    ctx->pc = 0x17803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
    // 0x178040: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x178040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178044: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x178044u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178048: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178048u;
    {
        const bool branch_taken_0x178048 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178048u;
        // 0x17804c: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178048) {
            ctx->pc = 0x17805Cu;
            return;
        }
    }
    ctx->pc = 0x178050u;
    // 0x178050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178054: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178054u;
    {
        const bool branch_taken_0x178054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178054u;
        // 0x178058: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178054) {
            ctx->pc = 0x178068u;
            return;
        }
    }
    ctx->pc = 0x17805Cu;
}
