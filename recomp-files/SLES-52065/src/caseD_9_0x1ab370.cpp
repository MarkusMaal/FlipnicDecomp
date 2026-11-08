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

// Function: caseD_9
// Address: 0x1ab370 - 0x1ab438
void caseD_9_0x1ab370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1ab370");
#endif

    switch (ctx->pc) {
        case 0x1ab37cu: goto label_1ab37c;
        case 0x1ab394u: goto label_1ab394;
        case 0x1ab3a4u: goto label_1ab3a4;
        case 0x1ab3c4u: goto label_1ab3c4;
        case 0x1ab3dcu: goto label_1ab3dc;
        default: break;
    }

    ctx->pc = 0x1ab370u;

    // 0x1ab370: 0x26840710  addiu       $a0, $s4, 0x710
    ctx->pc = 0x1ab370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
    // 0x1ab374: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1AB374u;
    SET_GPR_U32(ctx, 31, 0x1AB37Cu);
    ctx->pc = 0x1AB378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB374u;
    // 0x1ab378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1AB374u, 0x1AB37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB37Cu;
label_1ab37c:
    // 0x1ab37c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab380: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1ab380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1ab384: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ab384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ab388: 0x26840710  addiu       $a0, $s4, 0x710
    ctx->pc = 0x1ab388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
    // 0x1ab38c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1AB38Cu;
    SET_GPR_U32(ctx, 31, 0x1AB394u);
    ctx->pc = 0x1AB390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB38Cu;
    // 0x1ab390: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1AB38Cu, 0x1AB394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB394u;
label_1ab394:
    // 0x1ab394: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ab394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ab398: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ab398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab39c: 0xc062858  jal         func_18A160
    ctx->pc = 0x1AB39Cu;
    SET_GPR_U32(ctx, 31, 0x1AB3A4u);
    ctx->pc = 0x1AB3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB39Cu;
    // 0x1ab3a0: 0x26840710  addiu       $a0, $s4, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1AB39Cu, 0x1AB3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3A4u;
label_1ab3a4:
    // 0x1ab3a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab3a8: 0x26840710  addiu       $a0, $s4, 0x710
    ctx->pc = 0x1ab3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
    // 0x1ab3ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ab3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab3b0: 0x0  nop
    ctx->pc = 0x1ab3b0u;
    // NOP
    // 0x1ab3b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ab3b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1ab3b8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1ab3b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1ab3bc: 0xc062860  jal         func_18A180
    ctx->pc = 0x1AB3BCu;
    SET_GPR_U32(ctx, 31, 0x1AB3C4u);
    ctx->pc = 0x1AB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3BCu;
    // 0x1ab3c0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1AB3BCu, 0x1AB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3C4u;
label_1ab3c4:
    // 0x1ab3c4: 0x8e860670  lw          $a2, 0x670($s4)
    ctx->pc = 0x1ab3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1ab3c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ab3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ab3cc: 0x8e87069c  lw          $a3, 0x69C($s4)
    ctx->pc = 0x1ab3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
    // 0x1ab3d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ab3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ab3d4: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1AB3D4u;
    SET_GPR_U32(ctx, 31, 0x1AB3DCu);
    ctx->pc = 0x1AB3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3D4u;
    // 0x1ab3d8: 0x24a50920  addiu       $a1, $a1, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1AB3D4u, 0x1AB3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3DCu;
label_1ab3dc:
    // 0x1ab3dc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ab3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab3e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ab3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ab3e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ab3e8: 0x8e8306e0  lw          $v1, 0x6E0($s4)
    ctx->pc = 0x1ab3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1760)));
    // 0x1ab3ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ab3f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab3f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ab3f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ab3f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ab3f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ab3fc: 0x0  nop
    ctx->pc = 0x1ab3fcu;
    // NOP
    // 0x1ab400: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ab400u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ab404: 0x0  nop
    ctx->pc = 0x1ab404u;
    // NOP
    // 0x1ab408: 0x0  nop
    ctx->pc = 0x1ab408u;
    // NOP
    // 0x1ab40c: 0x1012  mflo        $v0
    ctx->pc = 0x1ab40cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ab410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ab410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ab414: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB414u;
    {
        const bool branch_taken_0x1ab414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB414u;
        // 0x1ab418: 0x26840710  addiu       $a0, $s4, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab414) {
            ctx->pc = 0x1AB438u;
            return;
        }
    }
    ctx->pc = 0x1AB41Cu;
    // 0x1ab41c: 0x8e8306d0  lw          $v1, 0x6D0($s4)
    ctx->pc = 0x1ab41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1744)));
    // 0x1ab420: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ab420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab424: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1ab424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ab428: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1ab428u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ab42c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ab42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ab430: 0xa04400b0  sb          $a0, 0xB0($v0)
    ctx->pc = 0x1ab430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ab434: 0x26840710  addiu       $a0, $s4, 0x710
    ctx->pc = 0x1ab434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
    ctx->pc = 0x1ab438u;
}
