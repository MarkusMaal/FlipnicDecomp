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

// Function: entry_00164630
// Address: 0x164630 - 0x164644
void entry_00164630_0x164630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164630_0x164630");
#endif

    ctx->pc = 0x164630u;

    // 0x164630: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x164634: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x164634u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164638: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x164638u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x16463c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x16463Cu;
    {
        const bool branch_taken_0x16463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16463Cu;
        // 0x164640: 0xe62d0280  swc1        $f13, 0x280($s1) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16463c) {
            ctx->pc = 0x164900u;
            return;
        }
    }
    ctx->pc = 0x164644u;
}
