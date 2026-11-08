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

// Function: FUN_001be0e0
// Address: 0x1be0e0 - 0x1be2f0
void FUN_001be0e0_0x1be0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001be0e0_0x1be0e0");
#endif

    switch (ctx->pc) {
        case 0x1be160u: goto label_1be160;
        case 0x1be198u: goto label_1be198;
        case 0x1be1a0u: goto label_1be1a0;
        case 0x1be1d4u: goto label_1be1d4;
        case 0x1be1dcu: goto label_1be1dc;
        case 0x1be1ecu: goto label_1be1ec;
        case 0x1be1fcu: goto label_1be1fc;
        case 0x1be228u: goto label_1be228;
        case 0x1be248u: goto label_1be248;
        case 0x1be250u: goto label_1be250;
        case 0x1be27cu: goto label_1be27c;
        case 0x1be284u: goto label_1be284;
        case 0x1be294u: goto label_1be294;
        case 0x1be2a4u: goto label_1be2a4;
        case 0x1be2c8u: goto label_1be2c8;
        default: break;
    }

    ctx->pc = 0x1be0e0u;

    // 0x1be0e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1be0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1be0e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1be0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1be0e8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1be0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1be0ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1be0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1be0f0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1be0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1be0f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1be0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1be0f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1be0f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be100: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1be100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1be104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be108: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1be108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1be10c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1be10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be110: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1be110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be114: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1be114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be118: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1be118u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1be11c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1be11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1be120: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1be120u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1be124: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1be124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1be128: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1be128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1be12c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1be12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1be130: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1be130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be134: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1be134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be138: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1be138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be13c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1be13cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1be140: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1be140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1be144: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1be144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1be148: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1be148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1be14c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1be14cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be150: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1be150u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1be154: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1be154u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be158: 0xc050238  jal         func_1408E0
    ctx->pc = 0x1BE158u;
    SET_GPR_U32(ctx, 31, 0x1BE160u);
    ctx->pc = 0x1BE15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE158u;
    // 0x1be15c: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408E0u, 0x1BE158u, 0x1BE160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE160u;
label_1be160:
    // 0x1be160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be164: 0x27a300ec  addiu       $v1, $sp, 0xEC
    ctx->pc = 0x1be164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1be168: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x1be168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x1be16c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1be16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1be170: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x1be170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x1be174: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1be174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be178: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1be178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1be17c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE17Cu;
    {
        const bool branch_taken_0x1be17c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE17Cu;
        // 0x1be180: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be17c) {
            ctx->pc = 0x1BE1A0u;
            goto label_1be1a0;
        }
    }
    ctx->pc = 0x1BE184u;
    // 0x1be184: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1be184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1be188: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1be188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1be18c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1be18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1be190: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BE190u;
    SET_GPR_U32(ctx, 31, 0x1BE198u);
    ctx->pc = 0x1BE194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE190u;
    // 0x1be194: 0x24a51270  addiu       $a1, $a1, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BE190u, 0x1BE198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE198u;
label_1be198:
    // 0x1be198: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BE198u;
    SET_GPR_U32(ctx, 31, 0x1BE1A0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BE198u, 0x1BE1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1A0u;
label_1be1a0:
    // 0x1be1a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1be1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1be1a4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1be1a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1be1a8: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BE1A8u;
    {
        const bool branch_taken_0x1be1a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1A8u;
        // 0x1be1ac: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1a8) {
            ctx->pc = 0x1BE21Cu;
            goto label_1be21c;
        }
    }
    ctx->pc = 0x1BE1B0u;
    // 0x1be1b0: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x1be1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1be1b4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1be1b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be1b8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1be1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1be1bc: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1be1c0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1be1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1be1c4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1be1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1be1c8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1be1c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be1cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE1CCu;
    {
        const bool branch_taken_0x1be1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1CCu;
        // 0x1be1d0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1cc) {
            ctx->pc = 0x1BE1F0u;
            goto label_1be1f0;
        }
    }
    ctx->pc = 0x1BE1D4u;
label_1be1d4:
    // 0x1be1d4: 0xc050234  jal         func_1408D0
    ctx->pc = 0x1BE1D4u;
    SET_GPR_U32(ctx, 31, 0x1BE1DCu);
    ctx->pc = 0x1BE1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1D4u;
    // 0x1be1d8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x1BE1D4u, 0x1BE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1DCu;
label_1be1dc:
    // 0x1be1dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1be1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be1e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1be1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1be1e4: 0xc050224  jal         func_140890
    ctx->pc = 0x1BE1E4u;
    SET_GPR_U32(ctx, 31, 0x1BE1ECu);
    ctx->pc = 0x1BE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1E4u;
    // 0x1be1e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x1BE1E4u, 0x1BE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1ECu;
