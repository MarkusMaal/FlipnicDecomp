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

// Function: entry_0018de54
// Address: 0x18de54 - 0x18dff0
void entry_0018de54_0x18de54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de54_0x18de54");
#endif

    switch (ctx->pc) {
        case 0x18de78u: goto label_18de78;
        case 0x18de98u: goto label_18de98;
        case 0x18ded8u: goto label_18ded8;
        case 0x18df04u: goto label_18df04;
        case 0x18df10u: goto label_18df10;
        case 0x18df20u: goto label_18df20;
        case 0x18df2cu: goto label_18df2c;
        case 0x18df60u: goto label_18df60;
        default: break;
    }

    ctx->pc = 0x18de54u;

    // 0x18de54: 0xc62c0504  lwc1        $f12, 0x504($s1)
    ctx->pc = 0x18de54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18de58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18de58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18de5c: 0x0  nop
    ctx->pc = 0x18de5cu;
    // NOP
    // 0x18de60: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x18de60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18de64: 0x0  nop
    ctx->pc = 0x18de64u;
    // NOP
    // 0x18de68: 0x4500009b  bc1f        . + 4 + (0x9B << 2)
    ctx->pc = 0x18DE68u;
    {
        const bool branch_taken_0x18de68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18de68) {
            ctx->pc = 0x18E0D8u;
            return;
        }
    }
    ctx->pc = 0x18DE70u;
    // 0x18de70: 0xc082520  jal         func_209480
    ctx->pc = 0x18DE70u;
    SET_GPR_U32(ctx, 31, 0x18DE78u);
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x18DE70u, 0x18DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE78u;
label_18de78:
    // 0x18de78: 0x3c04bfe9  lui         $a0, 0xBFE9
    ctx->pc = 0x18de78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49129 << 16));
    // 0x18de7c: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x18de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
    // 0x18de80: 0x348421fb  ori         $a0, $a0, 0x21FB
    ctx->pc = 0x18de80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8699);
    // 0x18de84: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x18de84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
    // 0x18de88: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x18de88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18de8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18de8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de90: 0xc0400fc  jal         func_1003F0
    ctx->pc = 0x18DE90u;
    SET_GPR_U32(ctx, 31, 0x18DE98u);
    ctx->pc = 0x18DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE90u;
    // 0x18de94: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003F0u, 0x18DE90u, 0x18DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE98u;
label_18de98:
    // 0x18de98: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x18DE98u;
    {
        const bool branch_taken_0x18de98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de98) {
            ctx->pc = 0x18E0D8u;
            return;
        }
    }
    ctx->pc = 0x18DEA0u;
    // 0x18dea0: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18dea4: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18dea8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18deac: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18deacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18deb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18deb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18deb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18debc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18dec0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x18dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x18dec4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x18DEC4u;
    {
        const bool branch_taken_0x18dec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEC4u;
        // 0x18dec8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dec4) {
            ctx->pc = 0x18DFF0u;
            return;
        }
    }
    ctx->pc = 0x18DECCu;
    // 0x18decc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ded0: 0xc05f878  jal         func_17E1E0
    ctx->pc = 0x18DED0u;
    SET_GPR_U32(ctx, 31, 0x18DED8u);
    ctx->pc = 0x18DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DED0u;
    // 0x18ded4: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18DED0u, 0x18DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DED8u;
label_18ded8:
    // 0x18ded8: 0x8e260450  lw          $a2, 0x450($s1)
    ctx->pc = 0x18ded8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18dedc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dee0: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18dee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18dee4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18dee8: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x18dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18deec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18deecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18def0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18def0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18def4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18def4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18def8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18defc: 0xc0532f4  jal         func_14CBD0
    ctx->pc = 0x18DEFCu;
    SET_GPR_U32(ctx, 31, 0x18DF04u);
    ctx->pc = 0x18DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEFCu;
    // 0x18df00: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18DEFCu, 0x18DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF04u;
label_18df04:
    // 0x18df04: 0x8e220458  lw          $v0, 0x458($s1)
    ctx->pc = 0x18df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1112)));
    // 0x18df08: 0xc062d50  jal         func_18B540
    ctx->pc = 0x18DF08u;
    SET_GPR_U32(ctx, 31, 0x18DF10u);
    ctx->pc = 0x18DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF08u;
    // 0x18df0c: 0xae220454  sw          $v0, 0x454($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18DF08u, 0x18DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF10u;
label_18df10:
    // 0x18df10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18df10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df14: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x18df14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x18df18: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x18DF18u;
    SET_GPR_U32(ctx, 31, 0x18DF20u);
    ctx->pc = 0x18DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF18u;
    // 0x18df1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18DF18u, 0x18DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF20u;
label_18df20:
    // 0x18df20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18df20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df24: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18DF24u;
    SET_GPR_U32(ctx, 31, 0x18DF2Cu);
    ctx->pc = 0x18DF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF24u;
    // 0x18df28: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DF24u, 0x18DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF2Cu;
label_18df2c:
    // 0x18df2c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18df30: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x18df30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18df34: 0x24a528e0  addiu       $a1, $a1, 0x28E0
    ctx->pc = 0x18df34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10464));
    // 0x18df38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18df38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df3c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18df3cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x2128E0u));
    // 0x18df40: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18df40u;
    { uint32_t bits = FAST_READ32(0x2128E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18df44: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18df44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x18df48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18df48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18df4c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18df50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18df50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18df54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18df54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18df58: 0xc063e40  jal         func_18F900
    ctx->pc = 0x18DF58u;
    SET_GPR_U32(ctx, 31, 0x18DF60u);
    ctx->pc = 0x18DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF58u;
    // 0x18df5c: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18DF58u, 0x18DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF60u;
label_18df60:
    // 0x18df60: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18df60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18df64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18df64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18df68: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x18df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18df6c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x18df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18df70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18df70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18df74: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18df74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x18df78: 0xac850254  sw          $a1, 0x254($a0)
    ctx->pc = 0x18df78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 5));
    // 0x18df7c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18df80: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x18df80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18df84: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18df84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18df88: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18df88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x18df8c: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x18df8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x18df90: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18df90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x18df94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18df94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18df98: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18df98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18df9c: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x18df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x18dfa0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18dfa4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x18dfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18dfa8: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18dfac: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x18dfb0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x18dfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x18dfb4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x18dfb8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18dfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18dfbc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18dfc0: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x18dfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    // 0x18dfc4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18dfc8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18dfcc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18dfd0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18dfd4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18dfd8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18dfdc: 0xe4620274  swc1        $f2, 0x274($v1)
    ctx->pc = 0x18dfdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x18dfe0: 0xe4610278  swc1        $f1, 0x278($v1)
    ctx->pc = 0x18dfe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
    // 0x18dfe4: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x18dfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x18dfe8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x18DFE8u;
    {
        const bool branch_taken_0x18dfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFE8u;
        // 0x18dfec: 0xac620280  sw          $v0, 0x280($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfe8) {
            ctx->pc = 0x18E0D8u;
            return;
        }
    }
    ctx->pc = 0x18DFF0u;
}
