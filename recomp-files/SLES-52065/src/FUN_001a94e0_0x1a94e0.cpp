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

// Function: FUN_001a94e0
// Address: 0x1a94e0 - 0x1a96d4
void FUN_001a94e0_0x1a94e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a94e0_0x1a94e0");
#endif

    switch (ctx->pc) {
        case 0x1a9518u: goto label_1a9518;
        case 0x1a952cu: goto label_1a952c;
        case 0x1a9550u: goto label_1a9550;
        case 0x1a9574u: goto label_1a9574;
        case 0x1a958cu: goto label_1a958c;
        case 0x1a95acu: goto label_1a95ac;
        case 0x1a95e0u: goto label_1a95e0;
        case 0x1a96a0u: goto label_1a96a0;
        case 0x1a96b0u: goto label_1a96b0;
        default: break;
    }

    ctx->pc = 0x1a94e0u;

    // 0x1a94e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a94e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a94e4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a94e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a94e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a94e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a94ec: 0x24a52c80  addiu       $a1, $a1, 0x2C80
    ctx->pc = 0x1a94ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11392));
    // 0x1a94f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a94f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a94f4: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x1a94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1a94f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a94f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a94fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a94fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9500: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a9500u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212C80u));
    // 0x1a9504: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a9504u;
    { uint32_t bits = FAST_READ32(0x212C88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9508: 0x24040950  addiu       $a0, $zero, 0x950
    ctx->pc = 0x1a9508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2384));
    // 0x1a950c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a950cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a9510: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A9510u;
    SET_GPR_U32(ctx, 31, 0x1A9518u);
    ctx->pc = 0x1A9514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9510u;
    // 0x1a9514: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A9510u, 0x1A9518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9518u;
label_1a9518:
    // 0x1a9518: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1A9518u;
    {
        const bool branch_taken_0x1a9518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9518u;
        // 0x1a951c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9518) {
            ctx->pc = 0x1A9600u;
            goto label_1a9600;
        }
    }
    ctx->pc = 0x1A9520u;
    // 0x1a9520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9524: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A9524u;
    SET_GPR_U32(ctx, 31, 0x1A952Cu);
    ctx->pc = 0x1A9528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9524u;
    // 0x1a9528: 0xafb00048  sw          $s0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A9524u, 0x1A952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A952Cu;
label_1a952c:
    // 0x1a952c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9530: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a9530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a9534: 0x2463b5f0  addiu       $v1, $v1, -0x4A10
    ctx->pc = 0x1a9534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948336));
    // 0x1a9538: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1a9538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1a953c: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1a953cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1a9540: 0xac43031c  sw          $v1, 0x31C($v0)
    ctx->pc = 0x1a9540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 796), GPR_U32(ctx, 3));
    // 0x1a9544: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a9544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9548: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1A9548u;
    SET_GPR_U32(ctx, 31, 0x1A9550u);
    ctx->pc = 0x1A954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9548u;
    // 0x1a954c: 0x244406d0  addiu       $a0, $v0, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1A9548u, 0x1A9550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9550u;
label_1a9550:
    // 0x1a9550: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a9550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9554: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1a9554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1a9558: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a9558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a955c: 0x24a59750  addiu       $a1, $a1, -0x68B0
    ctx->pc = 0x1a955cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940496));
    // 0x1a9560: 0x24c66dd0  addiu       $a2, $a2, 0x6DD0
    ctx->pc = 0x1a9560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28112));
    // 0x1a9564: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1a9564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1a9568: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1a9568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a956c: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x1A956Cu;
    SET_GPR_U32(ctx, 31, 0x1A9574u);
    ctx->pc = 0x1A9570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A956Cu;
    // 0x1a9570: 0x24440770  addiu       $a0, $v0, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x1A956Cu, 0x1A9574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9574u;
label_1a9574:
    // 0x1a9574: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a9574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9578: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x1a9578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
    // 0x1a957c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1a957cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1a9580: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1a9580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a9584: 0xc0667ac  jal         func_199EB0
    ctx->pc = 0x1A9584u;
    SET_GPR_U32(ctx, 31, 0x1A958Cu);
    ctx->pc = 0x1A9588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9584u;
    // 0x1a9588: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EB0u, 0x1A9584u, 0x1A958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A958Cu;
