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

// Function: entry_00140e94
// Address: 0x140e94 - 0x140f80
void entry_00140e94_0x140e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140e94_0x140e94");
#endif

    switch (ctx->pc) {
        case 0x140edcu: goto label_140edc;
        case 0x140f10u: goto label_140f10;
        default: break;
    }

    ctx->pc = 0x140e94u;

    // 0x140e94: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x140e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140e98: 0x27a60094  addiu       $a2, $sp, 0x94
    ctx->pc = 0x140e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x140e9c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x140e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x140ea0: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x140ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x140ea4: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x140ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x140ea8: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x140ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x140eac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140eb0: 0xafb20090  sw          $s2, 0x90($sp)
    ctx->pc = 0x140eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 18));
    // 0x140eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140eb8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x140eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x140ebc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x140ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x140ec0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x140ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x140ec4: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x140ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x140ec8: 0x8cd40000  lw          $s4, 0x0($a2)
    ctx->pc = 0x140ec8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140ecc: 0xafb40234  sw          $s4, 0x234($sp)
    ctx->pc = 0x140eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 20));
    // 0x140ed0: 0x8cf50000  lw          $s5, 0x0($a3)
    ctx->pc = 0x140ed0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140ed4: 0xc050184  jal         func_140610
    ctx->pc = 0x140ED4u;
    SET_GPR_U32(ctx, 31, 0x140EDCu);
    ctx->pc = 0x140ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140ED4u;
    // 0x140ed8: 0xafb50238  sw          $s5, 0x238($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x140ED4u, 0x140EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140EDCu;
label_140edc:
    // 0x140edc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x140edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140ee0: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x140ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x140ee4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x140ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x140ee8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140eec: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x140eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x140ef0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x140ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x140ef4: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x140ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x140ef8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x140ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x140efc: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x140efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x140f00: 0xafa30240  sw          $v1, 0x240($sp)
    ctx->pc = 0x140f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
    // 0x140f04: 0xafb40244  sw          $s4, 0x244($sp)
    ctx->pc = 0x140f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 20));
    // 0x140f08: 0xc050184  jal         func_140610
    ctx->pc = 0x140F08u;
    SET_GPR_U32(ctx, 31, 0x140F10u);
    ctx->pc = 0x140F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140F08u;
    // 0x140f0c: 0xafb50248  sw          $s5, 0x248($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x140F08u, 0x140F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F10u;
label_140f10:
    // 0x140f10: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x140f10u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140f14: 0x27ab00c0  addiu       $t3, $sp, 0xC0
    ctx->pc = 0x140f14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x140f18: 0x27aa0180  addiu       $t2, $sp, 0x180
    ctx->pc = 0x140f18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x140f1c: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x140f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x140f20: 0x27a80170  addiu       $t0, $sp, 0x170
    ctx->pc = 0x140f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x140f24: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x140f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x140f28: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x140f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x140f2c: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x140f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x140f30: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x140f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x140f34: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x140f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x140f38: 0xafac00c0  sw          $t4, 0xC0($sp)
    ctx->pc = 0x140f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 12));
    // 0x140f3c: 0x8c4c0004  lw          $t4, 0x4($v0)
    ctx->pc = 0x140f3cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x140f40: 0xafac00c4  sw          $t4, 0xC4($sp)
    ctx->pc = 0x140f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 12));
    // 0x140f44: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x140f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x140f48: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x140f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x140f4c: 0xdd620000  ld          $v0, 0x0($t3)
    ctx->pc = 0x140f4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x140f50: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x140f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140f54: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x140f54u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x140f58: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x140f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x140f5c: 0xdd220000  ld          $v0, 0x0($t1)
    ctx->pc = 0x140f5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140f60: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x140f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140f64: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x140f64u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x140f68: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x140f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x140f6c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x140f6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140f70: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x140f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140f74: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x140f74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x140f78: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x140F78u;
    {
        const bool branch_taken_0x140f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F78u;
        // 0x140f7c: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f78) {
            ctx->pc = 0x141000u;
            return;
        }
    }
    ctx->pc = 0x140F80u;
}
