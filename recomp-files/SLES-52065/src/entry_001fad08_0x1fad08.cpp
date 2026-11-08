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

// Function: entry_001fad08
// Address: 0x1fad08 - 0x1fad50
void entry_001fad08_0x1fad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fad08_0x1fad08");
#endif

    ctx->pc = 0x1fad08u;

label_1fad08:
    // 0x1fad08: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x1fad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1fad0c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1fad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1fad10: 0x25624cd0  addiu       $v0, $t3, 0x4CD0
    ctx->pc = 0x1fad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 19664));
    // 0x1fad14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fad14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fad18: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fad1c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1fad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1fad20: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1fad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fad24: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fad24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fad28: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1fad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fad2c: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x1fad2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1fad30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fad30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fad34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAD34u;
    {
        const bool branch_taken_0x1fad34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD34u;
        // 0x1fad38: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad34) {
            ctx->pc = 0x1FAD58u;
            return;
        }
    }
    ctx->pc = 0x1FAD3Cu;
    // 0x1fad3c: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x1fad3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1fad40: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FAD40u;
    {
        const bool branch_taken_0x1fad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD40u;
        // 0x1fad44: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad40) {
            ctx->pc = 0x1FAD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fad08;
        }
    }
    ctx->pc = 0x1FAD48u;
    // 0x1fad48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAD48u;
    {
        const bool branch_taken_0x1fad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD48u;
        // 0x1fad4c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad48) {
            ctx->pc = 0x1FAD60u;
            return;
        }
    }
    ctx->pc = 0x1FAD50u;
}
