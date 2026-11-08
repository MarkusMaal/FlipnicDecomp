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

// Function: entry_0013fffc
// Address: 0x13fffc - 0x1400b4
void entry_0013fffc_0x13fffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fffc_0x13fffc");
#endif

    switch (ctx->pc) {
        case 0x140038u: goto label_140038;
        case 0x140044u: goto label_140044;
        case 0x14007cu: goto label_14007c;
        case 0x140088u: goto label_140088;
        default: break;
    }

    ctx->pc = 0x13fffcu;

    // 0x13fffc: 0x0  nop
    ctx->pc = 0x13fffcu;
    // NOP
    // 0x140000: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x140000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x140004: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x140004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x140008: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x140008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x14000c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x14000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x140010: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x140010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140018: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x140018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x14001c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x14001cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x140020: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x140020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x140024: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x140024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x140028: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x140028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14002c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14002cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140030: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x140030u;
    SET_GPR_U32(ctx, 31, 0x140038u);
    ctx->pc = 0x140034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140030u;
    // 0x140034: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x140030u, 0x140038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140038u;
label_140038:
    // 0x140038: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x140038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14003c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14003Cu;
    SET_GPR_U32(ctx, 31, 0x140044u);
    ctx->pc = 0x140040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14003Cu;
    // 0x140040: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14003Cu, 0x140044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140044u;
label_140044:
    // 0x140044: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x140044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x140048: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x140048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x14004c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x14004cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140050: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x140050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140054: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x140054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x140058: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x140058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x14005c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x14005cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x140060: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x140060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x140064: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x140064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x140068: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x140068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14006c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14006cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140070: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x140070u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x140074: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x140074u;
    SET_GPR_U32(ctx, 31, 0x14007Cu);
    ctx->pc = 0x140078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140074u;
    // 0x140078: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x140074u, 0x14007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14007Cu;
label_14007c:
    // 0x14007c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14007cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x140080: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x140080u;
    SET_GPR_U32(ctx, 31, 0x140088u);
    ctx->pc = 0x140084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140080u;
    // 0x140084: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x140080u, 0x140088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140088u;
label_140088:
    // 0x140088: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x140088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14008c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x14008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x140090: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x140090u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140094: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x140094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x140098: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x140098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14009c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14009cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1400a0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1400a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1400a4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1400a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1400a8: 0x83a7011c  lb          $a3, 0x11C($sp)
    ctx->pc = 0x1400a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1400ac: 0xc050198  jal         func_140660
    ctx->pc = 0x1400ACu;
    SET_GPR_U32(ctx, 31, 0x1400B4u);
    ctx->pc = 0x1400B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400ACu;
    // 0x1400b0: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140660u, 0x1400ACu, 0x1400B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400B4u;
}