label_1be1ec:
    // 0x1be1ec: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1be1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1be1f0:
    // 0x1be1f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1be1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1be1f4: 0xc05021c  jal         func_140870
    ctx->pc = 0x1BE1F4u;
    SET_GPR_U32(ctx, 31, 0x1BE1FCu);
    ctx->pc = 0x1BE1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1F4u;
    // 0x1be1f8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x1BE1F4u, 0x1BE1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1FCu;
label_1be1fc:
    // 0x1be1fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1be1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1be200: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1be200u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1be204: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1be204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1be208: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BE208u;
    {
        const bool branch_taken_0x1be208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be208) {
            ctx->pc = 0x1BE1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be1d4;
        }
    }
    ctx->pc = 0x1BE210u;
    // 0x1be210: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1be210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1be214: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1BE214u;
    {
        const bool branch_taken_0x1be214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE214u;
        // 0x1be218: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be214) {
            ctx->pc = 0x1BE2D4u;
            goto label_1be2d4;
        }
    }
    ctx->pc = 0x1BE21Cu;
label_1be21c:
    // 0x1be21c: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x1be21cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1be220: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BE220u;
    SET_GPR_U32(ctx, 31, 0x1BE228u);
    ctx->pc = 0x1BE224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE220u;
    // 0x1be224: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BE220u, 0x1BE228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE228u;
label_1be228:
    // 0x1be228: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1be228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be22c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE22Cu;
    {
        const bool branch_taken_0x1be22c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE22Cu;
        // 0x1be230: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be22c) {
            ctx->pc = 0x1BE250u;
            goto label_1be250;
        }
    }
    ctx->pc = 0x1BE234u;
    // 0x1be234: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1be234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1be238: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1be238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1be23c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1be23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1be240: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BE240u;
    SET_GPR_U32(ctx, 31, 0x1BE248u);
    ctx->pc = 0x1BE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE240u;
    // 0x1be244: 0x24a51250  addiu       $a1, $a1, 0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BE240u, 0x1BE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE248u;
label_1be248:
    // 0x1be248: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BE248u;
    SET_GPR_U32(ctx, 31, 0x1BE250u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BE248u, 0x1BE250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE250u;
label_1be250:
    // 0x1be250: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x1be250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
    // 0x1be254: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1be254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1be258: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1be258u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be25c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1be25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1be260: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x1be260u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1be264: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1be264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be268: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1be268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1be26c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1be26cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1be270: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1be270u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be274: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE274u;
    {
        const bool branch_taken_0x1be274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE274u;
        // 0x1be278: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be274) {
            ctx->pc = 0x1BE298u;
            goto label_1be298;
        }
    }
    ctx->pc = 0x1BE27Cu;
label_1be27c:
    // 0x1be27c: 0xc050234  jal         func_1408D0
    ctx->pc = 0x1BE27Cu;
    SET_GPR_U32(ctx, 31, 0x1BE284u);
    ctx->pc = 0x1BE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE27Cu;
    // 0x1be280: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x1BE27Cu, 0x1BE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE284u;
label_1be284:
    // 0x1be284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1be284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be288: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1be288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1be28c: 0xc050224  jal         func_140890
    ctx->pc = 0x1BE28Cu;
    SET_GPR_U32(ctx, 31, 0x1BE294u);
    ctx->pc = 0x1BE290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE28Cu;
    // 0x1be290: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x1BE28Cu, 0x1BE294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE294u;
label_1be294:
    // 0x1be294: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1be294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1be298:
    // 0x1be298: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1be298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1be29c: 0xc05021c  jal         func_140870
    ctx->pc = 0x1BE29Cu;
    SET_GPR_U32(ctx, 31, 0x1BE2A4u);
    ctx->pc = 0x1BE2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE29Cu;
    // 0x1be2a0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x1BE29Cu, 0x1BE2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2A4u;
label_1be2a4:
    // 0x1be2a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1be2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1be2a8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1be2a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1be2ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1be2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1be2b0: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BE2B0u;
    {
        const bool branch_taken_0x1be2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be2b0) {
            ctx->pc = 0x1BE27Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be27c;
        }
    }
    ctx->pc = 0x1BE2B8u;
    // 0x1be2b8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE2B8u;
    {
        const bool branch_taken_0x1be2b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2B8u;
        // 0x1be2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2b8) {
            ctx->pc = 0x1BE2C8u;
            goto label_1be2c8;
        }
    }
    ctx->pc = 0x1BE2C0u;
    // 0x1be2c0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE2C0u;
    SET_GPR_U32(ctx, 31, 0x1BE2C8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE2C0u, 0x1BE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2C8u;
label_1be2c8:
    // 0x1be2c8: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1be2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x1be2cc: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1be2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x1be2d0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1be2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1be2d4:
    // 0x1be2d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1be2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be2d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1be2d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be2dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1be2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be2e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be2e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be2e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2E8u;
        // 0x1be2ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE2F0u;
}
