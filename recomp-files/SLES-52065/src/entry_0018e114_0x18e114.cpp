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

// Function: entry_0018e114
// Address: 0x18e114 - 0x18e240
void entry_0018e114_0x18e114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e114_0x18e114");
#endif

    switch (ctx->pc) {
        case 0x18e14cu: goto label_18e14c;
        case 0x18e15cu: goto label_18e15c;
        case 0x18e170u: goto label_18e170;
        case 0x18e17cu: goto label_18e17c;
        case 0x18e19cu: goto label_18e19c;
        case 0x18e1acu: goto label_18e1ac;
        case 0x18e1d8u: goto label_18e1d8;
        case 0x18e1e0u: goto label_18e1e0;
        case 0x18e1f0u: goto label_18e1f0;
        case 0x18e1f8u: goto label_18e1f8;
        case 0x18e208u: goto label_18e208;
        case 0x18e210u: goto label_18e210;
        case 0x18e238u: goto label_18e238;
        default: break;
    }

    ctx->pc = 0x18e114u;

label_18e114:
    // 0x18e114: 0x8e240450  lw          $a0, 0x450($s1)
    ctx->pc = 0x18e114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18e118:
    // 0x18e118: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18e118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18e11c:
    // 0x18e11c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_18e120:
    // 0x18e120: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18e120u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e124:
    // 0x18e124: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18e124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18e128:
    // 0x18e128: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18e128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e12c:
    // 0x18e12c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e130:
    // 0x18e130: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_18e134:
    // 0x18e134: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x18e134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_18e138:
    // 0x18e138: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
label_18e13c:
    if (ctx->pc == 0x18E13Cu) {
        ctx->pc = 0x18E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E138u;
        // 0x18e13c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E140u;
        goto label_18e140;
    }
    ctx->pc = 0x18E138u;
    {
        const bool branch_taken_0x18e138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E138u;
        // 0x18e13c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e138) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18E140u;
label_18e140:
    // 0x18e140: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e144:
    // 0x18e144: 0xc05f878  jal         func_17E1E0
label_18e148:
    if (ctx->pc == 0x18E148u) {
        ctx->pc = 0x18E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E144u;
        // 0x18e148: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E14Cu;
        goto label_18e14c;
    }
    ctx->pc = 0x18E144u;
    SET_GPR_U32(ctx, 31, 0x18E14Cu);
    ctx->pc = 0x18E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E144u;
    // 0x18e148: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E144u, 0x18E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E14Cu;
label_18e14c:
    // 0x18e14c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e150:
    // 0x18e150: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18e150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18e154:
    // 0x18e154: 0x320f809  jalr        $t9
label_18e158:
    if (ctx->pc == 0x18E158u) {
        ctx->pc = 0x18E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E154u;
        // 0x18e158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E15Cu;
        goto label_18e15c;
    }
    ctx->pc = 0x18E154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18E15Cu);
        ctx->pc = 0x18E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E154u;
        // 0x18e158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E154u, 0x18E15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E15Cu;
label_18e15c:
    // 0x18e15c: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_18e160:
    if (ctx->pc == 0x18E160u) {
        ctx->pc = 0x18E164u;
        goto label_18e164;
    }
    ctx->pc = 0x18E15Cu;
    {
        const bool branch_taken_0x18e15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e15c) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18E164u;
label_18e164:
    // 0x18e164: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18e164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18e168:
    // 0x18e168: 0xc04c6dc  jal         func_131B70
label_18e16c:
    if (ctx->pc == 0x18E16Cu) {
        ctx->pc = 0x18E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E168u;
        // 0x18e16c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E170u;
        goto label_18e170;
    }
    ctx->pc = 0x18E168u;
    SET_GPR_U32(ctx, 31, 0x18E170u);
    ctx->pc = 0x18E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E168u;
    // 0x18e16c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x18E168u, 0x18E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E170u;
label_18e170:
    // 0x18e170: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18e170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_18e174:
    // 0x18e174: 0xc046458  jal         func_119160
label_18e178:
    if (ctx->pc == 0x18E178u) {
        ctx->pc = 0x18E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E174u;
        // 0x18e178: 0x2484fd58  addiu       $a0, $a0, -0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E17Cu;
        goto label_18e17c;
    }
    ctx->pc = 0x18E174u;
    SET_GPR_U32(ctx, 31, 0x18E17Cu);
    ctx->pc = 0x18E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E174u;
    // 0x18e178: 0x2484fd58  addiu       $a0, $a0, -0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x18E174u, 0x18E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E17Cu;
label_18e17c:
    // 0x18e17c: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x18e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_18e180:
    // 0x18e180: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18e184:
    // 0x18e184: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_18e188:
    // 0x18e188: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x18e188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18e18c:
    // 0x18e18c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18e18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18e190:
    // 0x18e190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e194:
    // 0x18e194: 0xc046680  jal         func_119A00
label_18e198:
    if (ctx->pc == 0x18E198u) {
        ctx->pc = 0x18E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E194u;
        // 0x18e198: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E19Cu;
        goto label_18e19c;
    }
    ctx->pc = 0x18E194u;
    SET_GPR_U32(ctx, 31, 0x18E19Cu);
    ctx->pc = 0x18E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E194u;
    // 0x18e198: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A00u, 0x18E194u, 0x18E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E19Cu;
label_18e19c:
    // 0x18e19c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18e19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18e1a0:
    // 0x18e1a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e1a4:
    // 0x18e1a4: 0xc05f878  jal         func_17E1E0
