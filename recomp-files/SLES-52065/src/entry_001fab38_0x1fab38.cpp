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

// Function: entry_001fab38
// Address: 0x1fab38 - 0x1fab74
void entry_001fab38_0x1fab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fab38_0x1fab38");
#endif

    ctx->pc = 0x1fab38u;

label_1fab38:
    // 0x1fab38: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x1fab38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1fab3c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x1fab3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1fab40: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1fab40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fab44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fab44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fab48: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1fab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1fab4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1fab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fab50: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1fab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fab54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fab54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fab58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1fab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fab5c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x1fab5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fab60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fab60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fab64: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FAB64u;
    {
        const bool branch_taken_0x1fab64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB64u;
        // 0x1fab68: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab64) {
            ctx->pc = 0x1FAB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fab38;
        }
    }
    ctx->pc = 0x1FAB6Cu;
    // 0x1fab6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAB6Cu;
    {
        const bool branch_taken_0x1fab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB6Cu;
        // 0x1fab70: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab6c) {
            ctx->pc = 0x1FAB80u;
            return;
        }
    }
    ctx->pc = 0x1FAB74u;
}
