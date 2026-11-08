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

// Function: entry_0018dff0
// Address: 0x18dff0 - 0x18e0d8
void entry_0018dff0_0x18dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dff0_0x18dff0");
#endif

    switch (ctx->pc) {
        case 0x18dffcu: goto label_18dffc;
        case 0x18e00cu: goto label_18e00c;
        case 0x18e018u: goto label_18e018;
        case 0x18e04cu: goto label_18e04c;
        default: break;
    }

    ctx->pc = 0x18dff0u;

    // 0x18dff0: 0x8e220458  lw          $v0, 0x458($s1)
    ctx->pc = 0x18dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1112)));
    // 0x18dff4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x18DFF4u;
    SET_GPR_U32(ctx, 31, 0x18DFFCu);
    ctx->pc = 0x18DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFF4u;
    // 0x18dff8: 0xae220454  sw          $v0, 0x454($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18DFF4u, 0x18DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DFFCu;
label_18dffc:
    // 0x18dffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e000: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x18e000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x18e004: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x18E004u;
    SET_GPR_U32(ctx, 31, 0x18E00Cu);
    ctx->pc = 0x18E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E004u;
    // 0x18e008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18E004u, 0x18E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E00Cu;
label_18e00c:
    // 0x18e00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e010: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18E010u;
    SET_GPR_U32(ctx, 31, 0x18E018u);
    ctx->pc = 0x18E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E010u;
    // 0x18e014: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E010u, 0x18E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E018u;
label_18e018:
    // 0x18e018: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18e018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18e01c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x18e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x18e020: 0x24a528f0  addiu       $a1, $a1, 0x28F0
    ctx->pc = 0x18e020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10480));
    // 0x18e024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e028: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18e028u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x2128F0u));
    // 0x18e02c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18e02cu;
    { uint32_t bits = FAST_READ32(0x2128F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e030: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18e030u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x18e034: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18e034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18e038: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e03c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18e040: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18e044: 0xc063e40  jal         func_18F900
    ctx->pc = 0x18E044u;
    SET_GPR_U32(ctx, 31, 0x18E04Cu);
    ctx->pc = 0x18E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E044u;
    // 0x18e048: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18E044u, 0x18E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E04Cu;
label_18e04c:
    // 0x18e04c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18e04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e050: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18e050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e054: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x18e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18e058: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x18e058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x18e05c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18e060: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18e060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x18e064: 0xac850254  sw          $a1, 0x254($a0)
    ctx->pc = 0x18e064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 5));
    // 0x18e068: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18e068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e06c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x18e06cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18e070: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18e074: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18e074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x18e078: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x18e078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x18e07c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x18e080: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18e080u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e084: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18e084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18e088: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x18e088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x18e08c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e090: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x18e090u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18e094: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18e098: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18e098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x18e09c: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x18e09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x18e0a0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x18e0a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18e0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e0a8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18e0ac: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x18e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    // 0x18e0b0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e0b4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18e0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18e0b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e0bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18e0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e0c0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18e0c4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18e0c8: 0xe4620274  swc1        $f2, 0x274($v1)
    ctx->pc = 0x18e0c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x18e0cc: 0xe4610278  swc1        $f1, 0x278($v1)
    ctx->pc = 0x18e0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
    // 0x18e0d0: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x18e0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x18e0d4: 0xac620280  sw          $v0, 0x280($v1)
    ctx->pc = 0x18e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 2));
    ctx->pc = 0x18e0d8u;
}
