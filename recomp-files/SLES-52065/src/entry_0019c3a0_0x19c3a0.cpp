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

// Function: entry_0019c3a0
// Address: 0x19c3a0 - 0x19c494
void entry_0019c3a0_0x19c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c3a0_0x19c3a0");
#endif

    switch (ctx->pc) {
        case 0x19c3bcu: goto label_19c3bc;
        case 0x19c3f0u: goto label_19c3f0;
        case 0x19c400u: goto label_19c400;
        case 0x19c40cu: goto label_19c40c;
        case 0x19c41cu: goto label_19c41c;
        case 0x19c434u: goto label_19c434;
        case 0x19c448u: goto label_19c448;
        default: break;
    }

    ctx->pc = 0x19c3a0u;

    // 0x19c3a0: 0x8e230bd0  lw          $v1, 0xBD0($s1)
    ctx->pc = 0x19c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
    // 0x19c3a4: 0x92220938  lbu         $v0, 0x938($s1)
    ctx->pc = 0x19c3a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2360)));
    // 0x19c3a8: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x19C3A8u;
    {
        const bool branch_taken_0x19c3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3A8u;
        // 0x19c3ac: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3a8) {
            ctx->pc = 0x19C4C0u;
            return;
        }
    }
    ctx->pc = 0x19C3B0u;
    // 0x19c3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c3b4: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x19C3B4u;
    SET_GPR_U32(ctx, 31, 0x19C3BCu);
    ctx->pc = 0x19C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3B4u;
    // 0x19c3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x19C3B4u, 0x19C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3BCu;
label_19c3bc:
    // 0x19c3bc: 0x8e260bd0  lw          $a2, 0xBD0($s1)
    ctx->pc = 0x19c3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
    // 0x19c3c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c3c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c3c8: 0x3c0543c8  lui         $a1, 0x43C8
    ctx->pc = 0x19c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17352 << 16));
    // 0x19c3cc: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x19c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x19c3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c3d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19c3d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x19c3d8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x19c3d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x19c3dc: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x19c3dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x19c3e0: 0xacc000b8  sw          $zero, 0xB8($a2)
    ctx->pc = 0x19c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 0));
    // 0x19c3e4: 0xacc500b0  sw          $a1, 0xB0($a2)
    ctx->pc = 0x19c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 5));
    // 0x19c3e8: 0xc062860  jal         func_18A180
    ctx->pc = 0x19C3E8u;
    SET_GPR_U32(ctx, 31, 0x19C3F0u);
    ctx->pc = 0x19C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3E8u;
    // 0x19c3ec: 0xacc300b4  sw          $v1, 0xB4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x19C3E8u, 0x19C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3F0u;
label_19c3f0:
    // 0x19c3f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c3f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c3f8: 0xc062858  jal         func_18A160
    ctx->pc = 0x19C3F8u;
    SET_GPR_U32(ctx, 31, 0x19C400u);
    ctx->pc = 0x19C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3F8u;
    // 0x19c3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x19C3F8u, 0x19C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C400u;
label_19c400:
    // 0x19c400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c404: 0xc062200  jal         func_188800
    ctx->pc = 0x19C404u;
    SET_GPR_U32(ctx, 31, 0x19C40Cu);
    ctx->pc = 0x19C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C404u;
    // 0x19c408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x19C404u, 0x19C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C40Cu;
label_19c40c:
    // 0x19c40c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19c40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c414: 0xc06223c  jal         func_1888F0
    ctx->pc = 0x19C414u;
    SET_GPR_U32(ctx, 31, 0x19C41Cu);
    ctx->pc = 0x19C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C414u;
    // 0x19c418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x19C414u, 0x19C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C41Cu;
label_19c41c:
    // 0x19c41c: 0x8e260914  lw          $a2, 0x914($s1)
    ctx->pc = 0x19c41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2324)));
    // 0x19c420: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19c420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19c424: 0x8e270918  lw          $a3, 0x918($s1)
    ctx->pc = 0x19c424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
    // 0x19c428: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x19c428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x19c42c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x19C42Cu;
    SET_GPR_U32(ctx, 31, 0x19C434u);
    ctx->pc = 0x19C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C42Cu;
    // 0x19c430: 0x24a50230  addiu       $a1, $a1, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x19C42Cu, 0x19C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C434u;
label_19c434:
    // 0x19c434: 0x8e220bd0  lw          $v0, 0xBD0($s1)
    ctx->pc = 0x19c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
    // 0x19c438: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x19c438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x19c43c: 0xa04001bb  sb          $zero, 0x1BB($v0)
    ctx->pc = 0x19c43cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c440: 0xc080702  jal         func_201C08
    ctx->pc = 0x19C440u;
    SET_GPR_U32(ctx, 31, 0x19C448u);
    ctx->pc = 0x19C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C440u;
    // 0x19c444: 0x244400bc  addiu       $a0, $v0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x19C440u, 0x19C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C448u;
label_19c448:
    // 0x19c448: 0x8e220bd0  lw          $v0, 0xBD0($s1)
    ctx->pc = 0x19c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
    // 0x19c44c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c450: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19c450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c454: 0x8e22090c  lw          $v0, 0x90C($s1)
    ctx->pc = 0x19c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2316)));
    // 0x19c458: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19C458u;
    {
        const bool branch_taken_0x19c458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C458u;
        // 0x19c45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c458) {
            ctx->pc = 0x19C4C8u;
            return;
        }
    }
    ctx->pc = 0x19C460u;
    // 0x19c460: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x19c460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19c464: 0xae23090c  sw          $v1, 0x90C($s1)
    ctx->pc = 0x19c464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2316), GPR_U32(ctx, 3));
    // 0x19c468: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x19c468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x19c46c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19c46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c474: 0x0  nop
    ctx->pc = 0x19c474u;
    // NOP
    // 0x19c478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19c47c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c47cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19c480: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19c480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19c484: 0x0  nop
    ctx->pc = 0x19c484u;
    // NOP
    // 0x19c488: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C488u;
    {
        const bool branch_taken_0x19c488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c488) {
            ctx->pc = 0x19C494u;
            return;
        }
    }
    ctx->pc = 0x19C490u;
    // 0x19c490: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x19c494u;
}
