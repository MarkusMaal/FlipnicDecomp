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

// Function: entry_00164f84
// Address: 0x164f84 - 0x164fb8
void entry_00164f84_0x164f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164f84_0x164f84");
#endif

    ctx->pc = 0x164f84u;

    // 0x164f84: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x164f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x164f88: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x164f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x164f8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164f90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164f94: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x164F94u;
    {
        const bool branch_taken_0x164f94 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x164F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F94u;
        // 0x164f98: 0xc4440000  lwc1        $f4, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f94) {
            ctx->pc = 0x164FB8u;
            return;
        }
    }
    ctx->pc = 0x164F9Cu;
    // 0x164f9c: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x164f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x164fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x164fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164fa8: 0x0  nop
    ctx->pc = 0x164fa8u;
    // NOP
    // 0x164fac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x164facu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x164fb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164FB0u;
    {
        const bool branch_taken_0x164fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FB0u;
        // 0x164fb4: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fb0) {
            ctx->pc = 0x164FC0u;
            return;
        }
    }
    ctx->pc = 0x164FB8u;
}