label_18e1a8:
    if (ctx->pc == 0x18E1A8u) {
        ctx->pc = 0x18E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1A4u;
        // 0x18e1a8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1ACu;
        goto label_18e1ac;
    }
    ctx->pc = 0x18E1A4u;
    SET_GPR_U32(ctx, 31, 0x18E1ACu);
    ctx->pc = 0x18E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E1A4u;
    // 0x18e1a8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E1A4u, 0x18E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1ACu;
label_18e1ac:
    // 0x18e1ac: 0x8e260450  lw          $a2, 0x450($s1)
    ctx->pc = 0x18e1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18e1b0:
    // 0x18e1b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e1b4:
    // 0x18e1b4: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18e1b8:
    // 0x18e1b8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18e1bc:
    // 0x18e1bc: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x18e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18e1c0:
    // 0x18e1c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e1c4:
    // 0x18e1c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e1c8:
    // 0x18e1c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18e1cc:
    // 0x18e1cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18e1d0:
    // 0x18e1d0: 0xc0532f4  jal         func_14CBD0
label_18e1d4:
    if (ctx->pc == 0x18E1D4u) {
        ctx->pc = 0x18E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1D0u;
        // 0x18e1d4: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1D8u;
        goto label_18e1d8;
    }
    ctx->pc = 0x18E1D0u;
    SET_GPR_U32(ctx, 31, 0x18E1D8u);
    ctx->pc = 0x18E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E1D0u;
    // 0x18e1d4: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18E1D0u, 0x18E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1D8u;
label_18e1d8:
    // 0x18e1d8: 0xc062d50  jal         func_18B540
label_18e1dc:
    if (ctx->pc == 0x18E1DCu) {
        ctx->pc = 0x18E1E0u;
        goto label_18e1e0;
    }
    ctx->pc = 0x18E1D8u;
    SET_GPR_U32(ctx, 31, 0x18E1E0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18E1D8u, 0x18E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1E0u;
label_18e1e0:
    // 0x18e1e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e1e4:
    // 0x18e1e4: 0x240500e3  addiu       $a1, $zero, 0xE3
    ctx->pc = 0x18e1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
label_18e1e8:
    // 0x18e1e8: 0xc062b5c  jal         func_18AD70
label_18e1ec:
    if (ctx->pc == 0x18E1ECu) {
        ctx->pc = 0x18E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1E8u;
        // 0x18e1ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1F0u;
        goto label_18e1f0;
    }
    ctx->pc = 0x18E1E8u;
    SET_GPR_U32(ctx, 31, 0x18E1F0u);
    ctx->pc = 0x18E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E1E8u;
    // 0x18e1ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18E1E8u, 0x18E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1F0u;
label_18e1f0:
    // 0x18e1f0: 0xc062d50  jal         func_18B540
label_18e1f4:
    if (ctx->pc == 0x18E1F4u) {
        ctx->pc = 0x18E1F8u;
        goto label_18e1f8;
    }
    ctx->pc = 0x18E1F0u;
    SET_GPR_U32(ctx, 31, 0x18E1F8u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18E1F0u, 0x18E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1F8u;
label_18e1f8:
    // 0x18e1f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e1fc:
    // 0x18e1fc: 0x240500ee  addiu       $a1, $zero, 0xEE
    ctx->pc = 0x18e1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
label_18e200:
    // 0x18e200: 0xc062b5c  jal         func_18AD70
label_18e204:
    if (ctx->pc == 0x18E204u) {
        ctx->pc = 0x18E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E200u;
        // 0x18e204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E208u;
        goto label_18e208;
    }
    ctx->pc = 0x18E200u;
    SET_GPR_U32(ctx, 31, 0x18E208u);
    ctx->pc = 0x18E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E200u;
    // 0x18e204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18E200u, 0x18E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E208u;
label_18e208:
    // 0x18e208: 0xc063e14  jal         func_18F850
label_18e20c:
    if (ctx->pc == 0x18E20Cu) {
        ctx->pc = 0x18E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E208u;
        // 0x18e20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E210u;
        goto label_18e210;
    }
    ctx->pc = 0x18E208u;
    SET_GPR_U32(ctx, 31, 0x18E210u);
    ctx->pc = 0x18E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E208u;
    // 0x18e20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18E208u, 0x18E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E210u;
label_18e210:
    // 0x18e210: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x18e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e214:
    // 0x18e214: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x18e214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_18e218:
    // 0x18e218: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e21c:
    // 0x18e21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e220:
    // 0x18e220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18e224:
    // 0x18e224: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18e224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18e228:
    // 0x18e228: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e228u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18e22c:
    // 0x18e22c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x18e22cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_18e230:
    // 0x18e230: 0xc063de0  jal         func_18F780
label_18e234:
    if (ctx->pc == 0x18E234u) {
        ctx->pc = 0x18E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E230u;
        // 0x18e234: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E238u;
        goto label_18e238;
    }
    ctx->pc = 0x18E230u;
    SET_GPR_U32(ctx, 31, 0x18E238u);
    ctx->pc = 0x18E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E230u;
    // 0x18e234: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x18E230u, 0x18E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E238u;
label_18e238:
    // 0x18e238: 0x10000045  b           . + 4 + (0x45 << 2)
label_18e23c:
    if (ctx->pc == 0x18E23Cu) {
        ctx->pc = 0x18E240u;
        goto label_fallthrough_0x18e238;
    }
    ctx->pc = 0x18E238u;
    {
        const bool branch_taken_0x18e238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e238) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
label_fallthrough_0x18e238:
    ctx->pc = 0x18E240u;
}
