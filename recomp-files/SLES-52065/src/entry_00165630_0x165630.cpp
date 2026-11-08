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

// Function: entry_00165630
// Address: 0x165630 - 0x165664
void entry_00165630_0x165630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165630_0x165630");
#endif

    ctx->pc = 0x165630u;

    // 0x165630: 0x18600062  blez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x165630u;
    {
        const bool branch_taken_0x165630 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x165630) {
            ctx->pc = 0x1657BCu;
            return;
        }
    }
    ctx->pc = 0x165638u;
    // 0x165638: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x165638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x16563c: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x16563cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x165640: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x165640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x165644: 0x2472821  addu        $a1, $s2, $a3
    ctx->pc = 0x165644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x165648: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x165648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16564c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x165650: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x165650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x165654: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x165654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x165658: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x165658u;
    {
        const bool branch_taken_0x165658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165658u;
        // 0x16565c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165658) {
            ctx->pc = 0x1657C0u;
            return;
        }
    }
    ctx->pc = 0x165660u;
    // 0x165660: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x165660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    ctx->pc = 0x165664u;
}
