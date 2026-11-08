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

// Function: entry_0018e54c
// Address: 0x18e54c - 0x18e668
void entry_0018e54c_0x18e54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e54c_0x18e54c");
#endif

    switch (ctx->pc) {
        case 0x18e558u: goto label_18e558;
        case 0x18e564u: goto label_18e564;
        case 0x18e5c0u: goto label_18e5c0;
        case 0x18e5d8u: goto label_18e5d8;
        case 0x18e60cu: goto label_18e60c;
        case 0x18e614u: goto label_18e614;
        default: break;
    }

    ctx->pc = 0x18e54cu;

    // 0x18e54c: 0x8e500484  lw          $s0, 0x484($s2)
    ctx->pc = 0x18e54cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
    // 0x18e550: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x18E550u;
    SET_GPR_U32(ctx, 31, 0x18E558u);
    ctx->pc = 0x18E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E550u;
    // 0x18e554: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x18E550u, 0x18E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E558u;
label_18e558:
    // 0x18e558: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18e55c: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x18E55Cu;
    SET_GPR_U32(ctx, 31, 0x18E564u);
    ctx->pc = 0x18E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E55Cu;
    // 0x18e560: 0x264505c0  addiu       $a1, $s2, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x18E55Cu, 0x18E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E564u;
label_18e564:
    // 0x18e564: 0x8e472724  lw          $a3, 0x2724($s2)
    ctx->pc = 0x18e564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
    // 0x18e568: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x18e568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18e56c: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x18e56cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18e570: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18e570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18e574: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x18e574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e578: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18e578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18e57c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x18e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18e580: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x18e580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18e584: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x18e584u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18e588: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x18e588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18e58c: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x18e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x18e590: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x18e590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e594: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x18e594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18e598: 0x8e432724  lw          $v1, 0x2724($s2)
    ctx->pc = 0x18e598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
    // 0x18e59c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18e5a0: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x18e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e5a4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x18e5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x18e5a8: 0x8e432724  lw          $v1, 0x2724($s2)
    ctx->pc = 0x18e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
    // 0x18e5ac: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18e5b0: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x18e5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e5b4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18e5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18e5b8: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x18E5B8u;
    SET_GPR_U32(ctx, 31, 0x18E5C0u);
    ctx->pc = 0x18E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5B8u;
    // 0x18e5bc: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x18E5B8u, 0x18E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5C0u;
label_18e5c0:
    // 0x18e5c0: 0x8e422724  lw          $v0, 0x2724($s2)
    ctx->pc = 0x18e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
    // 0x18e5c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18e5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18e5cc: 0xc44c006c  lwc1        $f12, 0x6C($v0)
    ctx->pc = 0x18e5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18e5d0: 0xc0630d4  jal         func_18C350
    ctx->pc = 0x18E5D0u;
    SET_GPR_U32(ctx, 31, 0x18E5D8u);
    ctx->pc = 0x18E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5D0u;
    // 0x18e5d4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C350u, 0x18E5D0u, 0x18E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5D8u;
label_18e5d8:
    // 0x18e5d8: 0x8e432724  lw          $v1, 0x2724($s2)
    ctx->pc = 0x18e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
    // 0x18e5dc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x18e5e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18e5e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18e5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e5ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18e5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18e5f0: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x18e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18e5f4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x18e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e5f8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x18e5f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18e5fc: 0x0  nop
    ctx->pc = 0x18e5fcu;
    // NOP
    // 0x18e600: 0x0  nop
    ctx->pc = 0x18e600u;
    // NOP
    // 0x18e604: 0xc0631cc  jal         func_18C730
    ctx->pc = 0x18E604u;
    SET_GPR_U32(ctx, 31, 0x18E60Cu);
    ctx->pc = 0x18C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C730u, 0x18E604u, 0x18E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E60Cu;
label_18e60c:
    // 0x18e60c: 0xc063070  jal         func_18C1C0
    ctx->pc = 0x18E60Cu;
    SET_GPR_U32(ctx, 31, 0x18E614u);
    ctx->pc = 0x18E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E60Cu;
    // 0x18e610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C1C0u, 0x18E60Cu, 0x18E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E614u;
label_18e614:
    // 0x18e614: 0x8e420478  lw          $v0, 0x478($s2)
    ctx->pc = 0x18e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1144)));
    // 0x18e618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18e61c: 0xae420478  sw          $v0, 0x478($s2)
    ctx->pc = 0x18e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1144), GPR_U32(ctx, 2));
    // 0x18e620: 0x8e430484  lw          $v1, 0x484($s2)
    ctx->pc = 0x18e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
    // 0x18e624: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x18e624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e628: 0x8e442724  lw          $a0, 0x2724($s2)
    ctx->pc = 0x18e628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
    // 0x18e62c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18e630: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18e630u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e634: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e638: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e63c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18e640: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e644: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x18e644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e648: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18e648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18e64c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18e64cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18e650: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18e654: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18e654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18e658: 0x0  nop
    ctx->pc = 0x18e658u;
    // NOP
    // 0x18e65c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E65Cu;
    {
        const bool branch_taken_0x18e65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e65c) {
            ctx->pc = 0x18E668u;
            return;
        }
    }
    ctx->pc = 0x18E664u;
    // 0x18e664: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x18e668u;
}
