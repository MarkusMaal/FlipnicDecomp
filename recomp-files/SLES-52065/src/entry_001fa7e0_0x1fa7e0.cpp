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

// Function: entry_001fa7e0
// Address: 0x1fa7e0 - 0x1fa81c
void entry_001fa7e0_0x1fa7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa7e0_0x1fa7e0");
#endif

    ctx->pc = 0x1fa7e0u;

label_1fa7e0:
    // 0x1fa7e0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x1fa7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fa7e4: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x1fa7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1fa7e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1fa7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fa7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa7f0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1fa7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1fa7f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1fa7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fa7f8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1fa7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa7fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fa7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fa800: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1fa800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa804: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x1fa804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fa808: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fa808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fa80c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FA80Cu;
    {
        const bool branch_taken_0x1fa80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA80Cu;
        // 0x1fa810: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa80c) {
            ctx->pc = 0x1FA7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa7e0;
        }
    }
    ctx->pc = 0x1FA814u;
    // 0x1fa814: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA814u;
    {
        const bool branch_taken_0x1fa814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA814u;
        // 0x1fa818: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa814) {
            ctx->pc = 0x1FA828u;
            return;
        }
    }
    ctx->pc = 0x1FA81Cu;
}
