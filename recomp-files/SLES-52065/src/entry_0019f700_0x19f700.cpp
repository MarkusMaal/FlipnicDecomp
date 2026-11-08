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

// Function: entry_0019f700
// Address: 0x19f700 - 0x19f810
void entry_0019f700_0x19f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f700_0x19f700");
#endif

    switch (ctx->pc) {
        case 0x19f744u: goto label_19f744;
        case 0x19f774u: goto label_19f774;
        case 0x19f7e8u: goto label_19f7e8;
        default: break;
    }

    ctx->pc = 0x19f700u;

    // 0x19f700: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f704: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x19f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19f708: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x19f70c: 0x8c7228f0  lw          $s2, 0x28F0($v1)
    ctx->pc = 0x19f70cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10480)));
    // 0x19f710: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x19f710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f714: 0x8ce600a8  lw          $a2, 0xA8($a3)
    ctx->pc = 0x19f714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 168)));
    // 0x19f718: 0x8ce500a0  lw          $a1, 0xA0($a3)
    ctx->pc = 0x19f718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x19f71c: 0x8ce400b0  lw          $a0, 0xB0($a3)
    ctx->pc = 0x19f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x19f720: 0x8ce30180  lw          $v1, 0x180($a3)
    ctx->pc = 0x19f720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 384)));
    // 0x19f724: 0xe6b821  addu        $s7, $a3, $a2
    ctx->pc = 0x19f724u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x19f728: 0xe5b021  addu        $s6, $a3, $a1
    ctx->pc = 0x19f728u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x19f72c: 0xe4a821  addu        $s5, $a3, $a0
    ctx->pc = 0x19f72cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x19f730: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x19f730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x19f734: 0xe38021  addu        $s0, $a3, $v1
    ctx->pc = 0x19f734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x19f738: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x19f738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f73c: 0xc045c98  jal         func_117260
    ctx->pc = 0x19F73Cu;
    SET_GPR_U32(ctx, 31, 0x19F744u);
    ctx->pc = 0x19F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F73Cu;
    // 0x19f740: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x19F73Cu, 0x19F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F744u;
label_19f744:
    // 0x19f744: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19f744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19f748: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x19f748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x19f74c: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x19f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x19f750: 0x2463b400  addiu       $v1, $v1, -0x4C00
    ctx->pc = 0x19f750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947840));
    // 0x19f754: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x19f754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x19f758: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x19f758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x19f75c: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f760: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x19f760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x19f764: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x19f764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x19f768: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f76c: 0xc0621c0  jal         func_188700
    ctx->pc = 0x19F76Cu;
    SET_GPR_U32(ctx, 31, 0x19F774u);
    ctx->pc = 0x19F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F76Cu;
    // 0x19f770: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x19F76Cu, 0x19F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F774u;
label_19f774:
    // 0x19f774: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x19f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f778: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19f778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19f77c: 0xc4200730  lwc1        $f0, 0x730($at)
    ctx->pc = 0x19f77cu;
    { uint32_t bits = FAST_READ32(0x220730u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f780: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f788: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x19f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19f78c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19f78cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19f790: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19f790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19f794: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19f798: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x19f798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x19f79c: 0x0  nop
    ctx->pc = 0x19f79cu;
    // NOP
    // 0x19f7a0: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x19f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x19f7a4: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f7a8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x19f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x19f7ac: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f7b0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x19f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x19f7b4: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f7b8: 0xa043001c  sb          $v1, 0x1C($v0)
    ctx->pc = 0x19f7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x19f7bc: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f7c0: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x19f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
    // 0x19f7c4: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f7c8: 0xac550024  sw          $s5, 0x24($v0)
    ctx->pc = 0x19f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 21));
    // 0x19f7cc: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f7d0: 0xac560028  sw          $s6, 0x28($v0)
    ctx->pc = 0x19f7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 22));
    // 0x19f7d4: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f7d8: 0xac57002c  sw          $s7, 0x2C($v0)
    ctx->pc = 0x19f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 23));
    // 0x19f7dc: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x19f7e0: 0xc069e14  jal         func_1A7850
    ctx->pc = 0x19F7E0u;
    SET_GPR_U32(ctx, 31, 0x19F7E8u);
    ctx->pc = 0x19F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F7E0u;
    // 0x19f7e4: 0xac520030  sw          $s2, 0x30($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7850u, 0x19F7E0u, 0x19F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F7E8u;
label_19f7e8:
    // 0x19f7e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19F7E8u;
    {
        const bool branch_taken_0x19f7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7E8u;
        // 0x19f7ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7e8) {
            ctx->pc = 0x19F844u;
            return;
        }
    }
    ctx->pc = 0x19F7F0u;
    // 0x19f7f0: 0x8e840684  lw          $a0, 0x684($s4)
    ctx->pc = 0x19f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
    // 0x19f7f4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F7F4u;
    {
        const bool branch_taken_0x19f7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f7f4) {
            ctx->pc = 0x19F81Cu;
            return;
        }
    }
    ctx->pc = 0x19F7FCu;
    // 0x19f7fc: 0x8e820698  lw          $v0, 0x698($s4)
    ctx->pc = 0x19f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
    // 0x19f800: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F800u;
    {
        const bool branch_taken_0x19f800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f800) {
            ctx->pc = 0x19F810u;
            return;
        }
    }
    ctx->pc = 0x19F808u;
    // 0x19f808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F808u;
    {
        const bool branch_taken_0x19f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F808u;
        // 0x19f80c: 0xac800320  sw          $zero, 0x320($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f808) {
            ctx->pc = 0x19F81Cu;
            return;
        }
    }
    ctx->pc = 0x19F810u;
}
