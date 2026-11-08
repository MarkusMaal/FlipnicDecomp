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

// Function: entry_00141360
// Address: 0x141360 - 0x141394
void entry_00141360_0x141360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141360_0x141360");
#endif

    ctx->pc = 0x141360u;

    // 0x141360: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x141360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x141364: 0x8fa601d4  lw          $a2, 0x1D4($sp)
    ctx->pc = 0x141364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x141368: 0x14e6ffda  bne         $a3, $a2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x141368u;
    {
        const bool branch_taken_0x141368 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x141368) {
            ctx->pc = 0x1412D4u;
            return;
        }
    }
    ctx->pc = 0x141370u;
    // 0x141370: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x141370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x141374: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x141374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x141378: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x141378u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14137c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x14137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141380: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x141380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141384: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x141384u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x141388: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x141388u;
    {
        const bool branch_taken_0x141388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141388u;
        // 0x14138c: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141388) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x141390u;
    // 0x141390: 0x27a701e8  addiu       $a3, $sp, 0x1E8
    ctx->pc = 0x141390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    ctx->pc = 0x141394u;
}