label_1a958c:
    // 0x1a958c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a958cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a9590: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1a9590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1a9594: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x1a9594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x1a9598: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1a9598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1a959c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a959cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a95a0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1a95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a95a4: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1A95A4u;
    SET_GPR_U32(ctx, 31, 0x1A95ACu);
    ctx->pc = 0x1A95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A95A4u;
    // 0x1a95a8: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1A95A4u, 0x1A95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A95ACu;
label_1a95ac:
    // 0x1a95ac: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1a95acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a95b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a95b4: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x1a95b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x1a95b8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1a95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a95bc: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x1a95bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x1a95c0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1a95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a95c4: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x1a95c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x1a95c8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1a95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a95cc: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1a95ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x1a95d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a95d4: 0x24500930  addiu       $s0, $v0, 0x930
    ctx->pc = 0x1a95d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    // 0x1a95d8: 0xc045c98  jal         func_117260
    ctx->pc = 0x1A95D8u;
    SET_GPR_U32(ctx, 31, 0x1A95E0u);
    ctx->pc = 0x1A95DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A95D8u;
    // 0x1a95dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1A95D8u, 0x1A95E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A95E0u;
label_1a95e0:
    // 0x1a95e0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a95e4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a95e8: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1a95e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1a95ec: 0x2442b590  addiu       $v0, $v0, -0x4A70
    ctx->pc = 0x1a95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948240));
    // 0x1a95f0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1a95f4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a95f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a95f8: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1a95f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a95fc: 0x0  nop
    ctx->pc = 0x1a95fcu;
    // NOP
label_1a9600:
    // 0x1a9600: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A9600u;
    {
        const bool branch_taken_0x1a9600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9600) {
            ctx->pc = 0x1A96B8u;
            goto label_1a96b8;
        }
    }
    ctx->pc = 0x1A9608u;
    // 0x1a9608: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a9608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a960c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a960cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a9610: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a9610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9614: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x1a9614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1a9618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a961c: 0x24a5e060  addiu       $a1, $a1, -0x1FA0
    ctx->pc = 0x1a961cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959200));
    // 0x1a9620: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9624: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a9624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a9628: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a9628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a962c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a9630: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a9630u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9634: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a9634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a9638: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a9638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a963c: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a963cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a9640: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a9640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a9644: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a9644u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a9648: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a9648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a964c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a964cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a9650: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a9650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a9654: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a9654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9658: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a9658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a965c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a965cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a9660: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a9660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a9664: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a9664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a9668: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a9668u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a966c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a966cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a9670: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a9670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a9674: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a9674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a9678: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a9678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a967c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9680: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a9680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9684: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a9684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a9688: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a9688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a968c: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a968cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a9690: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a9690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a9694: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a9694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a9698: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A9698u;
    SET_GPR_U32(ctx, 31, 0x1A96A0u);
    ctx->pc = 0x1A969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9698u;
    // 0x1a969c: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A9698u, 0x1A96A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A96A0u;
label_1a96a0:
    // 0x1a96a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a96a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a96a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96a8: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A96A8u;
    SET_GPR_U32(ctx, 31, 0x1A96B0u);
    ctx->pc = 0x1A96ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A96A8u;
    // 0x1a96ac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A96A8u, 0x1A96B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A96B0u;
label_1a96b0:
    // 0x1a96b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A96B0u;
    {
        const bool branch_taken_0x1a96b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96B0u;
        // 0x1a96b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a96b0) {
            ctx->pc = 0x1A96C0u;
            goto label_1a96c0;
        }
    }
    ctx->pc = 0x1A96B8u;
label_1a96b8:
    // 0x1a96b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a96b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a96bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a96c0:
    // 0x1a96c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a96c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a96c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a96c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a96c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a96c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a96cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A96CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96CCu;
        // 0x1a96d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A96CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A96D4u;
}
