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

// Function: entry_001473bc
// Address: 0x1473bc - 0x14745c
void entry_001473bc_0x1473bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001473bc_0x1473bc");
#endif

    ctx->pc = 0x1473bcu;

label_1473bc:
    // 0x1473bc: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x1473bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1473c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1473c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1473c4: 0x82282b  sltu        $a1, $a0, $v0
    ctx->pc = 0x1473c4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1473c8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1473c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1473cc: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x1473ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x1473d0: 0x8cc80034  lw          $t0, 0x34($a2)
    ctx->pc = 0x1473d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1473d4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1473d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1473d8: 0x8cc603cc  lw          $a2, 0x3CC($a2)
    ctx->pc = 0x1473d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 972)));
    // 0x1473dc: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x1473dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1473e0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1473e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1473e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1473e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1473e8: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x1473e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1473ec: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x1473ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1473f0: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x1473f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1473f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1473f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1473f8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1473f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1473fc: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x1473fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x147400: 0x8cc603cc  lw          $a2, 0x3CC($a2)
    ctx->pc = 0x147400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 972)));
    // 0x147404: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x147404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x147408: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x147408u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x14740c: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x14740cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147410: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x147410u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x147414: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x147414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x147418: 0x8cc603cc  lw          $a2, 0x3CC($a2)
    ctx->pc = 0x147418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 972)));
    // 0x14741c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x14741cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x147420: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x147420u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x147424: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x147424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147428: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x147428u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14742c: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x14742cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x147430: 0x8cc603cc  lw          $a2, 0x3CC($a2)
    ctx->pc = 0x147430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 972)));
    // 0x147434: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x147434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x147438: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x147438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x14743c: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x14743cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147440: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x147440u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x147444: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x147444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x147448: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x147448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x14744c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x14744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x147450: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x147450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x147454: 0x14a0ffd9  bnez        $a1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x147454u;
    {
        const bool branch_taken_0x147454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x147458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147454u;
        // 0x147458: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147454) {
            ctx->pc = 0x1473BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1473bc;
        }
    }
    ctx->pc = 0x14745Cu;
}
