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

// Function: entry_0021b5e8
// Address: 0x21b5e8 - 0x21b610
void entry_0021b5e8_0x21b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b5e8_0x21b5e8");
#endif

    ctx->pc = 0x21b5e8u;

    // 0x21b5e8: 0x8d896700  lw          $t1, 0x6700($t4)
    ctx->pc = 0x21b5e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
    // 0x21b5ec: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x21b5ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21b5f0: 0x25646740  addiu       $a0, $t3, 0x6740
    ctx->pc = 0x21b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
    // 0x21b5f4: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x21b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x21b5f8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x21b5f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5fc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x21b5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21b600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b604: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21B604u;
    {
        const bool branch_taken_0x21b604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B604u;
        // 0x21b608: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b604) {
            ctx->pc = 0x21B66Cu;
            return;
        }
    }
    ctx->pc = 0x21B60Cu;
    // 0x21b60c: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x21b60cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
    ctx->pc = 0x21b610u;
}
