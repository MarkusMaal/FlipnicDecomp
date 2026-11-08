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

// Function: entry_0014b32c
// Address: 0x14b32c - 0x14b3e4
void entry_0014b32c_0x14b32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b32c_0x14b32c");
#endif

    switch (ctx->pc) {
        case 0x14b368u: goto label_14b368;
        case 0x14b374u: goto label_14b374;
        case 0x14b3acu: goto label_14b3ac;
        case 0x14b3b8u: goto label_14b3b8;
        default: break;
    }

    ctx->pc = 0x14b32cu;

    // 0x14b32c: 0x0  nop
    ctx->pc = 0x14b32cu;
    // NOP
    // 0x14b330: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x14b330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x14b334: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x14b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x14b338: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x14b338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x14b33c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x14b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14b340: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b348: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x14b348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x14b34c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x14b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x14b350: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x14b350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x14b354: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14b354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14b358: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x14b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b35c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b360: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B360u;
    SET_GPR_U32(ctx, 31, 0x14B368u);
    ctx->pc = 0x14B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B360u;
    // 0x14b364: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B360u, 0x14B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B368u;
label_14b368:
    // 0x14b368: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x14b368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14b36c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B36Cu;
    SET_GPR_U32(ctx, 31, 0x14B374u);
    ctx->pc = 0x14B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B36Cu;
    // 0x14b370: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B36Cu, 0x14B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B374u;
label_14b374:
    // 0x14b374: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x14b374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14b378: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x14b378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x14b37c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x14b37cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b380: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x14b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b384: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x14b384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x14b388: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x14b388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x14b38c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x14b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x14b390: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x14b390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14b394: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x14b394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x14b398: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x14b398u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b39c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14b39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b3a0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x14b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x14b3a4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B3A4u;
    SET_GPR_U32(ctx, 31, 0x14B3ACu);
    ctx->pc = 0x14B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3A4u;
    // 0x14b3a8: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B3A4u, 0x14B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3ACu;
label_14b3ac:
    // 0x14b3ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14b3b0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B3B0u;
    SET_GPR_U32(ctx, 31, 0x14B3B8u);
    ctx->pc = 0x14B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3B0u;
    // 0x14b3b4: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B3B0u, 0x14B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3B8u;
label_14b3b8:
    // 0x14b3b8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x14b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14b3bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x14b3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14b3c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14b3c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b3c4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x14b3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14b3c8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x14b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14b3cc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14b3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x14b3d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14b3d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b3d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14b3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14b3d8: 0x83a7011c  lb          $a3, 0x11C($sp)
    ctx->pc = 0x14b3d8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x14b3dc: 0xc052e54  jal         func_14B950
    ctx->pc = 0x14B3DCu;
    SET_GPR_U32(ctx, 31, 0x14B3E4u);
    ctx->pc = 0x14B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3DCu;
    // 0x14b3e0: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B950u, 0x14B3DCu, 0x14B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3E4u;
}
